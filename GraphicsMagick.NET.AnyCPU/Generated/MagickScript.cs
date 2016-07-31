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
	public sealed class MagickScript
	{
		internal object _Instance;
		internal MagickScript(object instance)
		{
			_Instance = instance;
		}
		public static object GetInstance(MagickScript obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			return obj._Instance;
		}
		public static object GetInstance(object obj)
		{
			if (ReferenceEquals(obj, null))
				return null;
			MagickScript casted = obj as MagickScript;
			if (ReferenceEquals(casted, null))
				return obj;
			return casted._Instance;
		}
		public MagickScript(XElement xml)
			: this(AssemblyHelper.CreateInstance(Types.MagickScript, new Type[] {typeof(XElement)}, xml))
		{
		}
		public MagickScript(Stream stream)
			: this(AssemblyHelper.CreateInstance(Types.MagickScript, new Type[] {typeof(Stream)}, stream))
		{
		}
		public MagickScript(String fileName)
			: this(AssemblyHelper.CreateInstance(Types.MagickScript, new Type[] {typeof(String)}, fileName))
		{
		}
		public MagickScript(IXPathNavigable xml)
			: this(AssemblyHelper.CreateInstance(Types.MagickScript, new Type[] {typeof(IXPathNavigable)}, xml))
		{
		}
		private Delegate _ReadDelegate;
		private EventHandler<ScriptReadEventArgs> _Read;
		private object HandleReadEvent(object[] args)
		{
			if (_Read != null)
				_Read(this, new ScriptReadEventArgs(args[1]));
			return null;
		}
		public event EventHandler<ScriptReadEventArgs> Read
		{
			add
			{
				if (_Read == null)
				{
					EventInfo eventInfo = Types.MagickScript.GetEvent("Read", BindingFlags.Public | BindingFlags.Instance);
					if (_ReadDelegate == null)
						_ReadDelegate = eventInfo.EventHandlerType.BuildDynamicHandler(HandleReadEvent);
					eventInfo.GetAddMethod(true).Invoke(_Instance, new object[] { _ReadDelegate });
				}
				_Read += value;
			}
			remove
			{
				_Read -= value;
				if (_Read == null)
				{
					EventInfo eventInfo = Types.MagickScript.GetEvent("Read", BindingFlags.Public | BindingFlags.Instance);
					eventInfo.GetRemoveMethod(true).Invoke(_Instance, new object[] { _ReadDelegate });
				}
			}
		}
		private Delegate _WriteDelegate;
		private EventHandler<ScriptWriteEventArgs> _Write;
		private object HandleWriteEvent(object[] args)
		{
			if (_Write != null)
				_Write(this, new ScriptWriteEventArgs(args[1]));
			return null;
		}
		public event EventHandler<ScriptWriteEventArgs> Write
		{
			add
			{
				if (_Write == null)
				{
					EventInfo eventInfo = Types.MagickScript.GetEvent("Write", BindingFlags.Public | BindingFlags.Instance);
					if (_WriteDelegate == null)
						_WriteDelegate = eventInfo.EventHandlerType.BuildDynamicHandler(HandleWriteEvent);
					eventInfo.GetAddMethod(true).Invoke(_Instance, new object[] { _WriteDelegate });
				}
				_Write += value;
			}
			remove
			{
				_Write -= value;
				if (_Write == null)
				{
					EventInfo eventInfo = Types.MagickScript.GetEvent("Write", BindingFlags.Public | BindingFlags.Instance);
					eventInfo.GetRemoveMethod(true).Invoke(_Instance, new object[] { _WriteDelegate });
				}
			}
		}
		public ScriptVariables Variables
		{
			get
			{
				object result;
				try
				{
					result = _Instance.GetPropertyValue("Variables");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (result == null ? null : new ScriptVariables(result));
			}
		}
		public void Execute(MagickImage image)
		{
			try
			{
				_Instance.CallMethod("Execute", new Type[] {Types.MagickImage}, GraphicsMagick.MagickImage.GetInstance(image));
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public MagickImage Execute()
		{
			object result;
			try
			{
				result = _Instance.CallMethod("Execute");
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickImage(result));
		}
	}
}
