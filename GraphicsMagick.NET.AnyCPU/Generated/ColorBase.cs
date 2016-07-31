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
	public abstract class ColorBase: IEquatable<ColorBase>, IComparable<ColorBase>
	{
		internal object _Instance;
		internal ColorBase(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(ColorBase obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			ColorBase casted = obj as ColorBase;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public static bool operator ==(ColorBase left, ColorBase right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static bool operator >(ColorBase left, ColorBase right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) == 1;
		}
		public static bool operator >=(ColorBase left, ColorBase right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) >= 0;
		}
		public static implicit operator MagickColor(ColorBase color)
		{
			object result = Types.ColorBase.CallMethod("op_Implicit", new Type[] {Types.ColorBase}, GraphicsMagick.ColorBase.GetInstance(color));
			return (result == null ? null : new MagickColor(result));
		}
		public static bool operator !=(ColorBase left, ColorBase right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public static bool operator <(ColorBase left, ColorBase right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) == -1;
		}
		public static bool operator <=(ColorBase left, ColorBase right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) <= 0;
		}
		public virtual Int32 CompareTo(ColorBase other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("CompareTo", new Type[] {Types.ColorBase}, GraphicsMagick.ColorBase.GetInstance(other));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Int32)result;
		}
		public virtual Boolean Equals(ColorBase other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.ColorBase}, GraphicsMagick.ColorBase.GetInstance(other));
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
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.ColorBase.GetInstance(obj));
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
		public MagickColor ToMagickColor()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToMagickColor");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickColor(result));
		}
	}
}
