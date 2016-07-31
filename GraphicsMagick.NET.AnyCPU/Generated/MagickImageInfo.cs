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
	public sealed class MagickImageInfo: IEquatable<MagickImageInfo>, IComparable<MagickImageInfo>
	{
		internal object _Instance;
		internal MagickImageInfo(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(MagickImageInfo obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			MagickImageInfo casted = obj as MagickImageInfo;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public MagickImageInfo(Stream stream)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageInfo, new Type[] {typeof(Stream)}, stream))
		{
		}
		public MagickImageInfo(String fileName)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageInfo, new Type[] {typeof(String)}, fileName))
		{
		}
		public MagickImageInfo(Byte[] data)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageInfo, new Type[] {typeof(Byte[])}, data))
		{
		}
		public MagickImageInfo()
			: this(AssemblyHelper.CreateInstance(Types.MagickImageInfo))
		{
		}
		public static bool operator ==(MagickImageInfo left, MagickImageInfo right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static bool operator >(MagickImageInfo left, MagickImageInfo right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) == 1;
		}
		public static bool operator >=(MagickImageInfo left, MagickImageInfo right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) >= 0;
		}
		public static bool operator !=(MagickImageInfo left, MagickImageInfo right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public static bool operator <(MagickImageInfo left, MagickImageInfo right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) == -1;
		}
		public static bool operator <=(MagickImageInfo left, MagickImageInfo right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) <= 0;
		}
		public ColorSpace ColorSpace
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ColorSpace");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (ColorSpace)result;
			}
		}
		public String FileName
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FileName");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
		}
		public MagickFormat Format
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Format");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (MagickFormat)result;
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
		public Resolution ResolutionUnits
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ResolutionUnits");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Resolution)result;
			}
		}
		public Double ResolutionX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ResolutionX");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Double)result;
			}
		}
		public Double ResolutionY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ResolutionY");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Double)result;
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
		public Int32 CompareTo(MagickImageInfo other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("CompareTo", new Type[] {Types.MagickImageInfo}, GraphicsMagick.MagickImageInfo.GetInstance(other));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Int32)result;
		}
		public Boolean Equals(MagickImageInfo other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.MagickImageInfo}, GraphicsMagick.MagickImageInfo.GetInstance(other));
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
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.MagickImageInfo.GetInstance(obj));
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
		public void Read(Stream stream)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(Stream)}, stream);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(String fileName)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(String)}, fileName);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(Byte[] data)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(Byte[])}, data);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public static IEnumerable<MagickImageInfo> ReadCollection(Stream stream)
		{
			object result;
			try
			{
				result = Types.MagickImageInfo.CallMethod("ReadCollection", new Type[] {typeof(Stream)}, stream);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			IEnumerator enumerator = ((IEnumerable)result).GetEnumerator();
			while (enumerator.MoveNext())
				yield return new MagickImageInfo(enumerator.Current);
		}
		public static IEnumerable<MagickImageInfo> ReadCollection(String fileName)
		{
			object result;
			try
			{
				result = Types.MagickImageInfo.CallMethod("ReadCollection", new Type[] {typeof(String)}, fileName);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			IEnumerator enumerator = ((IEnumerable)result).GetEnumerator();
			while (enumerator.MoveNext())
				yield return new MagickImageInfo(enumerator.Current);
		}
		public static IEnumerable<MagickImageInfo> ReadCollection(Byte[] data)
		{
			object result;
			try
			{
				result = Types.MagickImageInfo.CallMethod("ReadCollection", new Type[] {typeof(Byte[])}, data);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			IEnumerator enumerator = ((IEnumerable)result).GetEnumerator();
			while (enumerator.MoveNext())
				yield return new MagickImageInfo(enumerator.Current);
		}
	}
}
