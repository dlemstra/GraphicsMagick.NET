﻿//=================================================================================================
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
	public class MagickGeometryTests
	{
		//===========================================================================================
		private const string _Category = "MagickGeometry";
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_Constructor()
		{
			ExceptionAssert.Throws<ArgumentNullException>(delegate()
			{
				new MagickGeometry((string)null);
			});

			ExceptionAssert.Throws<ArgumentException>(delegate()
			{
				new MagickGeometry("");
			});

			MagickGeometry geometry = new MagickGeometry("5x10!");
			Assert.AreEqual(5, geometry.Width);
			Assert.AreEqual(10, geometry.Height);
			Assert.AreEqual(true, geometry.IgnoreAspectRatio);

			geometry = new MagickGeometry("10x5<");
			Assert.AreEqual(10, geometry.Width);
			Assert.AreEqual(5, geometry.Height);
			Assert.AreEqual(true, geometry.Less);

			geometry = new MagickGeometry("5x10>");
			Assert.AreEqual(5, geometry.Width);
			Assert.AreEqual(10, geometry.Height);
			Assert.AreEqual(true, geometry.Greater);

			geometry = new MagickGeometry("50%x0>");
			Assert.AreEqual(50, geometry.Width);
			Assert.AreEqual(0, geometry.Height);
			Assert.AreEqual(true, geometry.IsPercentage);
			Assert.AreEqual(true, geometry.Greater);

		    geometry = new MagickGeometry("5x10@");
		    Assert.AreEqual(5, geometry.Width);
		    Assert.AreEqual(10, geometry.Height);
		    Assert.AreEqual(true, geometry.LimitPixels);

		    geometry = new MagickGeometry("5x10^");
		    Assert.AreEqual(5, geometry.Width);
		    Assert.AreEqual(10, geometry.Height);
		    Assert.AreEqual(true, geometry.FillArea);

            geometry = new MagickGeometry(5, 10);
			Assert.AreEqual(5, geometry.Width);
			Assert.AreEqual(10, geometry.Height);

			geometry = new MagickGeometry(5, 10, 15, 20);
			Assert.AreEqual(5, geometry.X);
			Assert.AreEqual(10, geometry.Y);
			Assert.AreEqual(15, geometry.Width);
			Assert.AreEqual(20, geometry.Height);

			geometry = new MagickGeometry(50.0, 10.0);
			Assert.AreEqual(50, geometry.Width);
			Assert.AreEqual(10, geometry.Height);
			Assert.AreEqual(true, geometry.IsPercentage);

			geometry = new MagickGeometry(5, 10, 15.0, 20.0);
			Assert.AreEqual(5, geometry.X);
			Assert.AreEqual(10, geometry.Y);
			Assert.AreEqual(15, geometry.Width);
			Assert.AreEqual(20, geometry.Height);
			Assert.AreEqual(true, geometry.IsPercentage);
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_IComparable()
		{
			MagickGeometry first = new MagickGeometry(10, 5);

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

			MagickGeometry second = new MagickGeometry(5, 5);

			Assert.AreEqual(1, first.CompareTo(second));
			Assert.IsFalse(first < second);
			Assert.IsFalse(first <= second);
			Assert.IsTrue(first > second);
			Assert.IsTrue(first >= second);

			second = new MagickGeometry(5, 10);

			Assert.AreEqual(0, first.CompareTo(second));
			Assert.IsFalse(first == second);
			Assert.IsFalse(first < second);
			Assert.IsTrue(first <= second);
			Assert.IsFalse(first > second);
			Assert.IsTrue(first >= second);
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_IEquatable()
		{
			MagickGeometry first = new MagickGeometry(10, 5);

			Assert.IsFalse(first == null);
			Assert.IsFalse(first.Equals(null));
			Assert.IsTrue(first.Equals(first));
			Assert.IsTrue(first.Equals((object)first));

			MagickGeometry second = new MagickGeometry(10, 5);

			Assert.IsTrue(first == second);
			Assert.IsTrue(first.Equals(second));
			Assert.IsTrue(first.Equals((object)second));

			second = new MagickGeometry(5, 5);

			Assert.IsTrue(first != second);
			Assert.IsFalse(first.Equals(second));
		}
		//===========================================================================================
		[TestMethod, TestCategory(_Category)]
		public void Test_ToString()
		{
			MagickGeometry geometry = new MagickGeometry(10, 5);
			Assert.AreEqual("10x5", geometry.ToString());

			geometry = new MagickGeometry(-5, 5, 10, 5);
			Assert.AreEqual("10x5-5+5", geometry.ToString());

			geometry = new MagickGeometry(5, -5, 10, 5);
			Assert.AreEqual("10x5+5-5", geometry.ToString());
		}
		//===========================================================================================
	}
	//==============================================================================================
}
