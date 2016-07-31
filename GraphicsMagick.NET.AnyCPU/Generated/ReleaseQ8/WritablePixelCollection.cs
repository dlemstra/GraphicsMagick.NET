//=================================================================================================
// Copyright 2016 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Imaging;
using System.IO;
using System.Reflection;
using System.Text;
using System.Windows.Media.Imaging;
using System.Xml;
using System.Xml.Linq;
using System.Xml.XPath;
using Fasterflect;

namespace GraphicsMagick
{
	public sealed class WritablePixelCollection: PixelBaseCollection
	{
		internal WritablePixelCollection(object instance)
			: base(instance)
		{
		}
		[CLSCompliant(false)]
		public void Set(UInt16[] values)
		{
			try
			{
				_Instance.CallMethod("Set", new Type[] {typeof(UInt16[])}, values);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Set(Byte[] values)
		{
			try
			{
				_Instance.CallMethod("Set", new Type[] {typeof(Byte[])}, values);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		[CLSCompliant(false)]
		public void Set(UInt32[] values)
		{
			try
			{
				_Instance.CallMethod("Set", new Type[] {typeof(UInt32[])}, values);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Set(Double[] values)
		{
			try
			{
				_Instance.CallMethod("Set", new Type[] {typeof(Double[])}, values);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Set(Int32 x, Int32 y, Byte[] value)
		{
			try
			{
				_Instance.CallMethod("Set", new Type[] {typeof(Int32), typeof(Int32), typeof(Byte[])}, x, y, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Set(IEnumerable<Pixel> pixels)
		{
			try
			{
				_Instance.CallMethod("Set", new Type[] {Types.IEnumerablePixel}, Pixel.CastIEnumerable(pixels));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Set(Pixel pixel)
		{
			try
			{
				_Instance.CallMethod("Set", new Type[] {Types.Pixel}, GraphicsMagick.Pixel.GetInstance(pixel));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Write()
		{
			try
			{
				_Instance.CallMethod("Write");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
	}
}
