//=================================================================================================
// Copyright 2014 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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
#include "MagickReadSettings.h"

using namespace System::Globalization;

namespace GraphicsMagick
{
	//==============================================================================================
	void MagickReadSettings::ApplyColorSpace(MagickLib::ImageInfo *imageInfo)
	{
		if (ColorSpace.HasValue)
			imageInfo->colorspace = (Magick::ColorspaceType)ColorSpace.Value;
	}
	//==============================================================================================
	void MagickReadSettings::ApplyDensity(MagickLib::ImageInfo *imageInfo)
	{
		if (Density == nullptr)
			return;

		if (imageInfo->density != (char*)NULL)
			MagickLib::MagickFree(imageInfo->density);

		const Magick::Geometry* geometry = Density->CreateGeometry();
		std::string geometryStr = *geometry;
		MagickLib::CloneString(&imageInfo->density, geometryStr.c_str());
		delete geometry;
	}
	//==============================================================================================
	void MagickReadSettings::ApplyDimensions(MagickLib::ImageInfo *imageInfo)
	{
		if (!Width.HasValue || !Height.HasValue)
			return;

		if (imageInfo->size != (char*)NULL)
			MagickLib::MagickFree(imageInfo->size);

		Magick::Geometry geometry = Magick::Geometry(Width.Value, Height.Value);
		std::string geometryStr = geometry;
		MagickLib::CloneString(&imageInfo->size, geometryStr.c_str());
	}
	//==============================================================================================
	void MagickReadSettings::ApplyFormat(MagickLib::ImageInfo *imageInfo)
	{
		if (!Format.HasValue)
			return;

		std::string name;
		Marshaller::Marshal(Enum::GetName(MagickFormat::typeid, Format.Value) + ":", name);
		MagickLib::MagickStrlCpy(imageInfo->filename, name.c_str(), MaxTextExtent - 1);
	}
	//==============================================================================================
	void MagickReadSettings::ApplyDefines(MagickLib::ImageInfo *imageInfo)
	{
		if (_Defines->Count == 0)
			return;

		for each (String^ key in _Defines->Keys)
		{
			array<String^>^ keyInfo = key->Split(':');

			std::string magick;
			Marshaller::Marshal(keyInfo[0], magick);
			std::string option;
			Marshaller::Marshal(keyInfo[1], option);
			std::string value;
			Marshaller::Marshal(_Defines[key], value);

			MagickLib::ExceptionInfo exceptionInfo;
			MagickLib::GetExceptionInfo(&exceptionInfo);
			(void) MagickLib::AddDefinition(imageInfo, magick.c_str(), option.c_str(), value.c_str(),&exceptionInfo);
			Magick::throwException(exceptionInfo);
			MagickLib::DestroyExceptionInfo(&exceptionInfo);
		}
	}
	//==============================================================================================
	void MagickReadSettings::Apply(Magick::Image *image)
	{
		Apply(image->imageInfo());
	}
	//==============================================================================================
	void MagickReadSettings::Apply(MagickLib::ImageInfo *imageInfo)
	{
		ApplyColorSpace(imageInfo);
		ApplyDensity(imageInfo);
		ApplyDimensions(imageInfo);
		ApplyFormat(imageInfo);
		ApplyDefines(imageInfo);
	}
	//==============================================================================================
	MagickReadSettings::MagickReadSettings()
	{
		_Defines = gcnew Dictionary<String^, String^>();
	}
	//==============================================================================================
	void MagickReadSettings::SetDefine(MagickFormat format, String^ name, String^ value)
	{
		Throw::IfNullOrEmpty("name", name);
		Throw::IfNull("value", value);

		_Defines[Enum::GetName(MagickFormat::typeid, format) + ":" + name] = value;
	}
	//==============================================================================================
}