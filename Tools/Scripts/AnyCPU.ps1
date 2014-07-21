#==================================================================================================
$scriptPath = Split-Path -parent $MyInvocation.MyCommand.Path
. $scriptPath\Shared\Functions.ps1
SetFolder $scriptPath
#==================================================================================================
. Tools\Scripts\Shared\GzipAssembly.ps1
. Tools\Scripts\Shared\FileGenerator.ps1
. Tools\Scripts\Shared\ProjectFiles.ps1
#==================================================================================================
function BuildGraphicsMagickNET()
{
	BuildSolution "GraphicsMagick.NET.sln" "Configuration=ReleaseQ8,RunCodeAnalysis=false,Platform=Win32"
	BuildSolution "GraphicsMagick.NET.sln" "Configuration=ReleaseQ8,RunCodeAnalysis=false,Platform=x64"
	BuildSolution "GraphicsMagick.NET.sln" "Configuration=ReleaseQ16,RunCodeAnalysis=false,Platform=Win32"
	BuildSolution "GraphicsMagick.NET.sln" "Configuration=ReleaseQ16,RunCodeAnalysis=false,Platform=x64"
}
#==================================================================================================
BuildGraphicsMagickNET
GzipAssemblies
GenerateAnyCPUFiles
CreateAnyCPUProjectFiles
#==================================================================================================
