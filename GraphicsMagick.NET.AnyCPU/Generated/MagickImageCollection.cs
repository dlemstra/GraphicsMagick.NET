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
	public sealed class MagickImageCollection: IList<MagickImage>, ICollection<MagickImage>, IEnumerable<MagickImage>, IEnumerable, IDisposable
	{
		internal object _Instance;
		internal MagickImageCollection(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(MagickImageCollection obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			MagickImageCollection casted = obj as MagickImageCollection;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public MagickImageCollection(Stream stream, MagickReadSettings readSettings)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageCollection, new Type[] {typeof(Stream), Types.MagickReadSettings}, stream, GraphicsMagick.MagickReadSettings.GetInstance(readSettings)))
		{
		}
		public MagickImageCollection(Stream stream)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageCollection, new Type[] {typeof(Stream)}, stream))
		{
		}
		public MagickImageCollection(String fileName, MagickReadSettings readSettings)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageCollection, new Type[] {typeof(String), Types.MagickReadSettings}, fileName, GraphicsMagick.MagickReadSettings.GetInstance(readSettings)))
		{
		}
		public MagickImageCollection(String fileName)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageCollection, new Type[] {typeof(String)}, fileName))
		{
		}
		public MagickImageCollection(IEnumerable<MagickImage> images)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageCollection, new Type[] {Types.IEnumerableMagickImage}, MagickImage.CastIEnumerable(images)))
		{
		}
		public MagickImageCollection(Byte[] data, MagickReadSettings readSettings)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageCollection, new Type[] {typeof(Byte[]), Types.MagickReadSettings}, data, GraphicsMagick.MagickReadSettings.GetInstance(readSettings)))
		{
		}
		public MagickImageCollection(Byte[] data)
			: this(AssemblyHelper.CreateInstance(Types.MagickImageCollection, new Type[] {typeof(Byte[])}, data))
		{
		}
		public MagickImageCollection()
			: this(AssemblyHelper.CreateInstance(Types.MagickImageCollection))
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
					EventInfo eventInfo = Types.MagickImageCollection.GetEvent("Warning", BindingFlags.Public | BindingFlags.Instance);
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
					EventInfo eventInfo = Types.MagickImageCollection.GetEvent("Warning", BindingFlags.Public | BindingFlags.Instance);
					eventInfo.GetRemoveMethod(true).Invoke(_Instance, new object[] { _WarningDelegate });
				}
			}
		}
		public static explicit operator Byte[](MagickImageCollection collection)
		{
			object result = Types.MagickImageCollection.CallMethod("op_Explicit", new Type[] {Types.MagickImageCollection}, GraphicsMagick.MagickImageCollection.GetInstance(collection));
			return (Byte[])result;
		}
		public Int32 Count
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Count");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
		}
		public Boolean IsReadOnly
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("IsReadOnly");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Boolean)result;
			}
		}
		public MagickImage this[Int32 index]
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetIndexer(new Type[] {typeof(Int32)}, index);
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
					_Instance.SetIndexer(new Type[] {typeof(Int32), Types.MagickImage}, index, GraphicsMagick.MagickImage.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public void Add(String fileName)
		{
			try
			{
				_Instance.CallMethod("Add", new Type[] {typeof(String)}, fileName);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Add(MagickImage item)
		{
			try
			{
				_Instance.CallMethod("Add", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(item));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddRange(Stream stream, MagickReadSettings readSettings)
		{
			try
			{
				_Instance.CallMethod("AddRange", new Type[] {typeof(Stream), Types.MagickReadSettings}, stream, GraphicsMagick.MagickReadSettings.GetInstance(readSettings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddRange(Stream stream)
		{
			try
			{
				_Instance.CallMethod("AddRange", new Type[] {typeof(Stream)}, stream);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddRange(String fileName, MagickReadSettings readSettings)
		{
			try
			{
				_Instance.CallMethod("AddRange", new Type[] {typeof(String), Types.MagickReadSettings}, fileName, GraphicsMagick.MagickReadSettings.GetInstance(readSettings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddRange(String fileName)
		{
			try
			{
				_Instance.CallMethod("AddRange", new Type[] {typeof(String)}, fileName);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddRange(MagickImageCollection images)
		{
			try
			{
				_Instance.CallMethod("AddRange", new Type[] {Types.MagickImageCollection}, GraphicsMagick.MagickImageCollection.GetInstance(images));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddRange(IEnumerable<MagickImage> images)
		{
			try
			{
				_Instance.CallMethod("AddRange", new Type[] {Types.IEnumerableMagickImage}, MagickImage.CastIEnumerable(images));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddRange(Byte[] data, MagickReadSettings readSettings)
		{
			try
			{
				_Instance.CallMethod("AddRange", new Type[] {typeof(Byte[]), Types.MagickReadSettings}, data, GraphicsMagick.MagickReadSettings.GetInstance(readSettings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void AddRange(Byte[] data)
		{
			try
			{
				_Instance.CallMethod("AddRange", new Type[] {typeof(Byte[])}, data);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public MagickImage AppendHorizontally()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("AppendHorizontally");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickImage(result));
		}
		public MagickImage AppendVertically()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("AppendVertically");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickImage(result));
		}
		public void Clear()
		{
			try
			{
				_Instance.CallMethod("Clear");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Coalesce()
		{
			try
			{
				_Instance.CallMethod("Coalesce");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public Boolean Contains(MagickImage item)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Contains", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(item));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Boolean)result;
		}
		public void CopyTo(MagickImage[] destination, Int32 arrayIndex)
		{
			object[] casted_destination = MagickImage.CastArray(destination);
			try
			{
				_Instance.CallMethod("CopyTo", new Type[] {Types.MagickImage.MakeArrayType(), typeof(Int32)}, casted_destination, arrayIndex);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			MagickImage.UpdateArray(destination, casted_destination);
		}
		public void Deconstruct()
		{
			try
			{
				_Instance.CallMethod("Deconstruct");
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
		public MagickImage Flatten()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Flatten");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickImage(result));
		}
		public IEnumerator<MagickImage> GetEnumerator()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetEnumerator");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return new EnumeratorWrapper<MagickImage>(result).GetEnumerator();
		}
		IEnumerator IEnumerable.GetEnumerator()
		{
			return GetEnumerator();
		}
		public Int32 IndexOf(MagickImage item)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("IndexOf", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(item));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Int32)result;
		}
		public void Insert(Int32 index, String fileName)
		{
			try
			{
				_Instance.CallMethod("Insert", new Type[] {typeof(Int32), typeof(String)}, index, fileName);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Insert(Int32 index, MagickImage item)
		{
			try
			{
				_Instance.CallMethod("Insert", new Type[] {typeof(Int32), Types.MagickImage}, index, GraphicsMagick.MagickImage.GetInstance(item));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Map(QuantizeSettings settings)
		{
			try
			{
				_Instance.CallMethod("Map", new Type[] {Types.QuantizeSettings}, GraphicsMagick.QuantizeSettings.GetInstance(settings));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void Map()
		{
			try
			{
				_Instance.CallMethod("Map");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public MagickImageCollection Morph(Int32 frames)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Morph", new Type[] {typeof(Int32)}, frames);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickImageCollection(result));
		}
		public MagickImage Mosaic()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Mosaic");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickImage(result));
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
		public Boolean Remove(MagickImage item)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Remove", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(item));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Boolean)result;
		}
		public void RemoveAt(Int32 index)
		{
			try
			{
				_Instance.CallMethod("RemoveAt", new Type[] {typeof(Int32)}, index);
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
		public void Reverse()
		{
			try
			{
				_Instance.CallMethod("Reverse");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
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
	}
}
