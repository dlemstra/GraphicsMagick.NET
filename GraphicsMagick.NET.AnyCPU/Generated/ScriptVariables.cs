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
	public sealed class ScriptVariables
	{
		internal object _Instance;
		internal ScriptVariables(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(ScriptVariables obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			ScriptVariables casted = obj as ScriptVariables;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public Object this[String name]
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetIndexer(new Type[] {typeof(String)}, name);
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (Object)result;
			}
			set
			{
				try
				{
					_Instance.SetIndexer(new Type[] {typeof(String), typeof(Object)}, name, GraphicsMagick.ScriptVariables.GetInstance(value));
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
			}
		}
		public IEnumerable<String> Names
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Names");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				IEnumerator enumerator = ((IEnumerable)result).GetEnumerator();
				while (enumerator.MoveNext())
					yield return (String)enumerator.Current;
			}
		}
		public Object Get(String name)
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Get", new Type[] {typeof(String)}, name);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (Object)result;
		}
		public void Set(String name, Object value)
		{
			try
			{
				_Instance.CallMethod("Set", new Type[] {typeof(String), typeof(Object)}, name, GraphicsMagick.ScriptVariables.GetInstance(value));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
	}
}
