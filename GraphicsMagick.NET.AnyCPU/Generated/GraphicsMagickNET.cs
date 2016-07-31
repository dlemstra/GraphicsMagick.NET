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
	public static class GraphicsMagickNET
	{
		static GraphicsMagickNET()
		{
		}
		private static Delegate _LogDelegate;
		private static EventHandler<LogEventArgs> _Log;
		private static object HandleLogEvent(object[] args)
		{
			if (_Log != null)
				_Log(null, new LogEventArgs(args[1]));
			return null;
		}
		public static event EventHandler<LogEventArgs> Log
		{
			add
			{
				if (_Log == null)
				{
					EventInfo eventInfo = Types.GraphicsMagickNET.GetEvent("Log", BindingFlags.Public | BindingFlags.Static);
					if (_LogDelegate == null)
						_LogDelegate = eventInfo.EventHandlerType.BuildDynamicHandler(HandleLogEvent);
					eventInfo.GetAddMethod(true).Invoke(Types.GraphicsMagickNET, new object[] { _LogDelegate });
				}
				_Log += value;
			}
			remove
			{
				_Log -= value;
				if (_Log == null)
				{
					EventInfo eventInfo = Types.GraphicsMagickNET.GetEvent("Log", BindingFlags.Public | BindingFlags.Static);
					eventInfo.GetRemoveMethod(true).Invoke(Types.GraphicsMagickNET, new object[] { _LogDelegate });
				}
			}
		}
		public static IEnumerable<MagickFormatInfo> SupportedFormats
		{
			get
			{
				object result;
				try
				{
					result = Types.GraphicsMagickNET.GetPropertyValue("SupportedFormats");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				IEnumerator enumerator = ((IEnumerable)result).GetEnumerator();
				while (enumerator.MoveNext())
					yield return new MagickFormatInfo(enumerator.Current);
			}
		}
		public static String Version
		{
			get
			{
				object result;
				try
				{
					result = Types.GraphicsMagickNET.GetPropertyValue("Version");
				}
				catch (Exception ex)
				{
					throw ExceptionHelper.Create(ex);
				}
				return (String)result;
			}
		}
		public static MagickFormatInfo GetFormatInformation(MagickFormat format)
		{
			object result;
			try
			{
				result = Types.GraphicsMagickNET.CallMethod("GetFormatInformation", new Type[] {Types.MagickFormat}, format);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
			return (result == null ? null : new MagickFormatInfo(result));
		}
		public static void Initialize(String path)
		{
			try
			{
				Types.GraphicsMagickNET.CallMethod("Initialize", new Type[] {typeof(String)}, path);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public static void SetGhostscriptDirectory(String path)
		{
			try
			{
				Types.GraphicsMagickNET.CallMethod("SetGhostscriptDirectory", new Type[] {typeof(String)}, path);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public static void SetLogEvents(ExceptionTypes events)
		{
			try
			{
				Types.GraphicsMagickNET.CallMethod("SetLogEvents", new Type[] {Types.ExceptionTypes}, events);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
		public static void SetTempDirectory(String path)
		{
			try
			{
				Types.GraphicsMagickNET.CallMethod("SetTempDirectory", new Type[] {typeof(String)}, path);
			}
			catch (Exception ex)
			{
				throw ExceptionHelper.Create(ex);
			}
		}
	}
}
