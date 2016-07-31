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
	public sealed class PathCurveto: IDisposable
	{
		internal object _Instance;
		internal PathCurveto(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(PathCurveto obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			PathCurveto casted = obj as PathCurveto;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		internal static object CastIEnumerable(IEnumerable<PathCurveto> list)
		{
			if (ReferenceEquals(list, null))
				return null;
			Type listType = typeof(List<>).MakeGenericType(Types.PathCurveto);
			object result = listType.CreateInstance();
			foreach (PathCurveto item in list)
				result.CallMethod("Add", PathCurveto.GetInstance(item));
			return result;
		}
		public PathCurveto(Double x, Double y, Double x1, Double y1, Double x2, Double y2)
			: this(AssemblyHelper.CreateInstance(Types.PathCurveto, new Type[] {typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Double)}, x, y, x1, y1, x2, y2))
		{
		}
		public PathCurveto()
			: this(AssemblyHelper.CreateInstance(Types.PathCurveto))
		{
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
		public Double X1
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("X1");
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
					_Instance.SetPropertyValue("X1", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double X2
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("X2");
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
					_Instance.SetPropertyValue("X2", value);
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
		public Double Y1
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Y1");
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
					_Instance.SetPropertyValue("Y1", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double Y2
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Y2");
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
					_Instance.SetPropertyValue("Y2", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
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
	}
}
