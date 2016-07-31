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
	public sealed class DrawableEllipse: Drawable
	{
		internal DrawableEllipse(object instance)
			: base(instance)
		{
		}
		public DrawableEllipse(Double originX, Double originY, Double radiusX, Double radiusY, Double startDegrees, Double endDegrees)
			: base(AssemblyHelper.CreateInstance(Types.DrawableEllipse, new Type[] {typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Double)}, originX, originY, radiusX, radiusY, startDegrees, endDegrees))
		{
		}
		public Double EndDegrees
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("EndDegrees");
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
					_Instance.SetPropertyValue("EndDegrees", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double OriginX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("OriginX");
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
					_Instance.SetPropertyValue("OriginX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double OriginY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("OriginY");
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
					_Instance.SetPropertyValue("OriginY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double RadiusX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("RadiusX");
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
					_Instance.SetPropertyValue("RadiusX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double RadiusY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("RadiusY");
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
					_Instance.SetPropertyValue("RadiusY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double StartDegrees
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StartDegrees");
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
					_Instance.SetPropertyValue("StartDegrees", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
	}
}
