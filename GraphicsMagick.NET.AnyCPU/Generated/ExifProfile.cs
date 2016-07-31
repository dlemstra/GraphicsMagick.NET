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
	public sealed class ExifProfile: ImageProfile
	{
		internal ExifProfile(object instance)
			: base(instance)
		{
		}
		public ExifProfile(Stream stream)
			: base(AssemblyHelper.CreateInstance(Types.ExifProfile, new Type[] {typeof(Stream)}, stream))
		{
		}
		public ExifProfile(String fileName)
			: base(AssemblyHelper.CreateInstance(Types.ExifProfile, new Type[] {typeof(String)}, fileName))
		{
		}
		public ExifProfile(Byte[] data)
			: base(AssemblyHelper.CreateInstance(Types.ExifProfile, new Type[] {typeof(Byte[])}, data))
		{
		}
		public ExifProfile()
			: base(AssemblyHelper.CreateInstance(Types.ExifProfile))
		{
		}
		public ExifParts Parts
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Parts");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (ExifParts)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Parts", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public IEnumerable<ExifValue> Values
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Values");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				IEnumerator enumerator = ((IEnumerable)result).GetEnumerator();
				while (enumerator.MoveNext())
					yield return new ExifValue(enumerator.Current);
			}
		}
		public MagickImage CreateThumbnail()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("CreateThumbnail");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickImage(result));
		}
		public ExifValue GetValue(ExifTag tag)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetValue", new Type[] {Types.ExifTag}, tag);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new ExifValue(result));
		}
		public Boolean RemoveValue(ExifTag tag)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("RemoveValue", new Type[] {Types.ExifTag}, tag);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Boolean)result;
		}
		public void SetValue(ExifTag tag, Object value)
		{
			try
			{
				_Instance.CallMethod("SetValue", new Type[] {Types.ExifTag, typeof(Object)}, tag, GraphicsMagick.ExifProfile.GetInstance(value));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
	}
}
