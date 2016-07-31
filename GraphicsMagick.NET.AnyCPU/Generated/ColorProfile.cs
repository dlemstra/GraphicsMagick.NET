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
	public sealed class ColorProfile: ImageProfile
	{
		internal ColorProfile(object instance)
			: base(instance)
		{
		}
		public ColorProfile(String fileName)
			: base(AssemblyHelper.CreateInstance(Types.ColorProfile, new Type[] {typeof(String)}, fileName))
		{
		}
		public ColorProfile(Stream stream)
			: base(AssemblyHelper.CreateInstance(Types.ColorProfile, new Type[] {typeof(Stream)}, stream))
		{
		}
		public ColorProfile(Byte[] data)
			: base(AssemblyHelper.CreateInstance(Types.ColorProfile, new Type[] {typeof(Byte[])}, data))
		{
		}
		public static ColorProfile AdobeRGB1998
		{
			get
			{
				object result;
				try
				{
					result = Types.ColorProfile.GetPropertyValue("AdobeRGB1998");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new ColorProfile(result));
			}
		}
		public static ColorProfile AppleRGB
		{
			get
			{
				object result;
				try
				{
					result = Types.ColorProfile.GetPropertyValue("AppleRGB");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new ColorProfile(result));
			}
		}
		public static ColorProfile CoatedFOGRA39
		{
			get
			{
				object result;
				try
				{
					result = Types.ColorProfile.GetPropertyValue("CoatedFOGRA39");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new ColorProfile(result));
			}
		}
		public static ColorProfile ColorMatchRGB
		{
			get
			{
				object result;
				try
				{
					result = Types.ColorProfile.GetPropertyValue("ColorMatchRGB");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new ColorProfile(result));
			}
		}
		public static ColorProfile SRGB
		{
			get
			{
				object result;
				try
				{
					result = Types.ColorProfile.GetPropertyValue("SRGB");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new ColorProfile(result));
			}
		}
		public static ColorProfile USWebCoatedSWOP
		{
			get
			{
				object result;
				try
				{
					result = Types.ColorProfile.GetPropertyValue("USWebCoatedSWOP");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new ColorProfile(result));
			}
		}
	}
}
