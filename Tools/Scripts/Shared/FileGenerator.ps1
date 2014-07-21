#==================================================================================================
function _BuildFileGenerator()
{
	BuildSolution "Tools\GraphicsMagick.NET.FileGenerator.sln" "Configuration=Release"
}
#==================================================================================================
function GenerateFiles()
{
	_BuildFileGenerator
	ExecuteFile "Tools\GraphicsMagick.NET.FileGenerator\bin\Release\GraphicsMagick.NET.FileGenerator.exe"
}
#==================================================================================================
function GenerateAnyCPUFiles()
{
	_BuildFileGenerator
	ExecuteFile "Tools\GraphicsMagick.NET.FileGenerator\bin\Release\GraphicsMagick.NET.FileGenerator.exe --AnyCPU" 
}
#==================================================================================================
