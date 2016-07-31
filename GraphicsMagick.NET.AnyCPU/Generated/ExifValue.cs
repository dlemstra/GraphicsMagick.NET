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
	public sealed class ExifValue: IEquatable<ExifValue>
	{
		internal object _Instance;
		internal ExifValue(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(ExifValue obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			ExifValue casted = obj as ExifValue;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public static bool operator ==(ExifValue left, ExifValue right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static bool operator !=(ExifValue left, ExifValue right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public ExifDataType DataType
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("DataType");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (ExifDataType)result;
			}
		}
		public Boolean IsArray
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("IsArray");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Boolean)result;
			}
		}
		public ExifTag Tag
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Tag");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (ExifTag)result;
			}
		}
		public Object Value
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Value");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Object)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Value", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean Equals(ExifValue other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.ExifValue}, GraphicsMagick.ExifValue.GetInstance(other));
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
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.ExifValue.GetInstance(obj));
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
