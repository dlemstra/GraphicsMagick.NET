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
	public sealed class DrawableAffine: Drawable
	{
		internal DrawableAffine(object instance)
			: base(instance)
		{
		}
		public DrawableAffine(Matrix matrix)
			: base(AssemblyHelper.CreateInstance(Types.DrawableAffine, new Type[] {typeof(Matrix)}, matrix))
		{
		}
		public DrawableAffine(Double scaleX, Double scaleY, Double shearX, Double shearY, Double translateX, Double translateY)
			: base(AssemblyHelper.CreateInstance(Types.DrawableAffine, new Type[] {typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Double)}, scaleX, scaleY, shearX, shearY, translateX, translateY))
		{
		}
		public Double ScaleX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ScaleX");
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
					_Instance.SetPropertyValue("ScaleX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double ScaleY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ScaleY");
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
					_Instance.SetPropertyValue("ScaleY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double ShearX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ShearX");
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
					_Instance.SetPropertyValue("ShearX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double ShearY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ShearY");
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
					_Instance.SetPropertyValue("ShearY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double TranslateX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("TranslateX");
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
					_Instance.SetPropertyValue("TranslateX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double TranslateY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("TranslateY");
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
					_Instance.SetPropertyValue("TranslateY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
	}
}
