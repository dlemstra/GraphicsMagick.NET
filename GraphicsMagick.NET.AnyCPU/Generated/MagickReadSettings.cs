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
	public sealed class MagickReadSettings
	{
		internal object _Instance;
		internal MagickReadSettings(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(MagickReadSettings obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			MagickReadSettings casted = obj as MagickReadSettings;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public MagickReadSettings()
			: this(AssemblyHelper.CreateInstance(Types.MagickReadSettings))
		{
		}
		public Nullable<ColorSpace> ColorSpace
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
				if (result == null)
					return new Nullable<ColorSpace>();
				else
					return new Nullable<ColorSpace>((ColorSpace)result);
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("ColorSpace", value == null ? Types.NullableColorSpace.CreateInstance() : Types.NullableColorSpace.CreateInstance(new Type[] { Types.ColorSpace }, value.Value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickGeometry Density
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Density");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickGeometry(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Density", MagickGeometry.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Nullable<MagickFormat> Format
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Format");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				if (result == null)
					return new Nullable<MagickFormat>();
				else
					return new Nullable<MagickFormat>((MagickFormat)result);
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Format", value == null ? Types.NullableMagickFormat.CreateInstance() : Types.NullableMagickFormat.CreateInstance(new Type[] { Types.MagickFormat }, value.Value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Nullable<Int32> Height
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
				if (result == null)
					return new Nullable<Int32>();
				else
					return new Nullable<Int32>((Int32)result);
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Height", value == null ? Types.NullableInt32.CreateInstance() : Types.NullableInt32.CreateInstance(new Type[] { typeof(Int32) }, value.Value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public PixelStorageSettings PixelStorage
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("PixelStorage");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new PixelStorageSettings(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("PixelStorage", PixelStorageSettings.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Nullable<Boolean> UseMonochrome
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("UseMonochrome");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				if (result == null)
					return new Nullable<Boolean>();
				else
					return new Nullable<Boolean>((Boolean)result);
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("UseMonochrome", value == null ? Types.NullableBoolean.CreateInstance() : Types.NullableBoolean.CreateInstance(new Type[] { typeof(Boolean) }, value.Value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Nullable<Int32> Width
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
				if (result == null)
					return new Nullable<Int32>();
				else
					return new Nullable<Int32>((Int32)result);
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Width", value == null ? Types.NullableInt32.CreateInstance() : Types.NullableInt32.CreateInstance(new Type[] { typeof(Int32) }, value.Value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public void SetDefine(MagickFormat format, String name, String value)
		{
			try
			{
				_Instance.CallMethod("SetDefine", new Type[] {Types.MagickFormat, typeof(String), typeof(String)}, format, name, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
	}
}
