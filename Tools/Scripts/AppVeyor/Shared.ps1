#==================================================================================================
function GetConfig($quantum, $platform, $frameworkName)
{
  $config = @{
    platform = "Win32"
    quantum = $quantum
    config = "Tests"
    platformName = $platform
  }

  if ($platform -ne "x86")
  {
    $config.platform = $platform
    if ($platform -eq "x64")
    {
      $config.config = "Release"
    }
  }

  if ($frameworkName -eq "net40-client")
  {
    if ($platform -eq "AnyCPU")
    {
      $config.solution = "GraphicsMagick.NET.AnyCPU.sln"
    }
    else
    {
      $config.solution = "GraphicsMagick.NET.sln"
    }
  }
  elseif ($frameworkName -eq "net20")
  {
    $config.solution="GraphicsMagick.NET.net20.sln"
  }

  return $config
}
#==================================================================================================