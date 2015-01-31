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
using System.Collections.Generic;
using System.IO;
using GraphicsMagick;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace GraphicsMagick.NET.Tests
{
	//==============================================================================================
	[TestClass]
	public class GraphicsMagickNETTests
	{
		//===========================================================================================
		private const string _Category = "GraphicsMagickNET";
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_GetFormatInfo()
		{
			List<string> missingFormats = new List<string>();

			foreach (MagickFormat format in Enum.GetValues(typeof(MagickFormat)))
			{
				if (format == MagickFormat.Unknown)
					continue;

				MagickFormatInfo formatInfo = GraphicsMagickNET.GetFormatInformation(format);
				if (formatInfo == null)
					missingFormats.Add(format.ToString());
			}

			if (missingFormats.Count > 0)
				Assert.Fail("Cannot find MagickFormatInfo for: " + string.Join(", ", missingFormats.ToArray()));
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Initialize()
		{
			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				GraphicsMagickNET.Initialize(null);
			});

			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				GraphicsMagickNET.Initialize("Invalid");
			});

			string path = Path.GetDirectoryName(GetType().Assembly.Location) + @"..\..\..\..\..\GraphicsMagick.NET\Resources\xml";
			foreach (string fileName in Directory.GetFiles(path, "*.xml"))
			{
				string tempFile = fileName + ".tmp";

				if (File.Exists(tempFile))
					File.Delete(tempFile);

				File.Move(fileName, tempFile);

				ExceptionAssert.Throws<ArgumentException>(delegate()
				{
					GraphicsMagickNET.Initialize(path);
				}, "MagickNET._ImageMagickFiles does not contain: " + Path.GetFileName(fileName));

				File.Move(tempFile, fileName);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Log()
		{
			using (MagickImage image = new MagickImage(Files.SnakewarePNG))
			{
				int count = 0;
				EventHandler<LogEventArgs> logDelegate = delegate(object sender, LogEventArgs arguments)
				{
					Assert.IsNull(sender);
					Assert.IsNotNull(arguments);
					Assert.AreNotEqual(ExceptionTypes.Undefined, arguments.EventType);
					Assert.IsNotNull(arguments.Message);
					Assert.AreNotEqual(0, arguments.Message.Length);

					count++;
				};

				GraphicsMagickNET.Log += logDelegate;

				image.Flip();
				Assert.AreEqual(0, count);

				GraphicsMagickNET.SetLogEvents(ExceptionTypes.All);

				image.Flip();
				Assert.AreNotEqual(0, count);

				GraphicsMagickNET.Log -= logDelegate;
				count = 0;

				image.Flip();
				Assert.AreEqual(0, count);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_SupportedFormats()
		{
			foreach (MagickFormatInfo formatInfo in GraphicsMagickNET.SupportedFormats)
			{
				Assert.AreNotEqual(MagickFormat.Unknown, formatInfo.Format, "Unknown format: " + formatInfo.Description);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Version()
		{
			StringAssert.Contains(GraphicsMagickNET.Version, "x86");

#if NET20
			StringAssert.Contains(GraphicsMagickNET.Version, "net20");
#else
			StringAssert.Contains(GraphicsMagickNET.Version, "net40-client");
#endif

#if Q8
			StringAssert.Contains(GraphicsMagickNET.Version, "Q8");
#elif Q16
			StringAssert.Contains(GraphicsMagickNET.Version, "Q16");
#else
#error Not implemented!
#endif
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_SetTempDirectory()
		{
			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				GraphicsMagickNET.SetTempDirectory(null);
			});

			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				GraphicsMagickNET.SetTempDirectory("Invalid");
			});

			GraphicsMagickNET.SetTempDirectory(Path.GetTempPath());
		}
		//===========================================================================================
	}
	//==============================================================================================
}
