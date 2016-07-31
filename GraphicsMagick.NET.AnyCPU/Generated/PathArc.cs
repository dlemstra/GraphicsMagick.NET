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
	public sealed class PathArc: IDisposable
	{
		internal object _Instance;
		internal PathArc(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(PathArc obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			PathArc casted = obj as PathArc;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		internal static object CastIEnumerable(IEnumerable<PathArc> list)
		{
			if (ReferenceEquals(list, null))
				return null;
			Type listType = typeof(List<>).MakeGenericType(Types.PathArc);
			object result = listType.CreateInstance();
			foreach (PathArc item in list)
				result.CallMethod("Add", PathArc.GetInstance(item));
			return result;
		}
		public PathArc(Double x, Double y, Double radiusX, Double radiusY, Double rotationX, Boolean useLargeArc, Boolean useSweep)
			: this(AssemblyHelper.CreateInstance(Types.PathArc, new Type[] {typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Double), typeof(Boolean), typeof(Boolean)}, x, y, radiusX, radiusY, rotationX, useLargeArc, useSweep))
		{
		}
		public PathArc()
			: this(AssemblyHelper.CreateInstance(Types.PathArc))
		{
		}
		public Double RadiusX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("RadiusX");
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
					_Instance.SetPropertyValue("RadiusX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double RadiusY
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("RadiusY");
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
					_Instance.SetPropertyValue("RadiusY", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Double RotationX
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("RotationX");
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
					_Instance.SetPropertyValue("RotationX", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean UseLargeArc
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("UseLargeArc");
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
					_Instance.SetPropertyValue("UseLargeArc", value);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public Boolean UseSweep
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("UseSweep");
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
					_Instance.SetPropertyValue("UseSweep", value);
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
