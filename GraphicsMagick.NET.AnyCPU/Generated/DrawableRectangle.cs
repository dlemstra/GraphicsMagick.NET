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
	public sealed class DrawableRectangle: Drawable
	{
		internal DrawableRectangle(object instance)
			: base(instance)
		{
		}
		public DrawableRectangle(Rectangle rectangle)
			: base(AssemblyHelper.CreateInstance(Types.DrawableRectangle, new Type[] {typeof(Rectangle)}, rectangle))
		{
		}
		public DrawableRectangle(Double upperLeftX, Double upperLeftY, Double lowerRightX, Double lowerRightY)
			: base(AssemblyHelper.CreateInstance(Types.DrawableRectangle, new Type[] {typeof(Double), typeof(Double), typeof(Double), typeof(Double)}, upperLeftX, upperLeftY, lowerRightX, lowerRightY))
		{
		}
		public Double LowerRightX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("LowerRightX");
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
					_Instance.SetPropertyValue("LowerRightX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double LowerRightY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("LowerRightY");
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
					_Instance.SetPropertyValue("LowerRightY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double UpperLeftX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("UpperLeftX");
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
					_Instance.SetPropertyValue("UpperLeftX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double UpperLeftY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("UpperLeftY");
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
					_Instance.SetPropertyValue("UpperLeftY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
	}
}
