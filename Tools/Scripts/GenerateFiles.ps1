#==================================================================================================
$scriptPath = Split-Path -parent $MyInvocation.MyCommand.Path
. $scriptPath\Shared\Functions.ps1
SetFolder $scriptPath
#==================================================================================================
. Tools\Scripts\Shared\FileGenerator.ps1
#==================================================================================================
function BuildGraphicsMagickNET()
{
	BuildSolution "GraphicsMagick.NET.sln" "Configuration=ReleaseQ8,RunCodeAnalysis=false,Platform=Win32"
	BuildSolution "GraphicsMagick.NET.sln" "Configuration=ReleaseQ16,RunCodeAnalysis=false,Platform=Win32"
}
#==================================================================================================
BuildGraphicsMagickNET
GenerateFiles
BuildGraphicsMagickNET
#==================================================================================================
