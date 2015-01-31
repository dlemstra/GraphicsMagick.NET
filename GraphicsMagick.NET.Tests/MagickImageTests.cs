//=================================================================================================
// Copyright 2014 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using GraphicsMagick;
using Microsoft.VisualStudio.TestTools.UnitTesting;

#if !(NET20)
using System.Windows.Media.Imaging;
using System.Threading;
#endif

namespace GraphicsMagick.NET.Tests
{
	//==============================================================================================
	[TestClass]
	public class MagickImageTests
	{
		//===========================================================================================
		private const string _Category = "MagickImage";
		//===========================================================================================
		private static void ShouldNotRaiseWarning(object sender, WarningEventArgs arguments)
		{
			Assert.Fail(arguments.Message);
		}
		//===========================================================================================
		private static void Test_Clone(MagickImage first, MagickImage second)
		{
			Assert.AreEqual(first, second);
			second.Format = MagickFormat.Jp2;
			Assert.AreEqual(first.Format, MagickFormat.Png);
			Assert.AreEqual(second.Format, MagickFormat.Jp2);
			second.Dispose();
			Assert.AreEqual(first.Format, MagickFormat.Png);
		}
		//===========================================================================================
		private static void Test_Pixel(MagickImage image, int x, int y, MagickColor color)
		{
			using (PixelCollection collection = image.GetReadOnlyPixels())
			{
				ColorAssert.AreEqual(color, collection.GetPixel(x, y));
			}
		}
		//===========================================================================================
		private static void Test_ToBitmap(MagickImage image, ImageFormat format)
		{
			using (Bitmap bmp = image.ToBitmap(format))
			{
				Assert.AreEqual(format, bmp.RawFormat);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Attribute()
		{
			using (MagickImage image = new MagickImage(Files.SnakewarePNG))
			{
				Assert.IsNull(image.GetAttribute("test"));

				image.SetAttribute("test", "");
				Assert.AreEqual(null, image.GetAttribute("test"));

				image.SetAttribute("test", "123");
				Assert.AreEqual("123", image.GetAttribute("test"));
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Clone()
		{
			MagickImage first = new MagickImage(Files.SnakewarePNG);
			MagickImage second = first.Clone();

			Test_Clone(first, second);

			second = new MagickImage(first);
			Test_Clone(first, second);
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Constructor()
		{
			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				new MagickImage(new byte[0]);
			});

			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				new MagickImage((byte[])null);
			});

			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				new MagickImage((Bitmap)null);
			});

			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				new MagickImage((FileInfo)null);
			});

			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				new MagickImage((Stream)null);
			});

			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				new MagickImage((string)null);
			});

			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				new MagickImage(Files.Missing);
			});

			using (Bitmap bitmap = new Bitmap(Files.SnakewarePNG))
			{
				using (MagickImage image = new MagickImage(bitmap))
				{
					Assert.AreEqual(MagickFormat.Png, image.Format);
				}
			}

			using (Bitmap bitmap = new Bitmap(100, 100, PixelFormat.Format24bppRgb))
			{
				using (MagickImage image = new MagickImage(bitmap))
				{
					Assert.AreEqual(MagickFormat.Bmp, image.Format);
				}
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Composite()
		{
			using (MagickImage image = new MagickImage("logo:"))
			{
				using (MagickImage blur = new MagickImage(new MagickColor("#000"), image.Width, image.Height))
				{
					image.Warning += ShouldNotRaiseWarning;
					image.Composite(blur, Gravity.Center, CompositeOperator.Multiply);
				}
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Define()
		{
			using (MagickImage image = new MagickImage("logo:"))
			{
				string option = "optimize-coding";

				image.SetDefine(MagickFormat.Jpg, option, true);
				Assert.AreEqual("true", image.GetDefine(MagickFormat.Jpg, option));
				Assert.AreEqual("true", image.GetDefine(MagickFormat.Jpeg, option));

				image.RemoveDefine(MagickFormat.Jpeg, option);
				Assert.AreEqual(null, image.GetDefine(MagickFormat.Jpg, option));

				image.SetDefine(MagickFormat.Jpeg, option, "test");
				Assert.AreEqual("test", image.GetDefine(MagickFormat.Jpg, option));
				Assert.AreEqual("test", image.GetDefine(MagickFormat.Jpeg, option));

				image.RemoveDefine(MagickFormat.Jpg, option);
				Assert.AreEqual(null, image.GetDefine(MagickFormat.Jpeg, option));
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		[ExpectedException(typeof(ObjectDisposedException))]
		public void Test_Dispose()
		{
			MagickImage image = new MagickImage();
			image.Dispose();
			image.Verbose = true;
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Drawable()
		{
			using (MagickImage image = new MagickImage(Color.Red, 10, 10))
			{
				MagickColor yellow = Color.Yellow;
				image.Draw(new DrawableFillColor(yellow), new DrawableRectangle(0, 0, 10, 10));
				Test_Pixel(image, 5, 5, yellow);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Extent()
		{
			using (MagickImage image = new MagickImage())
			{
				image.Read(Files.RedPNG);
				image.Resize(new MagickGeometry(100, 100));
				Assert.AreEqual(100, image.Width);
				Assert.AreEqual(33, image.Height);

				image.BackgroundColor = MagickColor.Transparent;
				image.Extent(100, 100, Gravity.Center);
				Assert.AreEqual(100, image.Width);
				Assert.AreEqual(100, image.Height);

				using (PixelCollection pixels = image.GetReadOnlyPixels())
				{
					Assert.IsTrue(pixels.GetPixel(0, 0).ToColor() == MagickColor.Transparent);
				}
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_FormatExpression()
		{
			using (MagickImage image = new MagickImage(Files.RedPNG))
			{
				ExceptionAssert.Throws<ArgumentNullException>(delegate()
				{
					image.FormatExpression(null);
				});

				ExceptionAssert.Throws<MagickBlobErrorException>(delegate()
				{
					string tempFile = Path.GetTempFileName();
					FileStream fs = null;
					try
					{
						File.WriteAllText(tempFile, "");

						using (fs = File.Open(tempFile, FileMode.Open, FileAccess.ReadWrite, FileShare.None))
						{
							Assert.AreEqual(null, image.FormatExpression("@" + tempFile));
						}
					}
					finally
					{
						if (File.Exists(tempFile))
							File.Delete(tempFile);
					}
				});

				Assert.AreEqual("FOO", image.FormatExpression("FOO"));
				Assert.AreEqual("600", image.FormatExpression("%w"));
				Assert.AreEqual("200", image.FormatExpression("%h"));
				Assert.AreEqual("cf35f14d9d0221a12e7120af9d070bdcf1b2714f7318ff4c8d8fbc6ac559060c", image.FormatExpression("%#"));
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Histogram()
		{
			MagickImage image = new MagickImage(Files.RedPNG);
			Dictionary<MagickColor, int> histogram = image.Histogram();

			Assert.IsNotNull(histogram);
			Assert.AreEqual(1, histogram.Count);

			MagickColor red = new MagickColor(Quantum.Max, 0, 0);
			Assert.AreEqual(120000, histogram[red]);
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_IComparable()
		{
			MagickImage first = new MagickImage(Color.Red, 10, 5);

			Assert.AreEqual(0, first.CompareTo(first));
			Assert.AreEqual(1, first.CompareTo(null));
			Assert.IsFalse(first < null);
			Assert.IsFalse(first <= null);
			Assert.IsTrue(first > null);
			Assert.IsTrue(first >= null);
			Assert.IsTrue(null < first);
			Assert.IsTrue(null <= first);
			Assert.IsFalse(null > first);
			Assert.IsFalse(null >= first);

			MagickImage second = new MagickImage(Color.Green, 5, 5);

			Assert.AreEqual(1, first.CompareTo(second));
			Assert.IsFalse(first < second);
			Assert.IsFalse(first <= second);
			Assert.IsTrue(first > second);
			Assert.IsTrue(first >= second);

			second = new MagickImage(Color.Red, 5, 10);

			Assert.AreEqual(0, first.CompareTo(second));
			Assert.IsFalse(first == second);
			Assert.IsFalse(first < second);
			Assert.IsTrue(first <= second);
			Assert.IsFalse(first > second);
			Assert.IsTrue(first >= second);

			first.Dispose();
			second.Dispose();
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_IEquatable()
		{
			MagickImage first = new MagickImage(Color.Red, 10, 10);

			Assert.IsFalse(first == null);
			Assert.IsFalse(first.Equals(null));
			Assert.IsTrue(first.Equals(first));
			Assert.IsTrue(first.Equals((object)first));

			MagickImage second = new MagickImage(Color.Red, 10, 10);

			Assert.IsTrue(first == second);
			Assert.IsTrue(first.Equals(second));
			Assert.IsTrue(first.Equals((object)second));

			second = new MagickImage(Color.Green, 10, 10);

			Assert.IsTrue(first != second);
			Assert.IsFalse(first.Equals(second));

			first.Dispose();
			second.Dispose();

			first = null;
			Assert.IsTrue(first == null);
			Assert.IsFalse(first != null);
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Opaque()
		{
			using (MagickImage image = new MagickImage(Color.Red, 10, 10))
			{
				Test_Pixel(image, 0, 0, Color.Red);

				image.Opaque(Color.Red, Color.Yellow);
				Test_Pixel(image, 0, 0, Color.Yellow);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Ping()
		{
			using (MagickImage image = new MagickImage())
			{
				image.Ping(Files.FujiFilmFinePixS1ProJPG);

				ExceptionAssert.Throws<MagickCacheErrorException>(delegate()
				{
					image.GetReadOnlyPixels();
				});

				ImageProfile profile = image.GetExifProfile();
				Assert.IsNotNull(profile);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Profile()
		{
			using (MagickImage image = new MagickImage(Files.FujiFilmFinePixS1ProJPG))
			{
				ImageProfile profile = image.GetExifProfile();
				Assert.IsNotNull(profile);
				image.RemoveProfile(profile.Name);
				profile = image.GetExifProfile();
				Assert.IsNull(profile);

				using (MemoryStream memStream = new MemoryStream())
				{
					image.Write(memStream);
					memStream.Position = 0;

					using (MagickImage newImage = new MagickImage(memStream))
					{
						profile = newImage.GetExifProfile();
						Assert.IsNull(profile);
					}
				}
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Quantize()
		{
			QuantizeSettings settings = new QuantizeSettings();
			settings.Colors = 8;

			using (MagickImage image = new MagickImage(Files.FujiFilmFinePixS1ProJPG))
			{
				image.Quantize(settings);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Read()
		{
			MagickImage image = new MagickImage();

			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				image.Read(new byte[0]);
			});

			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				image.Read((byte[])null);
			});

			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				image.Read((Bitmap)null);
			});

			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				image.Read((Stream)null);
			});

			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				image.Read((string)null);
			});

			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				image.Read(Files.Missing);
			});

			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				image.Read("png:" + Files.Missing);
			});

			image.Read(File.ReadAllBytes(Files.SnakewarePNG));

			using (Bitmap bitmap = new Bitmap(Files.SnakewarePNG))
			{
				image.Read(bitmap);
				Assert.AreEqual(MagickFormat.Png, image.Format);
			}

			using (Bitmap bitmap = new Bitmap(100, 100, PixelFormat.Format24bppRgb))
			{
				image.Read(bitmap);
				Assert.AreEqual(MagickFormat.Bmp, image.Format);
			}

			using (FileStream fs = File.OpenRead(Files.SnakewarePNG))
			{
				image.Read(fs);
			}

			image.Read(Files.SnakewarePNG);

			image.Read("rose:");

			image.Read(Files.RoseSparkleGIF);
			Assert.AreEqual("RoseSparkle.gif", Path.GetFileName(image.FileName));

			image.Read("png:" + Files.SnakewarePNG);
			MagickColor red = new MagickColor("red");

			image.Read(red, 50, 50);
			Assert.AreEqual(50, image.Width);
			Assert.AreEqual(50, image.Height);
			Test_Pixel(image, 10, 10, red);

			image.Read("xc:red", 50, 50);
			Assert.AreEqual(50, image.Width);
			Assert.AreEqual(50, image.Height);
			Test_Pixel(image, 5, 5, red);

			image.Dispose();

			ExceptionAssert.Throws<ObjectDisposedException>(delegate()
				{
					image.Read("logo:");
				});
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Resize()
		{
			using (MagickImage image = new MagickImage())
			{
				image.Read(Files.GraphicsMagickNETIconPNG);
				image.Resize(new MagickGeometry(64, 64));
				Assert.AreEqual(64, image.Width);
				Assert.AreEqual(64, image.Height);

				image.Read(Files.GraphicsMagickNETIconPNG);
				image.Resize(200);
				Assert.AreEqual(256, image.Width);
				Assert.AreEqual(256, image.Height);

				image.Read(Files.GraphicsMagickNETIconPNG);
				image.Resize(32, 32);
				Assert.AreEqual(32, image.Width);
				Assert.AreEqual(32, image.Height);

				image.Read(Files.GraphicsMagickNETIconPNG);
				image.Resize(new MagickGeometry("5x10!"));
				Assert.AreEqual(5, image.Width);
				Assert.AreEqual(10, image.Height);

				image.Read(Files.GraphicsMagickNETIconPNG);
				image.Resize(new MagickGeometry("32x32<"));
				Assert.AreEqual(128, image.Width);
				Assert.AreEqual(128, image.Height);

				image.Read(Files.GraphicsMagickNETIconPNG);
				image.Resize(new MagickGeometry("256x256<"));
				Assert.AreEqual(256, image.Width);
				Assert.AreEqual(256, image.Height);

				image.Read(Files.GraphicsMagickNETIconPNG);
				image.Resize(new MagickGeometry("32x32>"));
				Assert.AreEqual(32, image.Width);
				Assert.AreEqual(32, image.Height);

				image.Read(Files.GraphicsMagickNETIconPNG);
				image.Resize(new MagickGeometry("256x256>"));
				Assert.AreEqual(128, image.Width);
				Assert.AreEqual(128, image.Height);

				Percentage percentage = new Percentage(-0.5);
				ExceptionAssert.Throws<ArgumentException>(delegate()
				{
					image.Resize(percentage);
				});
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Resolution()
		{
			using (MagickImage image = new MagickImage(Files.EightBimTIF))
			{
				Assert.AreEqual(Resolution.PixelsPerInch, image.ResolutionUnits);
				Assert.AreEqual(72, image.ResolutionX);
				Assert.AreEqual(72, image.ResolutionY);
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Scale()
		{
			using (MagickImage image = new MagickImage(Files.Circle))
			{
				MagickColor color = Color.FromArgb(159, 255, 255, 255);
				using (PixelCollection pixels = image.GetReadOnlyPixels())
				{
					ColorAssert.AreEqual(color, pixels.GetPixel(image.Width / 2, image.Height / 2).ToColor());
				}

				image.Scale((Percentage)400);

				using (PixelCollection pixels = image.GetReadOnlyPixels())
				{
					ColorAssert.AreEqual(color, pixels.GetPixel(image.Width / 2, image.Height / 2).ToColor());
				}
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_ToBitmap()
		{
			using (MagickImage image = new MagickImage(Color.Red, 10, 10))
			{
				ExceptionAssert.Throws<NotSupportedException>(delegate()
				{
					image.ToBitmap(ImageFormat.Exif);
					image.ToBitmap(ImageFormat.Icon);
				});

				Bitmap bitmap = image.ToBitmap();
				Assert.AreEqual(ImageFormat.MemoryBmp, bitmap.RawFormat);
				ColorAssert.AreEqual(Color.Red, bitmap.GetPixel(0, 0));
				ColorAssert.AreEqual(Color.Red, bitmap.GetPixel(5, 5));
				ColorAssert.AreEqual(Color.Red, bitmap.GetPixel(9, 9));
				bitmap.Dispose();

				Test_ToBitmap(image, ImageFormat.Bmp);
				Test_ToBitmap(image, ImageFormat.Gif);
				Test_ToBitmap(image, ImageFormat.Jpeg);
				Test_ToBitmap(image, ImageFormat.Png);
				Test_ToBitmap(image, ImageFormat.Tiff);
			}

			using (MagickImage image = new MagickImage(new MagickColor(0, Quantum.Max, Quantum.Max, 0), 10, 10))
			{
				Bitmap bitmap = image.ToBitmap();
				Assert.AreEqual(ImageFormat.MemoryBmp, bitmap.RawFormat);
				Color color = Color.FromArgb(0, 0, 255, 255);
				ColorAssert.AreEqual(color, bitmap.GetPixel(0, 0));
				ColorAssert.AreEqual(color, bitmap.GetPixel(5, 5));
				ColorAssert.AreEqual(color, bitmap.GetPixel(9, 9));
				bitmap.Dispose();
			}
		}
#if !(NET20)
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_ToBitmapSource()
		{
			Byte[] pixels = new Byte[600];

			using (MagickImage image = new MagickImage(Color.Red, 10, 10))
			{
				BitmapSource bitmap = image.ToBitmapSource();
				bitmap.CopyPixels(pixels, 60, 0);

				Assert.AreEqual(255, pixels[0]);
				Assert.AreEqual(0, pixels[1]);
				Assert.AreEqual(0, pixels[2]);

				image.ColorSpace = ColorSpace.CMYK;

				bitmap = image.ToBitmapSource();
				bitmap.CopyPixels(pixels, 60, 0);

				Assert.AreEqual(0, pixels[0]);
				Assert.AreEqual(255, pixels[1]);
				Assert.AreEqual(255, pixels[2]);
				Assert.AreEqual(0, pixels[3]);
			}
		}
#endif
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Threshold()
		{
			using (MagickImage image = new MagickImage(Files.ImageMagickJPG))
			{
				using (MemoryStream memStream = new MemoryStream())
				{
					image.Threshold(80);
					image.CompressionMethod = CompressionMethod.Group4;
					image.Format = MagickFormat.Pdf;
					image.Write(memStream);
				}
			}
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Write()
		{
			using (MagickImage image = new MagickImage(Files.SnakewarePNG))
			{
				using (MemoryStream memStream = new MemoryStream())
				{
					image.Write(memStream);

					Assert.AreEqual(image.FileSize, memStream.Length);
				}
			}
		}
		//===========================================================================================
	}
	//==============================================================================================
}
