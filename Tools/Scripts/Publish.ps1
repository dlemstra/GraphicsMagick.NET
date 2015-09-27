#==================================================================================================
$scriptPath = Split-Path -parent $MyInvocation.MyCommand.Path
. $scriptPath\Shared\Functions.ps1
SetFolder $scriptPath
#==================================================================================================
. Tools\Scripts\Shared\FileGenerator.ps1
. Tools\Scripts\Shared\GzipAssembly.ps1
. Tools\Scripts\Shared\ProjectFiles.ps1
#==================================================================================================
[void][Reflection.Assembly]::LoadWithPartialName("System.IO.Compression.FileSystem")
$compressionLevel = [System.IO.Compression.CompressionLevel]::Optimal
#==================================================================================================
if ($args.count -ne 2)
{
	Write-Error "Invalid arguments"
	Exit 1
}
$gmVersion = $args[0]
$version = $args[1]
#==================================================================================================
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
#==================================================================================================
function AddFileElement($xml, $src, $target)
{
	$files = $xml.package.files

	if (!($files))
	{
		$files = $xml.CreateElement("files", $xml.DocumentElement.NamespaceURI)
		[void]$xml.package.AppendChild($files)
	}

	$file = $xml.CreateElement("file", $xml.DocumentElement.NamespaceURI)
	
	$srcAtt = $xml.CreateAttribute("src")
	$srcAtt.Value = $src
	[void]$file.Attributes.Append($srcAtt)

	$targetAtt = $xml.CreateAttribute("target")
	$targetAtt.Value = $target
	[void]$file.Attributes.Append($targetAtt)

	[void]$files.AppendChild($file)
}
#==================================================================================================
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

			VSTest.Console.exe "GraphicsMagick.NET.Tests.dll"
			CheckExitCode ("Test failed for GraphicsMagick.NET-" + $build.Quantum + "-" + $build.PlatformName + " (" + $build.FrameworkName + ")")

			Set-Location $location
		}
	}
}
#==================================================================================================
function CheckArchive()
{
	if ((Test-Path "Publish\Archive\$version"))
	{
		Write-Error "$version has already been published"
		Exit
	}
}
#==================================================================================================
function CheckStrongName($builds)
{
	foreach ($build in $builds)
	{
		$path = FullPath "$($build.Name)\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).dll"
		sn -Tp $path
		CheckExitCode "$path does not represent a strongly named assembly"

		if ($build.Quantum -ne "Q16" -or $build.Framework -ne "v4.0")
		{
			continue
		}

		$path = FullPath "GraphicsMagick.NET.Web\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET.Web-$($build.PlatformName).dll"
		CheckExitCode "$path does not represent a strongly named assembly"
	}
}
#==================================================================================================
function Cleanup()
{
	$folder = FullPath "Publish\Pdb"
	if (Test-Path $folder)
	{
		Remove-Item $folder -recurse
	}
	[void](New-Item -ItemType directory -Path $folder)
}
#==================================================================================================
function CopyPdbFiles($builds)
{
	foreach ($build in $builds)
	{
		$source = "$($build.Name)\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).pdb"
		$destination = "Publish\Pdb\$($build.Quantum)-$($build.FrameworkName).GraphicsMagick.NET-$($build.PlatformName).pdb"

		Copy-Item $source $destination
	}
}
#==================================================================================================
function CreateNuGetPackage($id, $xml)
{
	$xml.package.metadata.id = $id
	$xml.package.metadata.title = $id
	$xml.package.metadata.version = $version

	$dir = FullPath "Publish\NuGet"
	$nuspecFile = "$dir\$id.nuspec"
	if (Test-Path $nuspecFile)
	{
		Remove-Item $nuspecFile
	}

	$xml.Save($nuspecFile)

	.\Tools\Programs\NuGet.exe pack $nuspecFile -NoPackageAnalysis -OutputDirectory $dir
	CheckExitCode "Failed to create NuGet package"

	Remove-Item $nuspecFile
}
#==================================================================================================
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

		$path = FullPath "Publish\NuGet\GraphicsMagick.NET.nuspec"
		$xml = [xml](Get-Content $path)
		
		$id = "GraphicsMagick.NET-$($build.Quantum)-$($build.PlatformName)"
		$xml.package.metadata.releaseNotes = "GraphicsMagick.NET linked with GraphicsMagick " + $gmVersion
		
		if ($hasNet20 -eq $true)
		{
			AddFileElement $xml "..\..\GraphicsMagick.NET.net20\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).dll" "lib\net20"
			AddFileElement $xml "..\..\GraphicsMagick.NET.net20\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).xml" "lib\net20"
		}
		AddFileElement $xml "..\..\$($build.Name)\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).dll" "lib\net40-client"
		AddFileElement $xml "..\..\$($build.Name)\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).xml" "lib\net40-client"
		
		AddFileElement $xml ("Readme.txt") "Readme.txt"
		
		CreateNuGetPackage $id $xml
	}
}
#==================================================================================================
function CreateScriptZipFile($build)
{
	$dir = FullPath "Publish\Zip\$($build.Quantum)"
	if (Test-Path $dir)
	{
		Remove-Item $dir -recurse
	}

	[void](New-Item $dir -type directory)
	Copy-Item "GraphicsMagick.NET\Resources\Release$($build.Quantum)\MagickScript.xsd" $dir

	$zipFile = FullPath "Publish\Zip\MagickScript-$version-$($build.Quantum).zip"

	Write-Host "Creating file: $zipFile"

	[System.IO.Compression.ZipFile]::CreateFromDirectory($dir, $zipFile, $compressionLevel, $false)
	Remove-Item $dir -recurse
}
#==================================================================================================
function CreateWebZipFile($build)
{
	if ($build.Framework -ne "v4.0")
	{
		return
	}

	$dir = FullPath "Publish\Zip\$($build.PlatformName)"
	if (Test-Path $dir)
	{
		Remove-Item $dir -recurse
	}

	[void](New-Item $dir -type directory)
	Copy-Item "GraphicsMagick.NET.Web\bin\Release$($build.Quantum)\$($build.PlatformName)\GraphicsMagick.NET.Web-$($build.PlatformName).dll" $dir

	$zipFile = FullPath "Publish\Zip\GraphicsMagick.NET.Web-$version-$($build.Quantum)-$($build.PlatformName)-net40.zip"

	Write-Host "Creating file: $zipFile"

	[System.IO.Compression.ZipFile]::CreateFromDirectory($dir, $zipFile, $compressionLevel, $false)
	Remove-Item $dir -recurse
}
#==================================================================================================
function CreateZipFiles($builds)
{
	foreach ($build in $builds)
	{
		$dir = FullPath "Publish\Zip\$($build.Quantum)-$($build.PlatformName)-$($build.FrameworkName)"
		if (Test-Path $dir)
		{
			Remove-Item $dir -recurse
		}

		[void](New-Item $dir -type directory)
		Copy-Item "$($build.Name)\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).dll" $dir
		Copy-Item "$($build.Name)\bin\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET-$($build.PlatformName).xml" $dir
		
		$zipFile = FullPath "Publish\Zip\GraphicsMagick.NET-$version-$($build.Quantum)-$($build.PlatformName)-$($build.FrameworkName).zip"
		if (Test-Path $zipFile)
		{
			Remove-Item $zipFile
		}

		Write-Host "Creating file: $zipFile"

		[System.IO.Compression.ZipFile]::CreateFromDirectory($dir, $zipFile, $compressionLevel, $false)
		Remove-Item $dir -recurse

		CreateWebZipFile $build
	}
}
#==================================================================================================
function Publish($builds)
{
	Build $builds
	CheckStrongName $builds
	CopyPdbFiles $builds
	CreateZipFiles $builds
	CreateNuGetPackages $builds
}
#==================================================================================================
function SetVersion($content, $startMatch, $endMatch, $version)
{
	$start = $content.IndexOf($startMatch)
	if ($start -eq -1)
	{
		Write-Error "Unable to find startMatch"
		Exit
	}

	$start += $startMatch.Length

	$newContent = $content.Substring(0, $start)
	$newContent += $version

	$start = $content.IndexOf($endMatch, $start)
	if ($start -eq -1)
	{
		Write-Error "Unable to find endMatch"
		Exit
	}

	$newContent += $content.Substring($start)
	return $newContent
}
#==================================================================================================
function UpdateAssemblyInfo($fileName)
{
   $path = FullPath $fileName
	$content = [IO.File]::ReadAllText($path, [System.Text.Encoding]::Default)
	$content = SetVersion $content "AssemblyFileVersion(`"" "`"" $version
	[IO.File]::WriteAllText($path, $content, [System.Text.Encoding]::Default)
}
#==================================================================================================
function UpdateResourceFiles($builds)
{
	foreach ($build in $builds)
	{
		$fileName = FullPath "$($build.Name)\Resources\Release$($build.Quantum)\$($build.Platform)\GraphicsMagick.NET.rc"

		$content = [IO.File]::ReadAllText($fileName, [System.Text.Encoding]::Unicode)
		$content = SetVersion $content "FILEVERSION " `r $version.Replace('.', ',')
		$content = SetVersion $content "PRODUCTVERSION " `r $version.Replace('.', ',')
		$content = SetVersion $content "`"FileVersion`", `""  "`"" $version
		$content = SetVersion $content "`"ProductVersion`", `"" "`"" $version

		[IO.File]::WriteAllText($fileName, $content, [System.Text.Encoding]::Unicode)
	}
}
#==================================================================================================
CheckArchive
Cleanup
UpdateAssemblyInfo "GraphicsMagick.NET\AssemblyInfo.cpp"
UpdateAssemblyInfo "GraphicsMagick.NET.AnyCPU\Properties\AssemblyInfo.cs"
UpdateAssemblyInfo "GraphicsMagick.NET.Web\Properties\AssemblyInfo.cs"
CreateNet20ProjectFiles
UpdateResourceFiles $builds
Publish $builds
CreateScriptZipFile $builds[0]
CreateScriptZipFile $builds[2]
GzipAssemblies
GenerateAnyCPUFiles
CreateAnyCPUProjectFiles
Publish $anyCPUbuilds
#==================================================================================================
