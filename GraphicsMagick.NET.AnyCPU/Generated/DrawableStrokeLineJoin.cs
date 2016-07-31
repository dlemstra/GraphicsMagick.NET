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
	public sealed class DrawableStrokeLineJoin: Drawable
	{
		internal DrawableStrokeLineJoin(object instance)
			: base(instance)
		{
		}
		public DrawableStrokeLineJoin(LineJoin lineJoin)
			: base(AssemblyHelper.CreateInstance(Types.DrawableStrokeLineJoin, new Type[] {Types.LineJoin}, lineJoin))
		{
		}
		public LineJoin LineCap
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("LineCap");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (LineJoin)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("LineCap", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
	}
}
