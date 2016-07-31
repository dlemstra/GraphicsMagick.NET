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
	public sealed class MagickColor: IEquatable<MagickColor>, IComparable<MagickColor>
	{
		internal object _Instance;
		internal MagickColor(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(MagickColor obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			MagickColor casted = obj as MagickColor;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public MagickColor(String color)
			: this(AssemblyHelper.CreateInstance(Types.MagickColor, new Type[] {typeof(String)}, color))
		{
		}
		[CLSCompliant(false)]
		public MagickColor(UInt16 red, UInt16 green, UInt16 blue, UInt16 alpha)
			: this(AssemblyHelper.CreateInstance(Types.MagickColor, new Type[] {typeof(UInt16), typeof(UInt16), typeof(UInt16), typeof(UInt16)}, red, green, blue, alpha))
		{
		}
		[CLSCompliant(false)]
		public MagickColor(UInt16 red, UInt16 green, UInt16 blue)
			: this(AssemblyHelper.CreateInstance(Types.MagickColor, new Type[] {typeof(UInt16), typeof(UInt16), typeof(UInt16)}, red, green, blue))
		{
		}
		public MagickColor(Color color)
			: this(AssemblyHelper.CreateInstance(Types.MagickColor, new Type[] {typeof(Color)}, color))
		{
		}
		public MagickColor()
			: this(AssemblyHelper.CreateInstance(Types.MagickColor))
		{
		}
		public static bool operator ==(MagickColor left, MagickColor right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static bool operator >(MagickColor left, MagickColor right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) == 1;
		}
		public static bool operator >=(MagickColor left, MagickColor right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) >= 0;
		}
		public static implicit operator Color(MagickColor color)
		{
			object result = Types.MagickColor.CallMethod("op_Implicit", new Type[] {Types.MagickColor}, GraphicsMagick.MagickColor.GetInstance(color));
			return (Color)result;
		}
		public static implicit operator MagickColor(Color color)
		{
			object result = Types.MagickColor.CallMethod("op_Implicit", new Type[] {typeof(Color)}, color);
			return (result == null ? null : new MagickColor(result));
		}
		public static bool operator !=(MagickColor left, MagickColor right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public static bool operator <(MagickColor left, MagickColor right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) == -1;
		}
		public static bool operator <=(MagickColor left, MagickColor right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) <= 0;
		}
		[CLSCompliant(false)]
		public UInt16 A
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("A");
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
					_Instance.SetPropertyValue("A", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		[CLSCompliant(false)]
		public UInt16 B
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("B");
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
					_Instance.SetPropertyValue("B", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		[CLSCompliant(false)]
		public UInt16 G
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("G");
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
					_Instance.SetPropertyValue("G", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		[CLSCompliant(false)]
		public UInt16 R
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("R");
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
					_Instance.SetPropertyValue("R", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public static MagickColor Transparent
		{
			get
			{
				object result;
				try
				{
					result = Types.MagickColor.GetPropertyValue("Transparent");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickColor(result));
			}
		}
		public Int32 CompareTo(MagickColor other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("CompareTo", new Type[] {Types.MagickColor}, GraphicsMagick.MagickColor.GetInstance(other));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Int32)result;
		}
		public Boolean Equals(MagickColor other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.MagickColor}, GraphicsMagick.MagickColor.GetInstance(other));
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
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.MagickColor.GetInstance(obj));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Boolean)result;
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
		public Color ToColor()
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
			return (Color)result;
		}
		public override String ToString()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToString");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (String)result;
		}
	}
}
