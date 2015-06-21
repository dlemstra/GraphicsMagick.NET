using System;
//=================================================================================================
// Copyright 2014-2015 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
//
// Licensed under the ImageMagick License (the "License"); you may not use this file except in 
// compliance with the License. You may obtain a copy of the License at
//
//   http://www.imagemagick.org/script/license.php
//
// Unless required by applicable law or agreed to in writing, software distributed under the
// License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing permissions and
// limitations under the License.
//=================================================================================================
using System.IO;

namespace GraphicsMagick.NET.FileGenerator
{
	//==============================================================================================
	internal class AnyCPUGenerator : FileGenerator
	{
		//===========================================================================================
		private AnyCPUGenerator()
			: base(@"GraphicsMagick.NET.AnyCPU\Generated")
		{
		}
		//===========================================================================================
		private void Cleanup()
		{
			if (!Directory.Exists(OutputFolder))
				return;

			foreach (string fileName in Directory.GetFiles(OutputFolder, "*.cs", SearchOption.AllDirectories))
			{
				File.Delete(fileName);
			}
		}
		//===========================================================================================
		private void CopyXmlResources()
		{
			string folder = GraphicsMagickNET.GetFolderName(GraphicsMagickNET.Depth);
			DirectoryInfo source = new DirectoryInfo(AppDomain.CurrentDomain.BaseDirectory + @"..\..\..\..\GraphicsMagick.NET\Resources\xml");
			string destination = OutputFolder + @"..\Resources\xml\";
			Directory.CreateDirectory(Path.GetDirectoryName(destination));
			foreach (FileInfo file in source.GetFiles("*.mgk"))
			{
				File.Copy(file.FullName, destination + file.Name, true);
			}
		}
		//===========================================================================================
		public static void Generate()
		{
			AnyCPUGenerator generator = new AnyCPUGenerator();
			generator.Cleanup();
			generator.CopyXmlResources();

			EnumGenerator.Generate();
			ClassGenerator.Generate();
			ExceptionGenerator.Generate();
			TypesGenerator.Generate();
		}
		//===========================================================================================
	}
	//==============================================================================================
}
