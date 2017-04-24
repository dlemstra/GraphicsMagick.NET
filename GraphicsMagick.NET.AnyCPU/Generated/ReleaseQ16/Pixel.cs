//=================================================================================================
// Copyright 2017 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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
	public sealed class Pixel: IEquatable<Pixel>
	{
		internal object _Instance;
		internal Pixel(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(Pixel obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			Pixel casted = obj as Pixel;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		internal static object CastIEnumerable(IEnumerable<Pixel> list)
		{
			if (ReferenceEquals(list, null))
				return null;
			Type listType = typeof(List<>).MakeGenericType(Types.Pixel);
			object result = listType.CreateInstance();
			foreach (Pixel item in list)
				result.CallMethod("Add", Pixel.GetInstance(item));
			return result;
		}
		public Pixel(Int32 x, Int32 y, Int32 channels)
			: this(AssemblyHelper.CreateInstance(Types.Pixel, new Type[] {typeof(Int32), typeof(Int32), typeof(Int32)}, x, y, channels))
		{
		}
		[CLSCompliant(false)]
		public Pixel(Int32 x, Int32 y, UInt16[] value)
			: this(AssemblyHelper.CreateInstance(Types.Pixel, new Type[] {typeof(Int32), typeof(Int32), typeof(UInt16[])}, x, y, value))
		{
		}
		public static bool operator ==(Pixel left, Pixel right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static bool operator !=(Pixel left, Pixel right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
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
		[CLSCompliant(false)]
		public UInt16 this[Int32 channel]
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetIndexer(new Type[] {typeof(Int32)}, channel);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (UInt16)result;
			}
			set
			{
				try
				{
					_Instance.SetIndexer(new Type[] {typeof(Int32), typeof(UInt16)}, channel, value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 X
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("X");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("X", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 Y
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Y");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Y", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean Equals(Pixel other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.Pixel}, GraphicsMagick.Pixel.GetInstance(other));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Boolean)result;
		}
		public override Boolean Equals(Object obj)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.Pixel.GetInstance(obj));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Boolean)result;
		}
		[CLSCompliant(false)]
		public UInt16 GetChannel(Int32 channel)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetChannel", new Type[] {typeof(Int32)}, channel);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (UInt16)result;
		}
		public override Int32 GetHashCode()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetHashCode");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Int32)result;
		}
		[CLSCompliant(false)]
		public void SetChannel(Int32 channel, UInt16 value)
		{
			try
			{
				_Instance.CallMethod("SetChannel", new Type[] {typeof(Int32), typeof(UInt16)}, channel, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public MagickColor ToColor()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToColor");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickColor(result));
		}
	}
}
