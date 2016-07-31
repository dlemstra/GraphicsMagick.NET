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
	public sealed class SparseColorArg
	{
		internal object _Instance;
		internal SparseColorArg(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(SparseColorArg obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			SparseColorArg casted = obj as SparseColorArg;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public SparseColorArg(Double x, Double y, MagickColor color)
			: this(AssemblyHelper.CreateInstance(Types.SparseColorArg, new Type[] {typeof(Double), typeof(Double), Types.MagickColor}, x, y, GraphicsMagick.MagickColor.GetInstance(color)))
		{
		}
		public MagickColor Color
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Color");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickColor(result));
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
		}
	}
}
