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
	public sealed class IptcValue: IEquatable<IptcValue>
	{
		internal object _Instance;
		internal IptcValue(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(IptcValue obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			IptcValue casted = obj as IptcValue;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public static bool operator ==(IptcValue left, IptcValue right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static bool operator !=(IptcValue left, IptcValue right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public Encoding Encoding
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Encoding");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Encoding)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Encoding", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public IptcTag Tag
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
				return (IptcTag)result;
			}
		}
		public String Value
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
				return (String)result;
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
		public Boolean Equals(IptcValue other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.IptcValue}, GraphicsMagick.IptcValue.GetInstance(other));
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
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.IptcValue.GetInstance(obj));
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
		public Byte[] ToByteArray()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToByteArray");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Byte[])result;
		}
		public String ToString(Encoding encoding)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToString", new Type[] {typeof(Encoding)}, encoding);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (String)result;
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
