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
	public sealed class ColorMono: ColorBase
	{
		internal ColorMono(object instance)
			: base(instance)
		{
		}
		public ColorMono(Boolean isBlack)
			: base(AssemblyHelper.CreateInstance(Types.ColorMono, new Type[] {typeof(Boolean)}, isBlack))
		{
		}
		public Boolean IsBlack
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("IsBlack");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Boolean)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("IsBlack", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public static ColorMono FromMagickColor(MagickColor color)
		{
			object result;
			try
			{
				result = Types.ColorMono.CallMethod("FromMagickColor", new Type[] {Types.MagickColor}, GraphicsMagick.MagickColor.GetInstance(color));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new ColorMono(result));
		}
	}
}
