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
	public abstract class DoubleMatrix
	{
		internal object _Instance;
		internal DoubleMatrix(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(DoubleMatrix obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			DoubleMatrix casted = obj as DoubleMatrix;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public Double this[Int32 x, Int32 y]
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetIndexer(new Type[] {typeof(Int32), typeof(Int32)}, x, y);
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
					_Instance.SetIndexer(new Type[] {typeof(Int32), typeof(Int32), typeof(Double)}, x, y, value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Int32 Order
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Order");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Int32)result;
			}
		}
		public Double GetValue(Int32 x, Int32 y)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("GetValue", new Type[] {typeof(Int32), typeof(Int32)}, x, y);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Double)result;
		}
		public void SetColumn(Int32 x, params Double[] values)
		{
			try
			{
				_Instance.CallMethod("SetColumn", new Type[] {typeof(Int32), typeof(Double[])}, x, values);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void SetRow(Int32 y, params Double[] values)
		{
			try
			{
				_Instance.CallMethod("SetRow", new Type[] {typeof(Int32), typeof(Double[])}, y, values);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public void SetValue(Int32 x, Int32 y, Double value)
		{
			try
			{
				_Instance.CallMethod("SetValue", new Type[] {typeof(Int32), typeof(Int32), typeof(Double)}, x, y, value);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
	}
}
