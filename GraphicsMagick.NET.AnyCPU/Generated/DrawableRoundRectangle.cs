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
	public sealed class DrawableRoundRectangle: Drawable
	{
		internal DrawableRoundRectangle(object instance)
			: base(instance)
		{
		}
		public DrawableRoundRectangle(Double centerX, Double centerY, Double width, Double height, Double cornerWidth, Double cornerHeight)
			: base(AssemblyHelper.CreateInstance(Types.DrawableRoundRectangle, new Type[] {typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Double)}, centerX, centerY, width, height, cornerWidth, cornerHeight))
		{
		}
		public Double CenterX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("CenterX");
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
					_Instance.SetPropertyValue("CenterX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double CenterY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("CenterY");
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
					_Instance.SetPropertyValue("CenterY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double CornerHeight
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("CornerHeight");
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
					_Instance.SetPropertyValue("CornerHeight", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double CornerWidth
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("CornerWidth");
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
					_Instance.SetPropertyValue("CornerWidth", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double Height
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
				return (Double)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Height", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double Width
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
				return (Double)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Width", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
	}
}
