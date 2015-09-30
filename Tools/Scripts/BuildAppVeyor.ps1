#==================================================================================================
$scriptPath = Split-Path -parent $MyInvocation.MyCommand.Path
. $scriptPath\Shared\Functions.ps1
SetFolder $scriptPath
#==================================================================================================
. Tools\Scripts\Shared\GzipAssembly.ps1
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
    elseif ($platform -eq "AnyCPU")
    {
      $config.config = "Tests"
      $config.solution = "GraphicsMagick.NET.AnyCPU.sln"
    }
  }

  return $config
}
#==================================================================================================
function BuildConfiguration($config, $name)
{
  if ($config.platform -eq "AnyCPU")
  {
    $config_x86 = GetConfig "x86" $name
    $config_x86.config = "Release"
    BuildConfiguration($config_x86)

    $config_x64 = GetConfig "x64" $name
    BuildConfiguration($config_x64)

    if ($config.quantum -eq "Q8")
    {
      GzipAssembliesQ8
    }
    else
    {
      GzipAssembliesQ16
    }
  }

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

BuildConfiguration $config $name
