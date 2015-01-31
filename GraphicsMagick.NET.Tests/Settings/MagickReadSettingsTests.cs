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

using System;
using GraphicsMagick;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace GraphicsMagick.NET.Tests
{
	//==============================================================================================
	[TestClass]
	public class MagickReadSettingsTests
	{
		//===========================================================================================
		private const string _Category = "MagickReadSettings";
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Collection_Read()
		{
			using (MagickImageCollection collection = new MagickImageCollection())
			{
				MagickReadSettings settings = new MagickReadSettings();
				settings.Density = new MagickGeometry(150, 150);

				collection.Read(Files.RoseSparkleGIF, settings);

				Assert.AreEqual(150, collection[0].Density.Width);

				settings = null;
				collection.Read(Files.RoseSparkleGIF, settings);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Image_Read()
		{
			using (MagickImage image = new MagickImage())
			{
				MagickReadSettings settings = new MagickReadSettings();
				settings.Density = new MagickGeometry(300, 300);

				image.Read(Files.SnakewarePNG, settings);

				Assert.AreEqual(300, image.Density.Width);

				settings = null;
				image.Read(Files.ImageMagickJPG, settings);
			}
		}
		//===========================================================================================
	}
	//==============================================================================================
}
