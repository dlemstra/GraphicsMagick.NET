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
	public sealed class MagickImage: IDisposable, IEquatable<MagickImage>, IComparable<MagickImage>
	{
		internal object _Instance;
		internal MagickImage(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(MagickImage obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			MagickImage casted = obj as MagickImage;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		internal static object[] CastArray(MagickImage[] array)
		{
			if (ReferenceEquals(array, null))
				return null;
			Type arrayType = Types.MagickImage.MakeArrayType();
			object[] result = (object[])arrayType.CreateInstance(array.Length);
			for (int i = 0; i < array.Length; i++)
			{
				if (!ReferenceEquals(array[i], null))
					result[i] = MagickImage.GetInstance(array[i]);
			}
			return result;
		}
		internal static void UpdateArray(MagickImage[] array, object[] objectArray)
		{
			if (ReferenceEquals(array, null))
				return ;
			for (int i = 0; i < array.Length; i++)
			{
				array[i] = objectArray[i] == null ? null : new MagickImage(objectArray[i]);
			}
		}
		internal static object CastIEnumerable(IEnumerable<MagickImage> list)
		{
			if (ReferenceEquals(list, null))
				return null;
			Type listType = typeof(List<>).MakeGenericType(Types.MagickImage);
			object result = listType.CreateInstance();
			foreach (MagickImage item in list)
				result.CallMethod("Add", MagickImage.GetInstance(item));
			return result;
		}
		public MagickImage(Stream stream, MagickReadSettings readSettings)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(Stream), Types.MagickReadSettings}, stream, GraphicsMagick.MagickReadSettings.GetInstance(readSettings)))
		{
		}
		public MagickImage(Stream stream)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(Stream)}, stream))
		{
		}
		public MagickImage(String fileName, MagickReadSettings readSettings)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(String), Types.MagickReadSettings}, fileName, GraphicsMagick.MagickReadSettings.GetInstance(readSettings)))
		{
		}
		public MagickImage(String fileName, Int32 width, Int32 height)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(String), typeof(Int32), typeof(Int32)}, fileName, width, height))
		{
		}
		public MagickImage(String fileName)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(String)}, fileName))
		{
		}
		public MagickImage(MagickImage image)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(image)))
		{
		}
		public MagickImage(MagickColor color, Int32 width, Int32 height)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {Types.MagickColor, typeof(Int32), typeof(Int32)}, GraphicsMagick.MagickColor.GetInstance(color), width, height))
		{
		}
		public MagickImage(FileInfo file, MagickReadSettings readSettings)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(FileInfo), Types.MagickReadSettings}, file, GraphicsMagick.MagickReadSettings.GetInstance(readSettings)))
		{
		}
		public MagickImage(FileInfo file)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(FileInfo)}, file))
		{
		}
		public MagickImage(Bitmap bitmap)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(Bitmap)}, bitmap))
		{
		}
		public MagickImage(Byte[] data, MagickReadSettings readSettings)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(Byte[]), Types.MagickReadSettings}, data, GraphicsMagick.MagickReadSettings.GetInstance(readSettings)))
		{
		}
		public MagickImage(Byte[] data)
			: this(AssemblyHelper.CreateInstance(Types.MagickImage, new Type[] {typeof(Byte[])}, data))
		{
		}
		public MagickImage()
			: this(AssemblyHelper.CreateInstance(Types.MagickImage))
		{
		}
		private Delegate _WarningDelegate;
		private EventHandler<WarningEventArgs> _Warning;
		private object HandleWarningEvent(object[] args)
		{
			if (_Warning != null)
				_Warning(this, new WarningEventArgs(args[1]));
			return null;
		}
		public event EventHandler<WarningEventArgs> Warning
		{
			add
			{
				if (_Warning == null)
				{
					EventInfo eventInfo = Types.MagickImage.GetEvent("Warning", BindingFlags.Public | BindingFlags.Instance);
					if (_WarningDelegate == null)
						_WarningDelegate = eventInfo.EventHandlerType.BuildDynamicHandler(HandleWarningEvent);
					eventInfo.GetAddMethod(true).Invoke(_Instance, new object[] { _WarningDelegate });
				}
				_Warning += value;
			}
			remove
			{
				_Warning -= value;
				if (_Warning == null)
				{
					EventInfo eventInfo = Types.MagickImage.GetEvent("Warning", BindingFlags.Public | BindingFlags.Instance);
					eventInfo.GetRemoveMethod(true).Invoke(_Instance, new object[] { _WarningDelegate });
				}
			}
		}
		public static bool operator ==(MagickImage left, MagickImage right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return Object.Equals(left, right);
		}
		public static explicit operator Byte[](MagickImage image)
		{
			object result = Types.MagickImage.CallMethod("op_Explicit", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(image));
			return (Byte[])result;
		}
		public static bool operator >(MagickImage left, MagickImage right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) == 1;
		}
		public static bool operator >=(MagickImage left, MagickImage right)
		{
			if (ReferenceEquals(left, null))
				return ReferenceEquals(right, null);
			return left.CompareTo(right) >= 0;
		}
		public static bool operator !=(MagickImage left, MagickImage right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return !Object.Equals(left, right);
		}
		public static bool operator <(MagickImage left, MagickImage right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) == -1;
		}
		public static bool operator <=(MagickImage left, MagickImage right)
		{
			if (ReferenceEquals(left, null))
				return !ReferenceEquals(right, null);
			return left.CompareTo(right) <= 0;
		}
		public Boolean Adjoin
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Adjoin");
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
					_Instance.SetPropertyValue("Adjoin", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 AnimationDelay
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("AnimationDelay");
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
					_Instance.SetPropertyValue("AnimationDelay", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 AnimationIterations
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("AnimationIterations");
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
					_Instance.SetPropertyValue("AnimationIterations", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean AntiAlias
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("AntiAlias");
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
					_Instance.SetPropertyValue("AntiAlias", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickColor BackgroundColor
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("BackgroundColor");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickColor(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("BackgroundColor", MagickColor.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 BaseHeight
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("BaseHeight");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
		}
		public Int32 BaseWidth
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("BaseWidth");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
		}
		public MagickColor BorderColor
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("BorderColor");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickColor(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("BorderColor", MagickColor.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickGeometry BoundingBox
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("BoundingBox");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickGeometry(result));
			}
		}
		public MagickColor BoxColor
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("BoxColor");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickColor(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("BoxColor", MagickColor.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public ClassType ClassType
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ClassType");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (ClassType)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("ClassType", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickImage ClipMask
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ClipMask");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickImage(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("ClipMask", MagickImage.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Percentage ColorFuzz
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ColorFuzz");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new Percentage(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("ColorFuzz", Percentage.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 ColorMapSize
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ColorMapSize");
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
					_Instance.SetPropertyValue("ColorMapSize", value);
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
		public ColorType ColorType
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ColorType");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (ColorType)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("ColorType", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public String Comment
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Comment");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Comment", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public CompositeOperator Compose
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Compose");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (CompositeOperator)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Compose", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public CompressionMethod CompressionMethod
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("CompressionMethod");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (CompressionMethod)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("CompressionMethod", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean Debug
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Debug");
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
					_Instance.SetPropertyValue("Debug", value);
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
		public Int32 Depth
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Depth");
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
					_Instance.SetPropertyValue("Depth", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Endian Endian
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Endian");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Endian)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Endian", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public String FileName
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FileName");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
		}
		public Int32 FileSize
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FileSize");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
		}
		public MagickColor FillColor
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FillColor");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickColor(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("FillColor", MagickColor.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickImage FillPattern
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FillPattern");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickImage(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("FillPattern", MagickImage.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public FillRule FillRule
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FillRule");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (FillRule)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("FillRule", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public FilterType FilterType
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FilterType");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (FilterType)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("FilterType", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public String FlashPixView
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FlashPixView");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("FlashPixView", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public String Font
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Font");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Font", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double FontPointsize
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FontPointsize");
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
					_Instance.SetPropertyValue("FontPointsize", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickFormat Format
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
				return (MagickFormat)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Format", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickFormatInfo FormatInfo
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("FormatInfo");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickFormatInfo(result));
			}
		}
		public GifDisposeMethod GifDisposeMethod
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("GifDisposeMethod");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (GifDisposeMethod)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("GifDisposeMethod", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean HasAlpha
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("HasAlpha");
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
					_Instance.SetPropertyValue("HasAlpha", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 Height
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
				return (Int32)result;
			}
		}
		public Interlace Interlace
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Interlace");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Interlace)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Interlace", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public String Label
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Label");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Label", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickColor MatteColor
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("MatteColor");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickColor(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("MatteColor", MagickColor.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public OrientationType Orientation
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Orientation");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (OrientationType)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("Orientation", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickGeometry Page
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Page");
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
					_Instance.SetPropertyValue("Page", MagickGeometry.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 Quality
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Quality");
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
					_Instance.SetPropertyValue("Quality", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public RenderingIntent RenderingIntent
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("RenderingIntent");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (RenderingIntent)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("RenderingIntent", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Resolution ResolutionUnits
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ResolutionUnits");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Resolution)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("ResolutionUnits", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double ResolutionX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ResolutionX");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Double)result;
			}
		}
		public Double ResolutionY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("ResolutionY");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Double)result;
			}
		}
		public String Signature
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Signature");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
		}
		public Boolean StrokeAntiAlias
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StrokeAntiAlias");
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
					_Instance.SetPropertyValue("StrokeAntiAlias", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickColor StrokeColor
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StrokeColor");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickColor(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("StrokeColor", MagickColor.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double[] StrokeDashArray
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StrokeDashArray");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Double[])result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("StrokeDashArray", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double StrokeDashOffset
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StrokeDashOffset");
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
					_Instance.SetPropertyValue("StrokeDashOffset", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public LineCap StrokeLineCap
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StrokeLineCap");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (LineCap)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("StrokeLineCap", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public LineJoin StrokeLineJoin
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StrokeLineJoin");
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
					_Instance.SetPropertyValue("StrokeLineJoin", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 StrokeMiterLimit
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StrokeMiterLimit");
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
					_Instance.SetPropertyValue("StrokeMiterLimit", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public MagickImage StrokePattern
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StrokePattern");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new MagickImage(result));
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("StrokePattern", MagickImage.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double StrokeWidth
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("StrokeWidth");
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
					_Instance.SetPropertyValue("StrokeWidth", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Encoding TextEncoding
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("TextEncoding");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Encoding)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("TextEncoding", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public String TileName
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("TileName");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
			set
			{
				try
				{
					_Instance.SetPropertyValue("TileName", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 TotalColors
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("TotalColors");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
		}
		public Boolean Verbose
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Verbose");
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
					_Instance.SetPropertyValue("Verbose", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 Width
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
				return (Int32)result;
			}
		}
		public void AdaptiveThreshold(Int32 width, Int32 height, Percentage bias)
		{
			try
			{
				_Instance.CallMethod("AdaptiveThreshold", new Type[] {typeof(Int32), typeof(Int32), Types.Percentage}, width, height, GraphicsMagick.Percentage.GetInstance(bias));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AdaptiveThreshold(Int32 width, Int32 height, Double bias)
		{
			try
			{
				_Instance.CallMethod("AdaptiveThreshold", new Type[] {typeof(Int32), typeof(Int32), typeof(Double)}, width, height, bias);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AdaptiveThreshold(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("AdaptiveThreshold", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddNoise(NoiseType noiseType, Channels channels)
		{
			try
			{
				_Instance.CallMethod("AddNoise", new Type[] {Types.NoiseType, Types.Channels}, noiseType, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddNoise(NoiseType noiseType)
		{
			try
			{
				_Instance.CallMethod("AddNoise", new Type[] {Types.NoiseType}, noiseType);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddProfile(ImageProfile profile)
		{
			try
			{
				_Instance.CallMethod("AddProfile", new Type[] {Types.ImageProfile}, GraphicsMagick.ImageProfile.GetInstance(profile));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AffineTransform(DrawableAffine affineMatrix)
		{
			try
			{
				_Instance.CallMethod("AffineTransform", new Type[] {Types.DrawableAffine}, GraphicsMagick.DrawableAffine.GetInstance(affineMatrix));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Annotate(String text, Gravity gravity)
		{
			try
			{
				_Instance.CallMethod("Annotate", new Type[] {typeof(String), Types.Gravity}, text, gravity);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Annotate(String text, MagickGeometry boundingArea, Gravity gravity, Double degrees)
		{
			try
			{
				_Instance.CallMethod("Annotate", new Type[] {typeof(String), Types.MagickGeometry, Types.Gravity, typeof(Double)}, text, GraphicsMagick.MagickGeometry.GetInstance(boundingArea), gravity, degrees);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Annotate(String text, MagickGeometry boundingArea, Gravity gravity)
		{
			try
			{
				_Instance.CallMethod("Annotate", new Type[] {typeof(String), Types.MagickGeometry, Types.Gravity}, text, GraphicsMagick.MagickGeometry.GetInstance(boundingArea), gravity);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Annotate(String text, MagickGeometry boundingArea)
		{
			try
			{
				_Instance.CallMethod("Annotate", new Type[] {typeof(String), Types.MagickGeometry}, text, GraphicsMagick.MagickGeometry.GetInstance(boundingArea));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Blur(Double radius, Double sigma, Channels channels)
		{
			try
			{
				_Instance.CallMethod("Blur", new Type[] {typeof(Double), typeof(Double), Types.Channels}, radius, sigma, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Blur(Double radius, Double sigma)
		{
			try
			{
				_Instance.CallMethod("Blur", new Type[] {typeof(Double), typeof(Double)}, radius, sigma);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Blur(Channels channels)
		{
			try
			{
				_Instance.CallMethod("Blur", new Type[] {Types.Channels}, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Blur()
		{
			try
			{
				_Instance.CallMethod("Blur");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Border(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Border", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Border(Int32 size)
		{
			try
			{
				_Instance.CallMethod("Border", new Type[] {typeof(Int32)}, size);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void CDL(String fileName)
		{
			try
			{
				_Instance.CallMethod("CDL", new Type[] {typeof(String)}, fileName);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Charcoal(Double radius, Double sigma)
		{
			try
			{
				_Instance.CallMethod("Charcoal", new Type[] {typeof(Double), typeof(Double)}, radius, sigma);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Charcoal()
		{
			try
			{
				_Instance.CallMethod("Charcoal");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Chop(MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("Chop", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Chop(Int32 xOffset, Int32 width, Int32 yOffset, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Chop", new Type[] {typeof(Int32), typeof(Int32), typeof(Int32), typeof(Int32)}, xOffset, width, yOffset, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void ChopHorizontal(Int32 offset, Int32 width)
		{
			try
			{
				_Instance.CallMethod("ChopHorizontal", new Type[] {typeof(Int32), typeof(Int32)}, offset, width);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void ChopVertical(Int32 offset, Int32 height)
		{
			try
			{
				_Instance.CallMethod("ChopVertical", new Type[] {typeof(Int32), typeof(Int32)}, offset, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void ChromaBluePrimary(Double x, Double y)
		{
			try
			{
				_Instance.CallMethod("ChromaBluePrimary", new Type[] {typeof(Double), typeof(Double)}, x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void ChromaGreenPrimary(Double x, Double y)
		{
			try
			{
				_Instance.CallMethod("ChromaGreenPrimary", new Type[] {typeof(Double), typeof(Double)}, x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void ChromaRedPrimary(Double x, Double y)
		{
			try
			{
				_Instance.CallMethod("ChromaRedPrimary", new Type[] {typeof(Double), typeof(Double)}, x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void ChromaWhitePoint(Double x, Double y)
		{
			try
			{
				_Instance.CallMethod("ChromaWhitePoint", new Type[] {typeof(Double), typeof(Double)}, x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public MagickImage Clone()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Clone");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickImage(result));
		}
		public void Colorize(MagickColor color, Percentage alphaRed, Percentage alphaGreen, Percentage alphaBlue)
		{
			try
			{
				_Instance.CallMethod("Colorize", new Type[] {Types.MagickColor, Types.Percentage, Types.Percentage, Types.Percentage}, GraphicsMagick.MagickColor.GetInstance(color), GraphicsMagick.Percentage.GetInstance(alphaRed), GraphicsMagick.Percentage.GetInstance(alphaGreen), GraphicsMagick.Percentage.GetInstance(alphaBlue));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Colorize(MagickColor color, Percentage alpha)
		{
			try
			{
				_Instance.CallMethod("Colorize", new Type[] {Types.MagickColor, Types.Percentage}, GraphicsMagick.MagickColor.GetInstance(color), GraphicsMagick.Percentage.GetInstance(alpha));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void ColorMap(Int32 index, MagickColor color)
		{
			try
			{
				_Instance.CallMethod("ColorMap", new Type[] {typeof(Int32), Types.MagickColor}, index, GraphicsMagick.MagickColor.GetInstance(color));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public MagickColor ColorMap(Int32 index)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ColorMap", new Type[] {typeof(Int32)}, index);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickColor(result));
		}
		public void ColorMatrix(ColorMatrix matrix)
		{
			try
			{
				_Instance.CallMethod("ColorMatrix", new Type[] {Types.ColorMatrix}, GraphicsMagick.ColorMatrix.GetInstance(matrix));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public Int32 CompareTo(MagickImage other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("CompareTo", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(other));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Int32)result;
		}
		public void Composite(MagickImage image, Gravity gravity, CompositeOperator compose)
		{
			try
			{
				_Instance.CallMethod("Composite", new Type[] {Types.MagickImage, Types.Gravity, Types.CompositeOperator}, GraphicsMagick.MagickImage.GetInstance(image), gravity, compose);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Composite(MagickImage image, Gravity gravity)
		{
			try
			{
				_Instance.CallMethod("Composite", new Type[] {Types.MagickImage, Types.Gravity}, GraphicsMagick.MagickImage.GetInstance(image), gravity);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Composite(MagickImage image, MagickGeometry offset, CompositeOperator compose)
		{
			try
			{
				_Instance.CallMethod("Composite", new Type[] {Types.MagickImage, Types.MagickGeometry, Types.CompositeOperator}, GraphicsMagick.MagickImage.GetInstance(image), GraphicsMagick.MagickGeometry.GetInstance(offset), compose);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Composite(MagickImage image, MagickGeometry offset)
		{
			try
			{
				_Instance.CallMethod("Composite", new Type[] {Types.MagickImage, Types.MagickGeometry}, GraphicsMagick.MagickImage.GetInstance(image), GraphicsMagick.MagickGeometry.GetInstance(offset));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Composite(MagickImage image, Int32 x, Int32 y, CompositeOperator compose)
		{
			try
			{
				_Instance.CallMethod("Composite", new Type[] {Types.MagickImage, typeof(Int32), typeof(Int32), Types.CompositeOperator}, GraphicsMagick.MagickImage.GetInstance(image), x, y, compose);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Composite(MagickImage image, Int32 x, Int32 y)
		{
			try
			{
				_Instance.CallMethod("Composite", new Type[] {Types.MagickImage, typeof(Int32), typeof(Int32)}, GraphicsMagick.MagickImage.GetInstance(image), x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Composite(MagickImage image, CompositeOperator compose)
		{
			try
			{
				_Instance.CallMethod("Composite", new Type[] {Types.MagickImage, Types.CompositeOperator}, GraphicsMagick.MagickImage.GetInstance(image), compose);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Contrast(Boolean enhance)
		{
			try
			{
				_Instance.CallMethod("Contrast", new Type[] {typeof(Boolean)}, enhance);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Contrast()
		{
			try
			{
				_Instance.CallMethod("Contrast");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Convolve(ConvolveMatrix convolveMatrix)
		{
			try
			{
				_Instance.CallMethod("Convolve", new Type[] {Types.ConvolveMatrix}, GraphicsMagick.ConvolveMatrix.GetInstance(convolveMatrix));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Crop(Int32 width, Int32 height, Gravity gravity)
		{
			try
			{
				_Instance.CallMethod("Crop", new Type[] {typeof(Int32), typeof(Int32), Types.Gravity}, width, height, gravity);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Crop(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Crop", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Crop(MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("Crop", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void CycleColormap(Int32 amount)
		{
			try
			{
				_Instance.CallMethod("CycleColormap", new Type[] {typeof(Int32)}, amount);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Despeckle()
		{
			try
			{
				_Instance.CallMethod("Despeckle");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Dispose()
		{
			try
			{
				_Instance.CallMethod("Dispose");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Draw(IEnumerable<Drawable> drawables)
		{
			try
			{
				_Instance.CallMethod("Draw", new Type[] {Types.IEnumerableDrawable}, Drawable.CastIEnumerable(drawables));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Draw(params Drawable[] drawables)
		{
			Draw((IEnumerable<Drawable>)drawables);
		}
		public void Edge(Double radius)
		{
			try
			{
				_Instance.CallMethod("Edge", new Type[] {typeof(Double)}, radius);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Emboss(Double radius, Double sigma)
		{
			try
			{
				_Instance.CallMethod("Emboss", new Type[] {typeof(Double), typeof(Double)}, radius, sigma);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Emboss()
		{
			try
			{
				_Instance.CallMethod("Emboss");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public MagickGeometry EncodingGeometry()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("EncodingGeometry");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickGeometry(result));
		}
		public void Enhance()
		{
			try
			{
				_Instance.CallMethod("Enhance");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Equalize()
		{
			try
			{
				_Instance.CallMethod("Equalize");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public Boolean Equals(MagickImage other)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(other));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Boolean)result;
		}
		public override Boolean Equals(Object obj)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Equals", new Type[] {typeof(Object)}, GraphicsMagick.MagickImage.GetInstance(obj));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Boolean)result;
		}
		public void Evaluate(Channels channels, MagickGeometry geometry, QuantumOperator evaluateOperator, Double value)
		{
			try
			{
				_Instance.CallMethod("Evaluate", new Type[] {Types.Channels, Types.MagickGeometry, Types.QuantumOperator, typeof(Double)}, channels, GraphicsMagick.MagickGeometry.GetInstance(geometry), evaluateOperator, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Evaluate(Channels channels, QuantumOperator evaluateOperator, Double value)
		{
			try
			{
				_Instance.CallMethod("Evaluate", new Type[] {Types.Channels, Types.QuantumOperator, typeof(Double)}, channels, evaluateOperator, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Extent(MagickGeometry geometry, Gravity gravity, MagickColor backgroundColor)
		{
			try
			{
				_Instance.CallMethod("Extent", new Type[] {Types.MagickGeometry, Types.Gravity, Types.MagickColor}, GraphicsMagick.MagickGeometry.GetInstance(geometry), gravity, GraphicsMagick.MagickColor.GetInstance(backgroundColor));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Extent(MagickGeometry geometry, Gravity gravity)
		{
			try
			{
				_Instance.CallMethod("Extent", new Type[] {Types.MagickGeometry, Types.Gravity}, GraphicsMagick.MagickGeometry.GetInstance(geometry), gravity);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Extent(MagickGeometry geometry, MagickColor backgroundColor)
		{
			try
			{
				_Instance.CallMethod("Extent", new Type[] {Types.MagickGeometry, Types.MagickColor}, GraphicsMagick.MagickGeometry.GetInstance(geometry), GraphicsMagick.MagickColor.GetInstance(backgroundColor));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Extent(MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("Extent", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Extent(Int32 width, Int32 height, Gravity gravity, MagickColor backgroundColor)
		{
			try
			{
				_Instance.CallMethod("Extent", new Type[] {typeof(Int32), typeof(Int32), Types.Gravity, Types.MagickColor}, width, height, gravity, GraphicsMagick.MagickColor.GetInstance(backgroundColor));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Extent(Int32 width, Int32 height, Gravity gravity)
		{
			try
			{
				_Instance.CallMethod("Extent", new Type[] {typeof(Int32), typeof(Int32), Types.Gravity}, width, height, gravity);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Extent(Int32 width, Int32 height, MagickColor backgroundColor)
		{
			try
			{
				_Instance.CallMethod("Extent", new Type[] {typeof(Int32), typeof(Int32), Types.MagickColor}, width, height, GraphicsMagick.MagickColor.GetInstance(backgroundColor));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Extent(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Extent", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Flip()
		{
			try
			{
				_Instance.CallMethod("Flip");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void FloodFill(MagickImage image, MagickGeometry geometry, MagickColor borderColor)
		{
			try
			{
				_Instance.CallMethod("FloodFill", new Type[] {Types.MagickImage, Types.MagickGeometry, Types.MagickColor}, GraphicsMagick.MagickImage.GetInstance(image), GraphicsMagick.MagickGeometry.GetInstance(geometry), GraphicsMagick.MagickColor.GetInstance(borderColor));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void FloodFill(MagickImage image, MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("FloodFill", new Type[] {Types.MagickImage, Types.MagickGeometry}, GraphicsMagick.MagickImage.GetInstance(image), GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void FloodFill(MagickImage image, Int32 x, Int32 y, MagickColor borderColor)
		{
			try
			{
				_Instance.CallMethod("FloodFill", new Type[] {Types.MagickImage, typeof(Int32), typeof(Int32), Types.MagickColor}, GraphicsMagick.MagickImage.GetInstance(image), x, y, GraphicsMagick.MagickColor.GetInstance(borderColor));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void FloodFill(MagickImage image, Int32 x, Int32 y)
		{
			try
			{
				_Instance.CallMethod("FloodFill", new Type[] {Types.MagickImage, typeof(Int32), typeof(Int32)}, GraphicsMagick.MagickImage.GetInstance(image), x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void FloodFill(MagickColor color, MagickGeometry geometry, MagickColor borderColor)
		{
			try
			{
				_Instance.CallMethod("FloodFill", new Type[] {Types.MagickColor, Types.MagickGeometry, Types.MagickColor}, GraphicsMagick.MagickColor.GetInstance(color), GraphicsMagick.MagickGeometry.GetInstance(geometry), GraphicsMagick.MagickColor.GetInstance(borderColor));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void FloodFill(MagickColor color, MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("FloodFill", new Type[] {Types.MagickColor, Types.MagickGeometry}, GraphicsMagick.MagickColor.GetInstance(color), GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void FloodFill(MagickColor color, Int32 x, Int32 y, MagickColor borderColor)
		{
			try
			{
				_Instance.CallMethod("FloodFill", new Type[] {Types.MagickColor, typeof(Int32), typeof(Int32), Types.MagickColor}, GraphicsMagick.MagickColor.GetInstance(color), x, y, GraphicsMagick.MagickColor.GetInstance(borderColor));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void FloodFill(MagickColor color, Int32 x, Int32 y)
		{
			try
			{
				_Instance.CallMethod("FloodFill", new Type[] {Types.MagickColor, typeof(Int32), typeof(Int32)}, GraphicsMagick.MagickColor.GetInstance(color), x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void FloodFill(Int32 alpha, Int32 x, Int32 y, PaintMethod paintMethod)
		{
			try
			{
				_Instance.CallMethod("FloodFill", new Type[] {typeof(Int32), typeof(Int32), typeof(Int32), Types.PaintMethod}, alpha, x, y, paintMethod);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Flop()
		{
			try
			{
				_Instance.CallMethod("Flop");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public TypeMetric FontTypeMetrics(String text)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("FontTypeMetrics", new Type[] {typeof(String)}, text);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new TypeMetric(result));
		}
		public String FormatExpression(String expression)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("FormatExpression", new Type[] {typeof(String)}, expression);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (String)result;
		}
		public void Frame(Int32 width, Int32 height, Int32 innerBevel, Int32 outerBevel)
		{
			try
			{
				_Instance.CallMethod("Frame", new Type[] {typeof(Int32), typeof(Int32), typeof(Int32), typeof(Int32)}, width, height, innerBevel, outerBevel);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Frame(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Frame", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Frame(MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("Frame", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Frame()
		{
			try
			{
				_Instance.CallMethod("Frame");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public static MagickImage FromBase64(String value)
		{
			object result;
			try
			{
				result = Types.MagickImage.CallMethod("FromBase64", new Type[] {typeof(String)}, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickImage(result));
		}
		public void Gamma(Double gammeRed, Double gammeGreen, Double gammeBlue)
		{
			try
			{
				_Instance.CallMethod("Gamma", new Type[] {typeof(Double), typeof(Double), typeof(Double)}, gammeRed, gammeGreen, gammeBlue);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Gamma(Double value)
		{
			try
			{
				_Instance.CallMethod("Gamma", new Type[] {typeof(Double)}, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public Double Gamma()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Gamma");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Double)result;
		}
		public void GaussianBlur(Double width, Double sigma, Channels channels)
		{
			try
			{
				_Instance.CallMethod("GaussianBlur", new Type[] {typeof(Double), typeof(Double), Types.Channels}, width, sigma, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void GaussianBlur(Double width, Double sigma)
		{
			try
			{
				_Instance.CallMethod("GaussianBlur", new Type[] {typeof(Double), typeof(Double)}, width, sigma);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public EightBimProfile Get8BimProfile()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Get8BimProfile");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new EightBimProfile(result));
		}
		public String GetAttribute(String name)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetAttribute", new Type[] {typeof(String)}, name);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (String)result;
		}
		public ColorProfile GetColorProfile()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetColorProfile");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new ColorProfile(result));
		}
		public String GetDefine(MagickFormat format, String name)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetDefine", new Type[] {Types.MagickFormat, typeof(String)}, format, name);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (String)result;
		}
		public ExifProfile GetExifProfile()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetExifProfile");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new ExifProfile(result));
		}
		public override Int32 GetHashCode()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetHashCode");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Int32)result;
		}
		public IptcProfile GetIptcProfile()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetIptcProfile");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new IptcProfile(result));
		}
		public ImageProfile GetProfile(String name)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetProfile", new Type[] {typeof(String)}, name);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new ImageProfile(result));
		}
		public PixelCollection GetReadOnlyPixels(Int32 x, Int32 y, Int32 width, Int32 height)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetReadOnlyPixels", new Type[] {typeof(Int32), typeof(Int32), typeof(Int32), typeof(Int32)}, x, y, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new PixelCollection(result));
		}
		public PixelCollection GetReadOnlyPixels()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetReadOnlyPixels");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new PixelCollection(result));
		}
		public WritablePixelCollection GetWritablePixels(Int32 x, Int32 y, Int32 width, Int32 height)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetWritablePixels", new Type[] {typeof(Int32), typeof(Int32), typeof(Int32), typeof(Int32)}, x, y, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new WritablePixelCollection(result));
		}
		public WritablePixelCollection GetWritablePixels()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetWritablePixels");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new WritablePixelCollection(result));
		}
		public XmpProfile GetXmpProfile()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetXmpProfile");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new XmpProfile(result));
		}
		public void HaldClut(MagickImage image)
		{
			try
			{
				_Instance.CallMethod("HaldClut", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(image));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public Dictionary<MagickColor,Int32> Histogram()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Histogram");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			Dictionary<MagickColor,Int32> casted_result = new Dictionary<MagickColor,Int32>();
			foreach (object key in (IEnumerable)result.GetPropertyValue("Keys"))
			{
				casted_result[(key == null ? null : new MagickColor(key))] = (Int32)result.GetIndexer(key);
			}
			return casted_result;
		}
		public void Implode(Double factor)
		{
			try
			{
				_Instance.CallMethod("Implode", new Type[] {typeof(Double)}, factor);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Level(Byte blackPoint, Byte whitePoint, Double midpoint, Channels channels)
		{
			try
			{
				_Instance.CallMethod("Level", new Type[] {typeof(Byte), typeof(Byte), typeof(Double), Types.Channels}, blackPoint, whitePoint, midpoint, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Level(Percentage blackPointPercentage, Percentage whitePointPercentage, Double midpoint, Channels channels)
		{
			try
			{
				_Instance.CallMethod("Level", new Type[] {Types.Percentage, Types.Percentage, typeof(Double), Types.Channels}, GraphicsMagick.Percentage.GetInstance(blackPointPercentage), GraphicsMagick.Percentage.GetInstance(whitePointPercentage), midpoint, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Level(Byte blackPoint, Byte whitePoint, Double midpoint)
		{
			try
			{
				_Instance.CallMethod("Level", new Type[] {typeof(Byte), typeof(Byte), typeof(Double)}, blackPoint, whitePoint, midpoint);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Level(Percentage blackPointPercentage, Percentage whitePointPercentage, Double midpoint)
		{
			try
			{
				_Instance.CallMethod("Level", new Type[] {Types.Percentage, Types.Percentage, typeof(Double)}, GraphicsMagick.Percentage.GetInstance(blackPointPercentage), GraphicsMagick.Percentage.GetInstance(whitePointPercentage), midpoint);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Level(Byte blackPoint, Byte whitePoint, Channels channels)
		{
			try
			{
				_Instance.CallMethod("Level", new Type[] {typeof(Byte), typeof(Byte), Types.Channels}, blackPoint, whitePoint, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Level(Percentage blackPointPercentage, Percentage whitePointPercentage, Channels channels)
		{
			try
			{
				_Instance.CallMethod("Level", new Type[] {Types.Percentage, Types.Percentage, Types.Channels}, GraphicsMagick.Percentage.GetInstance(blackPointPercentage), GraphicsMagick.Percentage.GetInstance(whitePointPercentage), channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Level(Byte blackPoint, Byte whitePoint)
		{
			try
			{
				_Instance.CallMethod("Level", new Type[] {typeof(Byte), typeof(Byte)}, blackPoint, whitePoint);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Level(Percentage blackPointPercentage, Percentage whitePointPercentage)
		{
			try
			{
				_Instance.CallMethod("Level", new Type[] {Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(blackPointPercentage), GraphicsMagick.Percentage.GetInstance(whitePointPercentage));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Lower(Int32 size)
		{
			try
			{
				_Instance.CallMethod("Lower", new Type[] {typeof(Int32)}, size);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Magnify()
		{
			try
			{
				_Instance.CallMethod("Magnify");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public MagickErrorInfo Map(MagickImage image, QuantizeSettings settings)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Map", new Type[] {Types.MagickImage, Types.QuantizeSettings}, GraphicsMagick.MagickImage.GetInstance(image), GraphicsMagick.QuantizeSettings.GetInstance(settings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickErrorInfo(result));
		}
		public MagickErrorInfo Map(MagickImage image)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Map", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(image));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickErrorInfo(result));
		}
		public void MedianFilter(Double radius)
		{
			try
			{
				_Instance.CallMethod("MedianFilter", new Type[] {typeof(Double)}, radius);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void MedianFilter()
		{
			try
			{
				_Instance.CallMethod("MedianFilter");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Minify()
		{
			try
			{
				_Instance.CallMethod("Minify");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Modulate(Percentage brightness, Percentage saturation, Percentage hue)
		{
			try
			{
				_Instance.CallMethod("Modulate", new Type[] {Types.Percentage, Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(brightness), GraphicsMagick.Percentage.GetInstance(saturation), GraphicsMagick.Percentage.GetInstance(hue));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Modulate(Percentage brightness, Percentage saturation)
		{
			try
			{
				_Instance.CallMethod("Modulate", new Type[] {Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(brightness), GraphicsMagick.Percentage.GetInstance(saturation));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Modulate(Percentage brightness)
		{
			try
			{
				_Instance.CallMethod("Modulate", new Type[] {Types.Percentage}, GraphicsMagick.Percentage.GetInstance(brightness));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void MotionBlur(Double radius, Double sigma, Double angle)
		{
			try
			{
				_Instance.CallMethod("MotionBlur", new Type[] {typeof(Double), typeof(Double), typeof(Double)}, radius, sigma, angle);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Negate(Boolean onlyGrayscale)
		{
			try
			{
				_Instance.CallMethod("Negate", new Type[] {typeof(Boolean)}, onlyGrayscale);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Negate()
		{
			try
			{
				_Instance.CallMethod("Negate");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Normalize()
		{
			try
			{
				_Instance.CallMethod("Normalize");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void OilPaint(Double radius)
		{
			try
			{
				_Instance.CallMethod("OilPaint", new Type[] {typeof(Double)}, radius);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void OilPaint()
		{
			try
			{
				_Instance.CallMethod("OilPaint");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Opaque(MagickColor target, MagickColor fill)
		{
			try
			{
				_Instance.CallMethod("Opaque", new Type[] {Types.MagickColor, Types.MagickColor}, GraphicsMagick.MagickColor.GetInstance(target), GraphicsMagick.MagickColor.GetInstance(fill));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Ping(Stream stream)
		{
			try
			{
				_Instance.CallMethod("Ping", new Type[] {typeof(Stream)}, stream);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Ping(String fileName)
		{
			try
			{
				_Instance.CallMethod("Ping", new Type[] {typeof(String)}, fileName);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Ping(Byte[] data)
		{
			try
			{
				_Instance.CallMethod("Ping", new Type[] {typeof(Byte[])}, data);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void PreserveColorType()
		{
			try
			{
				_Instance.CallMethod("PreserveColorType");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public MagickErrorInfo Quantize(QuantizeSettings settings)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Quantize", new Type[] {Types.QuantizeSettings}, GraphicsMagick.QuantizeSettings.GetInstance(settings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickErrorInfo(result));
		}
		public void Raise(Int32 size)
		{
			try
			{
				_Instance.CallMethod("Raise", new Type[] {typeof(Int32)}, size);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void RandomThreshold(Byte low, Byte high, Channels channels)
		{
			try
			{
				_Instance.CallMethod("RandomThreshold", new Type[] {typeof(Byte), typeof(Byte), Types.Channels}, low, high, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void RandomThreshold(Byte low, Byte high)
		{
			try
			{
				_Instance.CallMethod("RandomThreshold", new Type[] {typeof(Byte), typeof(Byte)}, low, high);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void RandomThreshold(Percentage percentageLow, Percentage percentageHigh, Channels channels)
		{
			try
			{
				_Instance.CallMethod("RandomThreshold", new Type[] {Types.Percentage, Types.Percentage, Types.Channels}, GraphicsMagick.Percentage.GetInstance(percentageLow), GraphicsMagick.Percentage.GetInstance(percentageHigh), channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void RandomThreshold(Percentage percentageLow, Percentage percentageHigh)
		{
			try
			{
				_Instance.CallMethod("RandomThreshold", new Type[] {Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentageLow), GraphicsMagick.Percentage.GetInstance(percentageHigh));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(Stream stream, MagickReadSettings readSettings)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(Stream), Types.MagickReadSettings}, stream, GraphicsMagick.MagickReadSettings.GetInstance(readSettings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(Stream stream)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(Stream)}, stream);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(String fileName, MagickReadSettings readSettings)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(String), Types.MagickReadSettings}, fileName, GraphicsMagick.MagickReadSettings.GetInstance(readSettings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(String fileName, Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(String), typeof(Int32), typeof(Int32)}, fileName, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(String fileName)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(String)}, fileName);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(MagickColor color, Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {Types.MagickColor, typeof(Int32), typeof(Int32)}, GraphicsMagick.MagickColor.GetInstance(color), width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(FileInfo file, MagickReadSettings readSettings)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(FileInfo), Types.MagickReadSettings}, file, GraphicsMagick.MagickReadSettings.GetInstance(readSettings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(FileInfo file)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(FileInfo)}, file);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(Bitmap bitmap)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(Bitmap)}, bitmap);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(Byte[] data, MagickReadSettings readSettings)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(Byte[]), Types.MagickReadSettings}, data, GraphicsMagick.MagickReadSettings.GetInstance(readSettings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Read(Byte[] data)
		{
			try
			{
				_Instance.CallMethod("Read", new Type[] {typeof(Byte[])}, data);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void ReduceNoise(Int32 order)
		{
			try
			{
				_Instance.CallMethod("ReduceNoise", new Type[] {typeof(Int32)}, order);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void ReduceNoise()
		{
			try
			{
				_Instance.CallMethod("ReduceNoise");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void RemoveDefine(MagickFormat format, String name)
		{
			try
			{
				_Instance.CallMethod("RemoveDefine", new Type[] {Types.MagickFormat, typeof(String)}, format, name);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void RemoveProfile(String name)
		{
			try
			{
				_Instance.CallMethod("RemoveProfile", new Type[] {typeof(String)}, name);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void RePage()
		{
			try
			{
				_Instance.CallMethod("RePage");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Resize(Percentage percentageWidth, Percentage percentageHeight)
		{
			try
			{
				_Instance.CallMethod("Resize", new Type[] {Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentageWidth), GraphicsMagick.Percentage.GetInstance(percentageHeight));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Resize(Percentage percentage)
		{
			try
			{
				_Instance.CallMethod("Resize", new Type[] {Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentage));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Resize(MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("Resize", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Resize(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Resize", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Roll(Int32 xOffset, Int32 yOffset)
		{
			try
			{
				_Instance.CallMethod("Roll", new Type[] {typeof(Int32), typeof(Int32)}, xOffset, yOffset);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Rotate(Double degrees)
		{
			try
			{
				_Instance.CallMethod("Rotate", new Type[] {typeof(Double)}, degrees);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Sample(Percentage percentageWidth, Percentage percentageHeight)
		{
			try
			{
				_Instance.CallMethod("Sample", new Type[] {Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentageWidth), GraphicsMagick.Percentage.GetInstance(percentageHeight));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Sample(Percentage percentage)
		{
			try
			{
				_Instance.CallMethod("Sample", new Type[] {Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentage));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Sample(MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("Sample", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Sample(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Sample", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Scale(Percentage percentageWidth, Percentage percentageHeight)
		{
			try
			{
				_Instance.CallMethod("Scale", new Type[] {Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentageWidth), GraphicsMagick.Percentage.GetInstance(percentageHeight));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Scale(Percentage percentage)
		{
			try
			{
				_Instance.CallMethod("Scale", new Type[] {Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentage));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Scale(MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("Scale", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Scale(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Scale", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Segment(ColorSpace quantizeColorSpace, Double clusterThreshold, Double smoothingThreshold)
		{
			try
			{
				_Instance.CallMethod("Segment", new Type[] {Types.ColorSpace, typeof(Double), typeof(Double)}, quantizeColorSpace, clusterThreshold, smoothingThreshold);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Segment()
		{
			try
			{
				_Instance.CallMethod("Segment");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void SetAttribute(String name, String value)
		{
			try
			{
				_Instance.CallMethod("SetAttribute", new Type[] {typeof(String), typeof(String)}, name, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
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
		public void SetDefine(MagickFormat format, String name, Boolean flag)
		{
			try
			{
				_Instance.CallMethod("SetDefine", new Type[] {Types.MagickFormat, typeof(String), typeof(Boolean)}, format, name, flag);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Shade(Double azimuth, Double elevation, Boolean colorShading)
		{
			try
			{
				_Instance.CallMethod("Shade", new Type[] {typeof(Double), typeof(Double), typeof(Boolean)}, azimuth, elevation, colorShading);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Shade()
		{
			try
			{
				_Instance.CallMethod("Shade");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Sharpen(Double radius, Double sigma, Channels channels)
		{
			try
			{
				_Instance.CallMethod("Sharpen", new Type[] {typeof(Double), typeof(Double), Types.Channels}, radius, sigma, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Sharpen(Double radius, Double sigma)
		{
			try
			{
				_Instance.CallMethod("Sharpen", new Type[] {typeof(Double), typeof(Double)}, radius, sigma);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Sharpen(Channels channels)
		{
			try
			{
				_Instance.CallMethod("Sharpen", new Type[] {Types.Channels}, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Sharpen()
		{
			try
			{
				_Instance.CallMethod("Sharpen");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Shave(Int32 leftRight, Int32 topBottom)
		{
			try
			{
				_Instance.CallMethod("Shave", new Type[] {typeof(Int32), typeof(Int32)}, leftRight, topBottom);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Shear(Double xAngle, Double yAngle)
		{
			try
			{
				_Instance.CallMethod("Shear", new Type[] {typeof(Double), typeof(Double)}, xAngle, yAngle);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Solarize(Double factor)
		{
			try
			{
				_Instance.CallMethod("Solarize", new Type[] {typeof(Double)}, factor);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Solarize()
		{
			try
			{
				_Instance.CallMethod("Solarize");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Spread(Int32 amount)
		{
			try
			{
				_Instance.CallMethod("Spread", new Type[] {typeof(Int32)}, amount);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Spread()
		{
			try
			{
				_Instance.CallMethod("Spread");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Stegano(MagickImage watermark)
		{
			try
			{
				_Instance.CallMethod("Stegano", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(watermark));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Stereo(MagickImage rightImage)
		{
			try
			{
				_Instance.CallMethod("Stereo", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(rightImage));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Strip()
		{
			try
			{
				_Instance.CallMethod("Strip");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Swirl(Double degrees)
		{
			try
			{
				_Instance.CallMethod("Swirl", new Type[] {typeof(Double)}, degrees);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Texture(MagickImage image)
		{
			try
			{
				_Instance.CallMethod("Texture", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(image));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Threshold(Percentage percentage)
		{
			try
			{
				_Instance.CallMethod("Threshold", new Type[] {Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentage));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Thumbnail(Percentage percentageWidth, Percentage percentageHeight)
		{
			try
			{
				_Instance.CallMethod("Thumbnail", new Type[] {Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentageWidth), GraphicsMagick.Percentage.GetInstance(percentageHeight));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Thumbnail(Percentage percentage)
		{
			try
			{
				_Instance.CallMethod("Thumbnail", new Type[] {Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentage));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Thumbnail(MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("Thumbnail", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Thumbnail(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Thumbnail", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Tile(MagickImage image, CompositeOperator compose)
		{
			try
			{
				_Instance.CallMethod("Tile", new Type[] {Types.MagickImage, Types.CompositeOperator}, GraphicsMagick.MagickImage.GetInstance(image), compose);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public String ToBase64()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToBase64");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (String)result;
		}
		public Bitmap ToBitmap(ImageFormat imageFormat)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToBitmap", new Type[] {typeof(ImageFormat)}, imageFormat);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Bitmap)result;
		}
		public Bitmap ToBitmap()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToBitmap");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Bitmap)result;
		}
		public BitmapSource ToBitmapSource()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToBitmapSource");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (BitmapSource)result;
		}
		public Byte[] ToByteArray(MagickFormat format)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToByteArray", new Type[] {Types.MagickFormat}, format);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Byte[])result;
		}
		public Byte[] ToByteArray()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToByteArray");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Byte[])result;
		}
		public override String ToString()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("ToString");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (String)result;
		}
		public void Transform(MagickGeometry imageGeometry, MagickGeometry cropGeometry)
		{
			try
			{
				_Instance.CallMethod("Transform", new Type[] {Types.MagickGeometry, Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(imageGeometry), GraphicsMagick.MagickGeometry.GetInstance(cropGeometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Transform(MagickGeometry imageGeometry)
		{
			try
			{
				_Instance.CallMethod("Transform", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(imageGeometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void TransformOrigin(Double x, Double y)
		{
			try
			{
				_Instance.CallMethod("TransformOrigin", new Type[] {typeof(Double), typeof(Double)}, x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void TransformReset()
		{
			try
			{
				_Instance.CallMethod("TransformReset");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void TransformRotation(Double angle)
		{
			try
			{
				_Instance.CallMethod("TransformRotation", new Type[] {typeof(Double)}, angle);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void TransformScale(Double scaleX, Double scaleY)
		{
			try
			{
				_Instance.CallMethod("TransformScale", new Type[] {typeof(Double), typeof(Double)}, scaleX, scaleY);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void TransformSkewX(Double skewX)
		{
			try
			{
				_Instance.CallMethod("TransformSkewX", new Type[] {typeof(Double)}, skewX);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void TransformSkewY(Double skewY)
		{
			try
			{
				_Instance.CallMethod("TransformSkewY", new Type[] {typeof(Double)}, skewY);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Transparent(MagickColor color)
		{
			try
			{
				_Instance.CallMethod("Transparent", new Type[] {Types.MagickColor}, GraphicsMagick.MagickColor.GetInstance(color));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Trim()
		{
			try
			{
				_Instance.CallMethod("Trim");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Unsharpmask(Double radius, Double sigma, Double amount, Double threshold, Channels channels)
		{
			try
			{
				_Instance.CallMethod("Unsharpmask", new Type[] {typeof(Double), typeof(Double), typeof(Double), typeof(Double), Types.Channels}, radius, sigma, amount, threshold, channels);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Unsharpmask(Double radius, Double sigma, Double amount, Double threshold)
		{
			try
			{
				_Instance.CallMethod("Unsharpmask", new Type[] {typeof(Double), typeof(Double), typeof(Double), typeof(Double)}, radius, sigma, amount, threshold);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Wave(Double amplitude, Double length)
		{
			try
			{
				_Instance.CallMethod("Wave", new Type[] {typeof(Double), typeof(Double)}, amplitude, length);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Wave()
		{
			try
			{
				_Instance.CallMethod("Wave");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Write(String fileName)
		{
			try
			{
				_Instance.CallMethod("Write", new Type[] {typeof(String)}, fileName);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Write(Stream stream, MagickFormat format)
		{
			try
			{
				_Instance.CallMethod("Write", new Type[] {typeof(Stream), Types.MagickFormat}, stream, format);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Write(Stream stream)
		{
			try
			{
				_Instance.CallMethod("Write", new Type[] {typeof(Stream)}, stream);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Write(FileInfo file)
		{
			try
			{
				_Instance.CallMethod("Write", new Type[] {typeof(FileInfo)}, file);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Zoom(Percentage percentageWidth, Percentage percentageHeight)
		{
			try
			{
				_Instance.CallMethod("Zoom", new Type[] {Types.Percentage, Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentageWidth), GraphicsMagick.Percentage.GetInstance(percentageHeight));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Zoom(Percentage percentage)
		{
			try
			{
				_Instance.CallMethod("Zoom", new Type[] {Types.Percentage}, GraphicsMagick.Percentage.GetInstance(percentage));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Zoom(MagickGeometry geometry)
		{
			try
			{
				_Instance.CallMethod("Zoom", new Type[] {Types.MagickGeometry}, GraphicsMagick.MagickGeometry.GetInstance(geometry));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Zoom(Int32 width, Int32 height)
		{
			try
			{
				_Instance.CallMethod("Zoom", new Type[] {typeof(Int32), typeof(Int32)}, width, height);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
	}
}
