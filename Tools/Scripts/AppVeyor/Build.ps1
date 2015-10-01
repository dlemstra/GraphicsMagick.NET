#==================================================================================================
$scriptPath = Split-Path -parent $MyInvocation.MyCommand.Path
$scriptPath = "$scriptPath\.."
. $scriptPath\Shared\Functions.ps1
SetFolder $scriptPath
#==================================================================================================
. Tools\Scripts\Shared\GzipAssembly.ps1
. Tools\Scripts\AppVeyor\Shared.ps1
#==================================================================================================
function Build($quantum, $platform, $hasNet20)
{
  if ($platform -eq "AnyCPU")
  {
    Build $quantum "x86" $false
    Build $quantum "x64" $false

    if ($quantum -eq "Q8")
    {
      GzipAssembliesQ8
    }
    else
    {
      GzipAssembliesQ16
    }

    $hasNet20 = $false
  }

  $config = GetConfig $quantum $platform "net40-client"
  BuildConfiguration $config

  if ($hasNet20 -eq $true)
  {
    $config = GetConfig $quantum $platform "net20"
    BuildConfiguration $config
  }
}
#==================================================================================================
function BuildConfiguration($config)
{
  $properties = "Configuration=$($config.config)$($config.quantum),Platform=$($config.platform)"
  BuildSolution $config.solution $properties
}
#==================================================================================================

$quantum = $args[0]
$platform = $args[1]

Build $quantum $platform $true