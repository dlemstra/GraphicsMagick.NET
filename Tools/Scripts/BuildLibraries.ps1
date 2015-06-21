#==================================================================================================
$scriptPath = Split-Path -parent $MyInvocation.MyCommand.Path
. $scriptPath\Shared\Functions.ps1
SetFolder $scriptPath
#==================================================================================================
$Q8Builds = @(
	@{
		Name					= "Q8";
		QuantumDepth		= "8";
		Framework			= "v2.0"
		PlatformToolset	= "v90"
	}
	@{
		Name					= "Q8";
		QuantumDepth		= "8";
		Framework			= "v4.0";
		PlatformToolset	= "v110"
	}
)
$Q16Builds = @(
	@{
		Name					= "Q16";
		QuantumDepth		= "16";
		Framework			= "v2.0"
		PlatformToolset	= "v90"
	}
	@{
		Name					= "Q16";
		QuantumDepth		= "16";
		Framework			= "v4.0";
		PlatformToolset	= "v110"
	}
)
$configurations = @(
	@{
		Platform = "x86";
		Options  = "/openMP";
		Builds   = $Q8Builds;
	}
	@{
		Platform = "x86";
		Options  = "/openMP";
		Builds   = $Q16Builds;
	}
	@{
		Platform = "x64";
		Options  = "/openMP /x64";
		Builds   = $Q8Builds;
	}
	@{
		Platform = "x64";
		Options  = "/openMP /x64";
		Builds   = $Q16Builds;
	}
)
#==================================================================================================
function AddCoders()
{
	$projectFile = FullPath "GraphicsMagick\Source\GraphicsMagick\VisualMagick\coders\CORE_coders_mtdll_lib.vcxproj"
	$xml = [xml](get-content $projectFile)
	SelectNodes $xml "//msb:AdditionalIncludeDirectories" | Foreach {$_.InnerText = "..\webp\src;" + $_.InnerText}
	$xml.Save($projectFile)
}
#==================================================================================================
function Build($platform, $builds)
{
	$configFile = FullPath "GraphicsMagick\Source\GraphicsMagick\magick\magick_config.h"
	$config = [IO.File]::ReadAllText($configFile, [System.Text.Encoding]::Default)
	$config = $config.Replace("#define ProvideDllMain", "#undef ProvideDllMain")
	$config = $config.Replace("#define HasJBIG", "#undef HasJBIG")
	$config = $config.Replace("// #define MagickLibName       `"MyGraphicsMagick.dll`"", "#define MagickLibName `"GraphicsMagick.NET-" + $platform + ".dll`"")

	ModifyDebugInformationFormat
	AddCoders

	foreach ($build in $builds)
	{
		$newConfig = $config.Replace("#define QuantumDepth 8", "#define QuantumDepth " + $build.QuantumDepth)
		[IO.File]::WriteAllText($configFile, $newConfig, [System.Text.Encoding]::Default)

		ModifyPlatformToolset $build

		$options = "Configuration=Release,Platform="
		if ($platform -eq "x64")
		{
			$options = "$($options)x64";
		}
		else
		{
			$options = "$($options)Win32";
		}

		if ($build.Framework -eq "v2.0")
		{
			$options = "$($options),VCBuildAdditionalOptions=/arch:SSE";
		}

		BuildSolution "GraphicsMagick\Source\GraphicsMagick\VisualMagick\VisualStaticMTDLL.sln" $options

		Copy-Item $configFile "GraphicsMagick\$($build.Name)\include\magick"
		$newConfig = $newConfig.Replace("#define MagickLibName `"GraphicsMagick.NET-" + $platform + ".dll`"", "// #define MagickLibName       `"MyGraphicsMagick.dll`"")
		[IO.File]::WriteAllText($configFile, $newConfig, [System.Text.Encoding]::Default)

		if (!(Test-Path "GraphicsMagick\lib\$($build.Framework)\$platform"))
		{
			[void](New-Item -ItemType directory -Path "GraphicsMagick\lib\$($build.Framework)\$platform")
		}
		Copy-Item GraphicsMagick\Source\GraphicsMagick\VisualMagick\lib\CORE_RL_*.lib "GraphicsMagick\lib\$($build.Framework)\$platform"

		if (!(Test-Path "GraphicsMagick\$($build.Name)\lib\$($build.Framework)\$platform"))
		{
			[void](New-Item -ItemType directory -Path "GraphicsMagick\$($build.Name)\lib\$($build.Framework)\$platform")
		}
		Move-Item "GraphicsMagick\lib\$($build.Framework)\$($platform)\CORE_RL_coders_.lib"   "GraphicsMagick\$($build.Name)\lib\$($build.Framework)\$platform" -force
		Move-Item "GraphicsMagick\lib\$($build.Framework)\$($platform)\CORE_RL_magick_.lib"   "GraphicsMagick\$($build.Name)\lib\$($build.Framework)\$platform" -force
		Move-Item "GraphicsMagick\lib\$($build.Framework)\$($platform)\CORE_RL_Magick++_.lib" "GraphicsMagick\$($build.Name)\lib\$($build.Framework)\$platform" -force
		Move-Item "GraphicsMagick\lib\$($build.Framework)\$($platform)\CORE_RL_wand_.lib"     "GraphicsMagick\$($build.Name)\lib\$($build.Framework)\$platform" -force
	}
}
#==================================================================================================
function BuildAll()
{
	foreach ($config in $configurations)
	{
		CreateSolution $config.Platform $config.Options
		Build $config.Platform $config.Builds
	}
}
#==================================================================================================
function BuildDevelopment()
{
	$config = $configurations[0]
	$build = @($config.Builds[1]);

	CreateSolution $config.Platform $config.Options
	Build $config.Platform $build
}
#==================================================================================================
function CopyFiles($folder)
{
	Remove-Item GraphicsMagick\include -recurse
	[void](New-Item -ItemType directory -Path GraphicsMagick\include\magick)
	Copy-Item GraphicsMagick\Source\GraphicsMagick\magick\*.h GraphicsMagick\include\magick
	Remove-Item GraphicsMagick\include\magick\magick_config.h
	Copy-Item GraphicsMagick\Source\GraphicsMagick\Magick++\lib\Magick++.h GraphicsMagick\include
	[void](New-Item -ItemType directory -Path GraphicsMagick\include\Magick++)
	Copy-Item GraphicsMagick\Source\GraphicsMagick\Magick++\lib\Magick++\*.h GraphicsMagick\include\Magick++
	[void](New-Item -ItemType directory -Path GraphicsMagick\include\wand)
	Copy-Item GraphicsMagick\Source\GraphicsMagick\wand\*.h GraphicsMagick\include\wand

	$xmlDirectory = FullPath "GraphicsMagick\Source\GraphicsMagick\VisualMagick\bin"
	foreach ($xmlFile in [IO.Directory]::GetFiles($xmlDirectory, "*.mgk"))
	{
		if ([IO.Path]::GetFileName($xmlFile) -eq "log.mgk")
		{
			continue
		}

		Copy-Item $xmlFile GraphicsMagick.NET\Resources\xml
	}
}
#==================================================================================================
function CreateSolution($platform, $options)
{
	$solutionFile = FullPath "GraphicsMagick\Source\GraphicsMagick\VisualMagick\VisualStaticMTDLL.sln"

	if (Test-Path $solutionFile)
	{
		Remove-Item $solutionFile
	}

	$location = $(get-location)
	set-location "GraphicsMagick\Source\GraphicsMagick\VisualMagick\configure"

	Write-Host ""
	Write-Host "Static Multi-Threaded DLL runtimes ($platform)."
	if ($options -ne "")
	{
		Write-Host "Options: $options."
	}

	Start-Process .\configure.exe -ArgumentList "/mtsd /noWizard $options" -wait

	set-location $location

	RemoveProjects $solutionFile
	UpgradeSolution $solutionFile
}
#==================================================================================================
function ModifyDebugInformationFormat($folder)
{
	$folder = FullPath "GraphicsMagick\Source\GraphicsMagick"
	foreach ($projectFile in [IO.Directory]::GetFiles($folder, "CORE_*.vcxproj", [IO.SearchOption]::AllDirectories))
	{
		$xml = [xml](get-content $projectFile)
		SelectNodes $xml "//msb:DebugInformationFormat" | Foreach {$_.InnerText = ""}
		$xml.Save($projectFile)
	}
}
#==================================================================================================
function ModifyPlatformToolset($build)
{
	$folder = FullPath "GraphicsMagick\Source\GraphicsMagick"
	foreach ($projectFile in [IO.Directory]::GetFiles($folder, "CORE_*.vcxproj", [IO.SearchOption]::AllDirectories))
	{
		$xml = [xml](get-content $projectFile)
		SelectNodes $xml "//msb:PlatformToolset" | Foreach {$_.InnerText = $build.PlatformToolset}
		$xml.Save($projectFile)
	}
}
#==================================================================================================
function PatchFiles()
{
	# Fix static linking of libxml
	$xmlversionFile = FullPath "GraphicsMagick\Source\GraphicsMagick\libxml\include\libxml\xmlversion.h"
	$xmlversion = [IO.File]::ReadAllText($xmlversionFile, [System.Text.Encoding]::Default)
	$xmlversion = [regex]::Replace($xmlversion, "([^`r])`n", '$1' + "`r`n")
	$xmlversion = $xmlversion.Replace("#if !defined(_DLL)
#  if !defined(LIBXML_STATIC)
#    define LIBXML_STATIC 1
#  endif
#endif", "#define LIBXML_STATIC")
	[IO.File]::WriteAllText($xmlversionFile, $xmlversion, [System.Text.Encoding]::Default)
}
#==================================================================================================
function RemoveProjects($solutionFile)
{
	Write-Host "Removing projects from solution."
	$lines = [IO.File]::ReadAllLines($solutionFile, [System.Text.Encoding]::Default)
	
	for ($i=0; $i -le $lines.Length - 1; $i++)
	{
		if (($lines[$i].Contains("All") -eq $true) -or ($lines[$i].Contains("UTIL_") -eq $true))
		{
			$lines[$i] = ""
			if ($lines[$i + 1].Contains("EndProject"))
			{
				$lines[$i + 1] = ""
			}
		}
	}

	[IO.File]::WriteAllText($solutionFile, [String]::Join([Environment]::NewLine, $lines), [System.Text.Encoding]::Default)
}
#==================================================================================================
function UpgradeSolution($solutionFile)
{
	$folder = FullPath "GraphicsMagick\Source\GraphicsMagick\VisualMagick"
	foreach ($projectFile in [IO.Directory]::GetFiles("$folder", "CORE_*.vcxproj", [IO.SearchOption]::AllDirectories))
	{
		Remove-Item "$projectFile"
		Remove-Item "$projectFile.filters"
	}

	Write-Host "Upgrading solution."
	devenv /upgrade $solutionFile
	CheckExitCode "Upgrade failed."

	Remove-Item "$folder\Backup" -recurse -force
	Remove-Item "$folder\UpgradeLog.htm"
}
#==================================================================================================
CheckFolder "GraphicsMagick\Source"
PatchFiles
CopyFiles
if ($args[0] -eq "-development")
{
	BuildDevelopment
}
else
{
	BuildAll
}
#==================================================================================================
