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
	public sealed class DrawableCompositeImage: Drawable
	{
		internal DrawableCompositeImage(object instance)
			: base(instance)
		{
		}
		public DrawableCompositeImage(MagickGeometry offset, CompositeOperator compose, MagickImage image)
			: base(AssemblyHelper.CreateInstance(Types.DrawableCompositeImage, new Type[] {Types.MagickGeometry, Types.CompositeOperator, Types.MagickImage}, GraphicsMagick.MagickGeometry.GetInstance(offset), compose, GraphicsMagick.MagickImage.GetInstance(image)))
		{
		}
		public DrawableCompositeImage(MagickGeometry offset, MagickImage image)
			: base(AssemblyHelper.CreateInstance(Types.DrawableCompositeImage, new Type[] {Types.MagickGeometry, Types.MagickImage}, GraphicsMagick.MagickGeometry.GetInstance(offset), GraphicsMagick.MagickImage.GetInstance(image)))
		{
		}
		public DrawableCompositeImage(Double x, Double y, CompositeOperator compose, MagickImage image)
			: base(AssemblyHelper.CreateInstance(Types.DrawableCompositeImage, new Type[] {typeof(Double), typeof(Double), Types.CompositeOperator, Types.MagickImage}, x, y, compose, GraphicsMagick.MagickImage.GetInstance(image)))
		{
		}
		public DrawableCompositeImage(Double x, Double y, MagickImage image)
			: base(AssemblyHelper.CreateInstance(Types.DrawableCompositeImage, new Type[] {typeof(Double), typeof(Double), Types.MagickImage}, x, y, GraphicsMagick.MagickImage.GetInstance(image)))
		{
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
