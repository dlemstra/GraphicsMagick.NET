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
	public sealed class Percentage: IEquatable<Percentage>
	{
		internal object _Instance;
		internal Percentage(object instance)
		{
			_Instance = instance.WrapIfValueType();
		}
		public static object GetInstance(Percentage obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance.UnwrapIfWrapped();
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			Percentage casted = obj as Percentage;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance.UnwrapIfWrapped();
		}
		public Percentage()
			: this(AssemblyHelper.CreateInstance(Types.Percentage))
		{
		}
		public Percentage(Int32 value)
			: this(AssemblyHelper.CreateInstance(Types.Percentage, new Type[] {typeof(Int32)}, value))
		{
		}
		public Percentage(Double value)
			: this(AssemblyHelper.CreateInstance(Types.Percentage, new Type[] {typeof(Double)}, value))
		{
		}
		public static bool operator ==(Percentage left, Percentage right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static explicit operator Percentage(Int32 value)
		{
			object result = Types.Percentage.CallMethod("op_Explicit", new Type[] {typeof(Int32)}, value);
			return (result == null ? null : new Percentage(result));
		}
		public static explicit operator Double(Percentage percentage)
		{
			object result = Types.Percentage.CallMethod("op_Explicit", new Type[] {Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentage));
			return (Double)result;
		}
		public static implicit operator Percentage(Double value)
		{
			object result = Types.Percentage.CallMethod("op_Implicit", new Type[] {typeof(Double)}, value);
			return (result == null ? null : new Percentage(result));
		}
		public static bool operator !=(Percentage left, Percentage right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public Boolean Equals(Percentage other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.Percentage}, GraphicsMagick.Percentage.GetInstance(other));
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
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.Percentage.GetInstance(obj));
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
