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
	public sealed class XmpProfile: ImageProfile
	{
		internal XmpProfile(object instance)
			: base(instance)
		{
		}
		public XmpProfile(String fileName)
			: base(AssemblyHelper.CreateInstance(Types.XmpProfile, new Type[] {typeof(String)}, fileName))
		{
		}
		public XmpProfile(Stream stream)
			: base(AssemblyHelper.CreateInstance(Types.XmpProfile, new Type[] {typeof(Stream)}, stream))
		{
		}
		public XmpProfile(Byte[] data)
			: base(AssemblyHelper.CreateInstance(Types.XmpProfile, new Type[] {typeof(Byte[])}, data))
		{
		}
		public XmpProfile(XDocument document)
			: base(AssemblyHelper.CreateInstance(Types.XmpProfile, new Type[] {typeof(XDocument)}, document))
		{
		}
		public XmpProfile(IXPathNavigable document)
			: base(AssemblyHelper.CreateInstance(Types.XmpProfile, new Type[] {typeof(IXPathNavigable)}, document))
		{
		}
		public XmlReader CreateReader()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("CreateReader");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (XmlReader)result;
		}
		public static XmpProfile FromIXPathNavigable(IXPathNavigable document)
		{
			object result;
			try
			{
				result = Types.XmpProfile.CallMethod("FromIXPathNavigable", new Type[] {typeof(IXPathNavigable)}, document);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new XmpProfile(result));
		}
		public static XmpProfile FromXDocument(XDocument document)
		{
			object result;
			try
			{
				result = Types.XmpProfile.CallMethod("FromXDocument", new Type[] {typeof(XDocument)}, document);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new XmpProfile(result));
		}
		public IXPathNavigable ToIXPathNavigable()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToIXPathNavigable");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (IXPathNavigable)result;
		}
		public XDocument ToXDocument()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToXDocument");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (XDocument)result;
		}
	}
}
