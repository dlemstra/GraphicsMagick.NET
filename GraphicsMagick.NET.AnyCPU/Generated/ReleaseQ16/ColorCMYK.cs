//=================================================================================================
// Copyright 2017 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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
	public sealed class ColorCMYK: ColorBase
	{
		internal ColorCMYK(object instance)
			: base(instance)
		{
		}
		public ColorCMYK(Color color)
			: base(AssemblyHelper.CreateInstance(Types.ColorCMYK, new Type[] {typeof(Color)}, color))
		{
		}
		[CLSCompliant(false)]
		public ColorCMYK(UInt16 cyan, UInt16 magenta, UInt16 yellow, UInt16 key)
			: base(AssemblyHelper.CreateInstance(Types.ColorCMYK, new Type[] {typeof(UInt16), typeof(UInt16), typeof(UInt16), typeof(UInt16)}, cyan, magenta, yellow, key))
		{
		}
		[CLSCompliant(false)]
		public UInt16 C
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("C");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (UInt16)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("C", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		[CLSCompliant(false)]
		public UInt16 K
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("K");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (UInt16)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("K", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		[CLSCompliant(false)]
		public UInt16 M
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("M");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (UInt16)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("M", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		[CLSCompliant(false)]
		public UInt16 Y
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
				return (UInt16)result;
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
		public static ColorCMYK FromMagickColor(MagickColor color)
		{
			object result;
			try
			{
				result = Types.ColorCMYK.CallMethod("FromMagickColor", new Type[] {Types.MagickColor}, GraphicsMagick.MagickColor.GetInstance(color));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new ColorCMYK(result));
		}
	}
}
