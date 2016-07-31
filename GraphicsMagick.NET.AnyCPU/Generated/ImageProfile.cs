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
	public class ImageProfile: IEquatable<ImageProfile>
	{
		internal object _Instance;
		internal ImageProfile(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(ImageProfile obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			ImageProfile casted = obj as ImageProfile;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public ImageProfile(String name, String fileName)
			: this(AssemblyHelper.CreateInstance(Types.ImageProfile, new Type[] {typeof(String), typeof(String)}, name, fileName))
		{
		}
		public ImageProfile(String name, Stream stream)
			: this(AssemblyHelper.CreateInstance(Types.ImageProfile, new Type[] {typeof(String), typeof(Stream)}, name, stream))
		{
		}
		public ImageProfile(String name, Byte[] data)
			: this(AssemblyHelper.CreateInstance(Types.ImageProfile, new Type[] {typeof(String), typeof(Byte[])}, name, data))
		{
		}
		public static bool operator ==(ImageProfile left, ImageProfile right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static bool operator !=(ImageProfile left, ImageProfile right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public String Name
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Name");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
		}
		public Boolean Equals(ImageProfile other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.ImageProfile}, GraphicsMagick.ImageProfile.GetInstance(other));
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
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.ImageProfile.GetInstance(obj));
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
	}
}
