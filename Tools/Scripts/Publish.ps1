
$scriptPath = Split-Path -parent $MyInvocation.MyCommand.Path
. $scriptPath\Shared\Functions.ps1
SetFolder $scriptPath

. Tools\Scripts\Shared\FileGenerator.ps1
. Tools\Scripts\Shared\GzipAssembly.ps1
. Tools\Scripts\Shared\ProjectFiles.ps1
. Tools\Scripts\Shared\Publish.ps1

[void][Reflection.Assembly]::LoadWithPartialName("System.IO.Compression.FileSystem")
$compressionLevel = [System.IO.Compression.CompressionLevel]::Optimal

if ($args.count -ne 1)
{
  Write-Error "Invalid arguments"
  Exit 1
}
$version = $args[0]

$builds = @(
  @{Name = "GraphicsMagick.NET.net20"; Quantum = "Q8"; Platform = "Win32"; PlatformName = "x86"; Framework = "v2.0"; FrameworkName = "net20"; RunTests = $true}
  @{Name = "GraphicsMagick.NET.net20"; Quantum = "Q8"; Platform = "x64"; PlatformName = "x64"; Framework = "v2.0"; FrameworkName = "net20"; RunTests = $false}
  @{Name = "GraphicsMagick.NET.net20"; Quantum = "Q16"; Platform = "Win32"; PlatformName = "x86"; Framework = "v2.0"; FrameworkName = "net20"; RunTests = $true}
  @{Name = "GraphicsMagick.NET.net20"; Quantum = "Q16"; Platform = "x64"; PlatformName = "x64"; Framework = "v2.0"; FrameworkName = "net20"; RunTests = $false}
  @{Name = "GraphicsMagick.NET"; Quantum = "Q8"; Platform = "Win32"; PlatformName = "x86"; Framework = "v4.0"; FrameworkName = "net40-client"; RunTests = $true}
  @{Name = "GraphicsMagick.NET"; Quantum = "Q8"; Platform = "x64"; PlatformName = "x64"; Framework = "v4.0"; FrameworkName = "net40-client"; RunTests = $false}
  @{Name = "GraphicsMagick.NET"; Quantum = "Q16"; Platform = "Win32"; PlatformName = "x86"; Framework = "v4.0"; FrameworkName = "net40-client"; RunTests = $true}
  @{Name = "GraphicsMagick.NET"; Quantum = "Q16"; Platform = "x64"; PlatformName = "x64"; Framework = "v4.0"; FrameworkName = "net40-client"; RunTests = $false}
)
$anyCPUbuilds = @(
  @{Name = "GraphicsMagick.NET.AnyCPU"; Quantum = "Q8"; Platform = "AnyCPU"; PlatformName = "AnyCPU"; Framework = "v4.0"; FrameworkName = "net40-client"; RunTests = $true}
  @{Name = "GraphicsMagick.NET.AnyCPU"; Quantum = "Q16"; Platform = "AnyCPU"; PlatformName = "AnyCPU"; Framework = "v4.0"; FrameworkName = "net40-client"; RunTests = $true}
)

function Build($builds)
{
  foreach ($build in $builds)
  {
    $config = "Release"

    if ($build.RunTests -eq $true)
    {
      $config = "Tests"
    }

    BuildSolution "$($build.Name).sln" "Configuration=$config$($build.Quantum),RunCodeAnalysis=false,Platform=$($build.Platform)"

    if ($build.RunTests -eq $true)
    {
      $location = $(Get-Location)
      Set-Location "GraphicsMagick.NET.Tests\bin\Release$($build.Quantum)\$($build.Name)"

       # vstest.console.exe keeps crashing, so we need to use mstest.exe instead
      mstest.exe /testcontainer:GraphicsMagick.NET.Tests.dll

      CheckExitCode ("Test failed for GraphicsMagick.NET-" + $build.Quantum + "-" + $build.PlatformName + " (" + $build.FrameworkName + ")")

      Set-Location $location
    }
  }
}

