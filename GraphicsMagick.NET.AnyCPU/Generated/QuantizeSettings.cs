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
	public sealed class QuantizeSettings
	{
		internal object _Instance;
		internal QuantizeSettings(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(QuantizeSettings obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			QuantizeSettings casted = obj as QuantizeSettings;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public QuantizeSettings()
			: this(AssemblyHelper.CreateInstance(Types.QuantizeSettings))
		{
		}
		public Int32 Colors
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Colors");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Colors", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public ColorSpace ColorSpace
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ColorSpace");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (ColorSpace)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("ColorSpace", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean Dither
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Dither");
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
					_Instance.SetPropertyValue("Dither", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean MeasureErrors
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("MeasureErrors");
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
					_Instance.SetPropertyValue("MeasureErrors", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 TreeDepth
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("TreeDepth");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("TreeDepth", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
	}
}
