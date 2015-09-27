#==================================================================================================
$scriptPath = Split-Path -parent $MyInvocation.MyCommand.Path
. $scriptPath\Shared\Functions.ps1
SetFolder $scriptPath
#==================================================================================================
function GetConfig($platform, $name)
{
  $config = $null

  if ($name -eq "net40-Q8")
  {
    $config = @{quantum="Q8";solution="GraphicsMagick.NET.sln"}
  }
  elseif ($name -eq "net40-Q16")
  {
    $config = @{quantum="Q16";solution="GraphicsMagick.NET.sln"}
  }
  elseif ($name -eq "net20-Q8")
  {
    $config = @{quantum="Q8";solution="GraphicsMagick.NET.net20.sln"}
  }
  elseif ($name -eq "net20-Q16")
  {
    $config = @{quantum="Q16";solution="GraphicsMagick.NET.net20.sln"}
  }

  if ($config -ne $null)
  {
    $config.platform = $platform

    $config.config = "Release"
    $config.platformName = $platform
    if ($platform -eq "x86")
    {
      $config.config = "Tests"
      $config.platformName = "Win32"
    }
  }

  return $config
}
#==================================================================================================
function BuildConfiguration($config)
{
  $properties = "Configuration=$($config.config)$($config.quantum),Platform=$($config.platformName)"
  BuildSolution $config.solution $properties
}

$platform = $args[0]
$name = $args[1]

$config = GetConfig $platform $name

if ($config -eq $null)
{
  throw "Unknown configuration: $name"
}

BuildConfiguration $config
