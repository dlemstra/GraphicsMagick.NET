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
	public sealed class IptcProfile: ImageProfile
	{
		internal IptcProfile(object instance)
			: base(instance)
		{
		}
		public IptcProfile(Stream stream)
			: base(AssemblyHelper.CreateInstance(Types.IptcProfile, new Type[] {typeof(Stream)}, stream))
		{
		}
		public IptcProfile(String fileName)
			: base(AssemblyHelper.CreateInstance(Types.IptcProfile, new Type[] {typeof(String)}, fileName))
		{
		}
		public IptcProfile(Byte[] data)
			: base(AssemblyHelper.CreateInstance(Types.IptcProfile, new Type[] {typeof(Byte[])}, data))
		{
		}
		public IptcProfile()
			: base(AssemblyHelper.CreateInstance(Types.IptcProfile))
		{
		}
		public IEnumerable<IptcValue> Values
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
					yield return new IptcValue(enumerator.Current);
			}
		}
		public IptcValue GetValue(IptcTag tag)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetValue", new Type[] {Types.IptcTag}, tag);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new IptcValue(result));
		}
		public Boolean RemoveValue(IptcTag tag)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("RemoveValue", new Type[] {Types.IptcTag}, tag);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Boolean)result;
		}
		public void SetEncoding(Encoding encoding)
		{
			try
			{
				_Instance.CallMethod("SetEncoding", new Type[] {typeof(Encoding)}, encoding);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void SetValue(IptcTag tag, String value)
		{
			try
			{
				_Instance.CallMethod("SetValue", new Type[] {Types.IptcTag, typeof(String)}, tag, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void SetValue(IptcTag tag, Encoding encoding, String value)
		{
			try
			{
				_Instance.CallMethod("SetValue", new Type[] {Types.IptcTag, typeof(Encoding), typeof(String)}, tag, encoding, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
	}
}
