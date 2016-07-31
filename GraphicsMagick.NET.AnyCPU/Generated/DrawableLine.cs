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
	public sealed class DrawableLine: Drawable
	{
		internal DrawableLine(object instance)
			: base(instance)
		{
		}
		public DrawableLine(Double startX, Double startY, Double endX, Double endY)
			: base(AssemblyHelper.CreateInstance(Types.DrawableLine, new Type[] {typeof(Double), typeof(Double), typeof(Double), typeof(Double)}, startX, startY, endX, endY))
		{
		}
		public Double EndX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("EndX");
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
					_Instance.SetPropertyValue("EndX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double EndY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("EndY");
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
					_Instance.SetPropertyValue("EndY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double StartX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StartX");
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
					_Instance.SetPropertyValue("StartX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double StartY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StartY");
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
					_Instance.SetPropertyValue("StartY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
	}
}
