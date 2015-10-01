#==================================================================================================
$scriptPath = Split-Path -parent $MyInvocation.MyCommand.Path
$scriptPath = "$scriptPath\.."
. $scriptPath\Shared\Functions.ps1
SetFolder $scriptPath
#==================================================================================================
. Tools\Scripts\Shared\Publish.ps1
. Tools\Scripts\AppVeyor\Shared.ps1
#==================================================================================================
function Getversion()
{
  $utcNow = [System.DateTime]::Now.ToUniversalTime()
  $build = [int]($utcNow.Date - (New-Object System.DateTime –ArgumentList 2000, 1, 1).Date).TotalDays
  $revision = [int]($utcNow.TimeOfDay.TotalSeconds / 2)
  return "1.0.$build.$revision"
}
#==================================================================================================
function Publish($config, $version)
{
  $id = "GraphicsMagick.NET-dev-$($config.quantum)-$($config.platformName)"
  $folder = "GraphicsMagick.NET"
  $hasNet20 = $true
  if ($platform -eq "AnyCPU")
  {
    $folder = "GraphicsMagick.NET.AnyCPU"
    $hasNet20 = $false
  }

  CheckStrongName $folder $config.quantum $config.platform $config.platformName
  CreateNuGetPackage $id $version $folder $config.quantum $config.platform $config.platformName $hasNet20

  $fileName = FullPath "Publish\NuGet\$id.$version.nupkg"
  appveyor PushArtifact $fileName
}
#==================================================================================================

$quantum = $args[0]
$platform = $args[1]

$version = Getversion
$config = GetConfig $quantum $platform
Publish $config $version