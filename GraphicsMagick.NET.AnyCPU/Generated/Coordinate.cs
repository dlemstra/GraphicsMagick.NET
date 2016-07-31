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
	public sealed class Coordinate
	{
		internal object _Instance;
		internal Coordinate(object instance)
		{
			_Instance = instance.WrapIfValueType();
		}
		public static object GetInstance(Coordinate obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance.UnwrapIfWrapped();
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			Coordinate casted = obj as Coordinate;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance.UnwrapIfWrapped();
		}
		internal static object CastIEnumerable(IEnumerable<Coordinate> list)
		{
			if (ReferenceEquals(list, null))
				return null;
			Type listType = typeof(List<>).MakeGenericType(Types.Coordinate);
			object result = listType.CreateInstance();
			foreach (Coordinate item in list)
				result.CallMethod("Add", Coordinate.GetInstance(item));
			return result;
		}
		public Coordinate()
			: this(AssemblyHelper.CreateInstance(Types.Coordinate))
		{
		}
		public Coordinate(Double x, Double y)
			: this(AssemblyHelper.CreateInstance(Types.Coordinate, new Type[] {typeof(Double), typeof(Double)}, x, y))
		{
		}
		public static bool operator ==(Coordinate left, Coordinate right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static bool operator !=(Coordinate left, Coordinate right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public Double X
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
				return (Double)result;
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
		public Double Y
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
				return (Double)result;
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
		public Boolean Equals(Coordinate coordinate)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.Coordinate}, GraphicsMagick.Coordinate.GetInstance(coordinate));
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
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.Coordinate.GetInstance(obj));
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
	}
}