function CheckArchive()
{
  if ((Test-Path "Publish\Archive\$version"))
  {
    Write-Error "$version has already been published"
    Exit
  }
}

function CheckStrongNames($builds)
{
  foreach ($build in $builds)
  {
    CheckStrongName $build.Name $build.Quantum $build.Platform $build.PlatformName

    if ($build.Quantum -ne "Q16" -or $build.Framework -ne "v4.0")
    {
      continue
    }

    CheckStrongName "GraphicsMagick.NET.Web" $build.Quantum $build.PlatformName $build.PlatformName
  }
}

function Cleanup()
{
  $folder = FullPath "Publish\Pdb"
  if (Test-Path $folder)
  {
    Remove-Item $folder -recurse
  }
  [void](New-Item -ItemType directory -Path $folder)
}

function CopyPdbFiles($builds)
{
  foreach ($build in $builds)
  {
    $source = "$($build.Name)\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).pdb"
    $destination = "Publish\Pdb\$($build.Quantum)-$($build.FrameworkName).GraphicsMagick.NET-$($build.PlatformName).pdb"

    Copy-Item $source $destination
  }
}

function CopyZipFiles($builds)
{
  foreach ($build in $builds)
  {
    $rootDir = FullPath "Publish\Zip\$($build.Quantum)-$($build.PlatformName)"
    if (!(Test-Path $rootDir))
    {
      [void](New-Item $rootDir -type directory)
    }

    Copy-Item "GraphicsMagick.NET\Resources\Release$($build.Quantum)\MagickScript.xsd" $rootDir

    $dir = "$rootDir\$($build.FrameworkName)"
    if (!(Test-Path $dir))
    {
      [void](New-Item $dir -type directory)
    }

    Copy-Item "$($build.Name)\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).dll" $dir
    Copy-Item "$($build.Name)\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).xml" $dir
  }
}

function CreateNuGetPackages($builds)
{
  $hasNet20 = $false
  foreach ($build in $builds)
  {
    if ($build.Framework -eq "v2.0")
    {
      $hasNet20 = $true
    }
  }

  foreach ($build in $builds)
  {
    if ($build.Framework -ne "v4.0")
    {
      continue
    }

    $id = "GraphicsMagick.NET-$($build.Quantum)-$($build.PlatformName)"
    CreateNuGetPackage $id $version $build.Name $build.Quantum $build.Platform $build.PlatformName $hasNet20
  }
}

function CreateZipFiles($builds)
{
  foreach ($build in $builds)
  {
    $dir = FullPath "Publish\Zip\$($build.Quantum)-$($build.PlatformName)"
    if (!(Test-Path $dir))
    {
      continue
    }

    $zipFile = FullPath "Publish\Zip\GraphicsMagick.NET-$version-$($build.Quantum)-$($build.PlatformName).zip"
    if (Test-Path $zipFile)
    {
      Remove-Item $zipFile
    }

    Write-Host "Creating file: $zipFile"

    [System.IO.Compression.ZipFile]::CreateFromDirectory($dir, $zipFile, $compressionLevel, $false)
    Remove-Item $dir -recurse
  }
}

function Publish($builds)
{
  Build $builds
  CheckStrongNames $builds
  CopyPdbFiles $builds
  CopyZipFiles $builds
  CreateZipFiles $builds
  CreateNuGetPackages $builds
}

function UpdateResourceFiles($builds)
{
  foreach ($build in $builds)
  {
    UpdateResourceFile $build.Name $build.Quantum $build.Platform $version
  }
}

CheckArchive
Cleanup
UpdateAssemblyInfo $version
CreateNet20ProjectFiles
UpdateResourceFiles $builds
Publish $builds
GzipAssemblies
GenerateAnyCPUFiles
CreateAnyCPUProjectFiles
Publish $anyCPUbuilds

