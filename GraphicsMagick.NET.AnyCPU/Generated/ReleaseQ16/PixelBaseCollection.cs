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
	public abstract class PixelBaseCollection: IEnumerable<Pixel>, IEnumerable, IDisposable
	{
		internal object _Instance;
		internal PixelBaseCollection(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(PixelBaseCollection obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			PixelBaseCollection casted = obj as PixelBaseCollection;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public Int32 Channels
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Channels");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
		}
		public Int32 Height
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Height");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
		}
		public Pixel this[Int32 x, Int32 y]
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetIndexer(new Type[] {typeof(Int32), typeof(Int32)}, x, y);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new Pixel(result));
			}
		}
		public Int32 Width
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Width");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
		}
		public virtual void Dispose()
		{
			try
			{
				_Instance.CallMethod("Dispose");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public virtual IEnumerator<Pixel> GetEnumerator()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetEnumerator");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return new EnumeratorWrapper<Pixel>(result).GetEnumerator();
		}
		IEnumerator IEnumerable.GetEnumerator()
		{
			return GetEnumerator();
		}
		public Pixel GetPixel(Int32 x, Int32 y)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetPixel", new Type[] {typeof(Int32), typeof(Int32)}, x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new Pixel(result));
		}
		[CLSCompliant(false)]
		public UInt16[] GetValue(Int32 x, Int32 y)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetValue", new Type[] {typeof(Int32), typeof(Int32)}, x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (UInt16[])result;
		}
		[CLSCompliant(false)]
		public UInt16[] GetValues()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetValues");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (UInt16[])result;
		}
	}
}
