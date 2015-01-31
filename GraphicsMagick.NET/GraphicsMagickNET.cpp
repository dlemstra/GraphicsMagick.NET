//=================================================================================================
// Copyright 2014-2015 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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
#include "Stdafx.h"
#include "GraphicsMagickNET.h"
#include "Helpers\EnumHelper.h"
#include "Helpers\FileHelper.h"

using namespace System::IO;
using namespace System::Security;

namespace GraphicsMagick
{
	//==============================================================================================
	String^ GraphicsMagickNET::CheckDirectory(String^ path)
	{
		Throw::IfNullOrEmpty("path", path);

		path = FileHelper::CheckForBaseDirectory(path);
		path = Path::GetFullPath(path);
		Throw::IfFalse("path", Directory::Exists(path), "Unable to find directory: {0}", path);
		return path;
	}
	//==============================================================================================
	void GraphicsMagickNET::CheckImageMagickFiles(String^ path)
	{
		for each (String^ graphicsMagickFile in _GraphicsMagickFiles)
		{
			String^ fileName = path + "\\" + graphicsMagickFile;
			Throw::IfFalse("path", File::Exists(fileName), "Unable to find file: {0}", fileName);
		}
	}
	//==============================================================================================
	void GraphicsMagickNET::OnLog(const Magick::ExceptionType type, const char* text)
	{
		if (text == NULL)
			return;

		if (_LogEvent == nullptr)
			return;

		std::string message=std::string(text);
		_LogEvent->Invoke(nullptr, gcnew LogEventArgs((ExceptionTypes)type, Marshaller::Marshal(message)));
	}
	//==============================================================================================
	void GraphicsMagickNET::SetEnv(const char* name, String^ value)
	{
		std::string val;
		_putenv_s(name, Marshaller::Marshal(value, val).c_str());
	}
	//==============================================================================================
	void GraphicsMagickNET::Log::add(EventHandler<LogEventArgs^>^ handler)
	{
		_LogEvent += handler;

		if (_LogDelegate != nullptr)
			return;

		_LogDelegate = gcnew MagickLogFuncDelegate(&OnLog);
		MagickLib::SetLogMethod((MagickLib::LogMethod)Marshal::GetFunctionPointerForDelegate(_LogDelegate).ToPointer());
	}
	//==============================================================================================
	void GraphicsMagickNET::Log::remove(EventHandler<LogEventArgs^>^ handler)
	{
		_LogEvent -= handler;

		if (_LogEvent != nullptr)
			return;

		MagickLib::SetLogMethod((MagickLib::LogMethod)NULL);
		_LogDelegate = nullptr;
	}
	//==============================================================================================
	IEnumerable<MagickFormatInfo^>^ GraphicsMagickNET::SupportedFormats::get()
	{
		return MagickFormatInfo::All;
	}
	//==============================================================================================
	String^ GraphicsMagickNET::Version::get()
	{
		Object^ title = (GraphicsMagickNET::typeid)->Assembly->GetCustomAttributes(AssemblyTitleAttribute::typeid, false)[0];
		Object^ version = (GraphicsMagickNET::typeid)->Assembly->GetCustomAttributes(AssemblyFileVersionAttribute::typeid, false)[0];
		return ((AssemblyTitleAttribute^)title)->Title + " " + ((AssemblyFileVersionAttribute^)version)->Version;
	}
	//==============================================================================================
	MagickFormatInfo^ GraphicsMagickNET::GetFormatInformation(MagickFormat format)
	{
		for each (MagickFormatInfo^ formatInfo in SupportedFormats)
		{
			if (formatInfo->Format == format)
				return formatInfo;
		}

		return nullptr;
	}
	//==============================================================================================
	void GraphicsMagickNET::Initialize(String^ path)
	{
		path = CheckDirectory(path);

		CheckImageMagickFiles(path);

		SetEnv("MAGICK_CONFIGURE_PATH", path);
	}
	//==============================================================================================
	void GraphicsMagickNET::SetLogEvents(ExceptionTypes events)
	{
		String^ eventFlags = nullptr;

		if (events == ExceptionTypes::All)
		{
			eventFlags = "All";
		}
		else
		{
			List<String^>^ flags = gcnew List<String^>();
			for each(ExceptionTypes flag in EnumHelper::GetFlags(events))
			{
				if (flag != ExceptionTypes::All)
					flags->Add(Enum::GetName(ExceptionTypes::typeid, flag));
			}

			eventFlags = String::Join(",", flags->ToArray());
		}

		std::string logEvents;
		Marshaller::Marshal(eventFlags, logEvents);
		MagickLib::SetLogEventMask(logEvents.c_str());
	}
	//==============================================================================================
	void GraphicsMagickNET::SetTempDirectory(String^ path)
	{
		SetEnv("MAGICK_TMPDIR", CheckDirectory(path));
	}
	//==============================================================================================
	void GraphicsMagickNET::SetGhostscriptDirectory(String^ path)
	{
		SetEnv("MAGICK_GHOSTSCRIPT_PATH", CheckDirectory(path));
	}
	//==============================================================================================
}