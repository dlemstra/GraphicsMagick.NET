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
	public sealed class DrawableText: Drawable
	{
		internal DrawableText(object instance)
			: base(instance)
		{
		}
		public DrawableText(Double x, Double y, String value, Encoding encoding)
			: base(AssemblyHelper.CreateInstance(Types.DrawableText, new Type[] {typeof(Double), typeof(Double), typeof(String), typeof(Encoding)}, x, y, value, encoding))
		{
		}
		public DrawableText(Double x, Double y, String value)
			: base(AssemblyHelper.CreateInstance(Types.DrawableText, new Type[] {typeof(Double), typeof(Double), typeof(String)}, x, y, value))
		{
		}
		public String Encoding
		{
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
		public String Text
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Text");
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
					_Instance.SetPropertyValue("Text", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double X
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("X");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Double)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("X", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double Y
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
				return (Double)result;
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
	}
}
