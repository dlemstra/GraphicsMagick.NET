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
	public sealed class MagickGeometry: IEquatable<MagickGeometry>, IComparable<MagickGeometry>
	{
		internal object _Instance;
		internal MagickGeometry(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(MagickGeometry obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			MagickGeometry casted = obj as MagickGeometry;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public MagickGeometry(String value)
			: this(AssemblyHelper.CreateInstance(Types.MagickGeometry, new Type[] {typeof(String)}, value))
		{
		}
		public MagickGeometry(Rectangle rectangle)
			: this(AssemblyHelper.CreateInstance(Types.MagickGeometry, new Type[] {typeof(Rectangle)}, rectangle))
		{
		}
		public MagickGeometry(Int32 x, Int32 y, Percentage percentageWidth, Percentage percentageHeight)
			: this(AssemblyHelper.CreateInstance(Types.MagickGeometry, new Type[] {typeof(Int32), typeof(Int32), Types.Percentage, Types.Percentage}, x, y, GraphicsMagick.Percentage.GetInstance(percentageWidth), GraphicsMagick.Percentage.GetInstance(percentageHeight)))
		{
		}
		public MagickGeometry(Int32 x, Int32 y, Int32 width, Int32 height)
			: this(AssemblyHelper.CreateInstance(Types.MagickGeometry, new Type[] {typeof(Int32), typeof(Int32), typeof(Int32), typeof(Int32)}, x, y, width, height))
		{
		}
		public MagickGeometry(Percentage percentageWidth, Percentage percentageHeight)
			: this(AssemblyHelper.CreateInstance(Types.MagickGeometry, new Type[] {Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentageWidth), GraphicsMagick.Percentage.GetInstance(percentageHeight)))
		{
		}
		public MagickGeometry(Int32 width, Int32 height)
			: this(AssemblyHelper.CreateInstance(Types.MagickGeometry, new Type[] {typeof(Int32), typeof(Int32)}, width, height))
		{
		}
		public MagickGeometry(Int32 widthAndHeight)
			: this(AssemblyHelper.CreateInstance(Types.MagickGeometry, new Type[] {typeof(Int32)}, widthAndHeight))
		{
		}
		public static bool operator ==(MagickGeometry left, MagickGeometry right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static explicit operator MagickGeometry(String geometry)
		{
			object result = Types.MagickGeometry.CallMethod("op_Explicit", new Type[] {typeof(String)}, geometry);
			return (result == null ? null : new MagickGeometry(result));
		}
		public static explicit operator MagickGeometry(Rectangle rectangle)
		{
			object result = Types.MagickGeometry.CallMethod("op_Explicit", new Type[] {typeof(Rectangle)}, rectangle);
			return (result == null ? null : new MagickGeometry(result));
		}
		public static bool operator >(MagickGeometry left, MagickGeometry right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) == 1;
		}
		public static bool operator >=(MagickGeometry left, MagickGeometry right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) >= 0;
		}
		public static bool operator !=(MagickGeometry left, MagickGeometry right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public static bool operator <(MagickGeometry left, MagickGeometry right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) == -1;
		}
		public static bool operator <=(MagickGeometry left, MagickGeometry right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) <= 0;
		}
		public Boolean Greater
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Greater");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Boolean)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Greater", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
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
			set
			{
				try
				{
					_Instance.SetPropertyValue("Height", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean IgnoreAspectRatio
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("IgnoreAspectRatio");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Boolean)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("IgnoreAspectRatio", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean IsPercentage
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("IsPercentage");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Boolean)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("IsPercentage", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean Less
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Less");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Boolean)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Less", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
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
			set
			{
				try
				{
					_Instance.SetPropertyValue("Width", value);
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
		public Int32 CompareTo(MagickGeometry other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("CompareTo", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(other));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Int32)result;
		}
		public Boolean Equals(MagickGeometry other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(other));
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
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.MagickGeometry.GetInstance(obj));
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
