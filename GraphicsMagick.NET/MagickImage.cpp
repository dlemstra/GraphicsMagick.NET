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
#include "Helpers\FileHelper.h"
#include "MagickImage.h"
#include "MagickImageCollection.h"
#include "Quantum.h"

using namespace System::Globalization;

namespace GraphicsMagick
{
	//==============================================================================================
	Magick::Image* MagickImage::CreateImage()
	{
		Magick::Image* image = new Magick::Image();
		return image;
	} 
	//==============================================================================================
	template<class TImageProfile>
	TImageProfile^ MagickImage::CreateProfile(String^ name)
	{
		Throw::IfNullOrEmpty("name", name);

		try
		{
			std::string profileName;
			Marshaller::Marshal(name, profileName);
			Magick::Blob blob = Value->profile(profileName);
			array<Byte>^ data = Marshaller::Marshal(&blob);
			if (data == nullptr)
				return nullptr;

			TImageProfile^ result = gcnew TImageProfile();
			result->Initialize(name, data);
			result->Initialize(this);
			return result;
		}
		catch(Magick::ErrorCoder)
		{
			return nullptr;
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	unsigned char* MagickImage::ExportPixels(String^ map)
	{
		void* result = malloc(map->Length * Width * Height * sizeof(unsigned char*));

		std::string magickMap;
		Marshaller::Marshal(map, magickMap);

		MagickLib::ExceptionInfo exceptionInfo;
		MagickLib::GetExceptionInfo(&exceptionInfo);

		(void) DispatchImage(Value->image(), 0, 0, Width, Height, magickMap.c_str(),
			(Magick::StorageType)StorageType::Char, result, &exceptionInfo);

		Magick::throwException(exceptionInfo);
		MagickLib::DestroyExceptionInfo(&exceptionInfo);

		return (unsigned char*)result;
	}
	//==============================================================================================
	String^ MagickImage::FormatedFileSize()
	{
		Decimal fileSize = FileSize;

		String^ suffix = "";
		if (fileSize > 1073741824)
		{
			fileSize /= 1073741824;
			suffix = "GB";
		}
		else if (fileSize > 1048576)
		{
			fileSize /= 1048576;
			suffix = "MB";
		}
		else if (fileSize > 1024)
		{
			fileSize /= 1024;
			suffix = "kB";
		}

		return String::Format(CultureInfo::InvariantCulture, "{0:N2}{1}", fileSize, suffix);
	}
	//==============================================================================================
	MagickFormat MagickImage::GetCoderFormat(MagickFormat format)
	{
		switch(format)
		{
		case MagickFormat::Jpg:
			return MagickFormat::Jpeg;
		case MagickFormat::Tif:
			return MagickFormat::Tiff;
		default:
			return format;
		}
	}
	//==============================================================================================
	void MagickImage::HandleException(const Magick::Exception& exception)
	{
		HandleException(MagickException::Create(exception));
	}
	//==============================================================================================
	void MagickImage::HandleException(MagickException^ exception)
	{
		if (exception == nullptr)
			return;

		MagickWarningException^ warning = dynamic_cast<MagickWarningException^>(exception);
		if (warning == nullptr)
			throw exception;

		if (_WarningEvent != nullptr)
			_WarningEvent->Invoke(this, gcnew WarningEventArgs(warning));
	}
	//==============================================================================================
	bool MagickImage::IsSupportedImageFormat(ImageFormat^ format)
	{
		return
			format->Guid.Equals(ImageFormat::Bmp->Guid) ||
			format->Guid.Equals(ImageFormat::Gif->Guid) ||
			format->Guid.Equals(ImageFormat::Icon->Guid) ||
			format->Guid.Equals(ImageFormat::Jpeg->Guid) ||
			format->Guid.Equals(ImageFormat::Png->Guid) ||
			format->Guid.Equals(ImageFormat::Tiff->Guid);
	}
	//==============================================================================================
	void MagickImage::RaiseOrLower(int size, bool raiseFlag)
	{
		const Magick::Geometry* geometry = new Magick::Geometry(size, size);

		try
		{
			Value->raise(*geometry, raiseFlag);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometry;
		}
	}
	//==============================================================================================
	void MagickImage::RandomThreshold(Magick::Quantum low, Magick::Quantum high, bool isPercentage)
	{
		Magick::Geometry* geometry = new Magick::Geometry((size_t)low, (size_t)high);
		geometry->percent(isPercentage);

		try
		{
			Value->randomThreshold(*geometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometry;
		}
	}
	//==============================================================================================
	void MagickImage::RandomThreshold(Magick::Quantum low, Magick::Quantum high, Channels channels, bool isPercentage)
	{
		Magick::Geometry* geometry = new Magick::Geometry((size_t)low, (size_t)high);
		geometry->percent(isPercentage);

		try
		{
			Value->randomThresholdChannel(*geometry, (Magick::ChannelType)channels);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometry;
		}
	}
	//==============================================================================================
	void MagickImage::SetFormat(ImageFormat^ format)
	{
		if (format == ImageFormat::Bmp)
			Format = MagickFormat::Bmp;
		else if (format == ImageFormat::Gif)
			Format = MagickFormat::Gif;
		else if (format == ImageFormat::Jpeg)
			Format = MagickFormat::Jpeg;
		else if (format == ImageFormat::Png)
			Format = MagickFormat::Png;
		else if (format == ImageFormat::Tiff)
			Format = MagickFormat::Tiff;
		else
			throw gcnew NotSupportedException("Unsupported image format: " + format->ToString());
	}
	//==============================================================================================
	void MagickImage::SetProfile(String^ name, Magick::Blob& blob)
	{
		Throw::IfNullOrEmpty("name", name);

		try
		{
			std::string profileName;
			Marshaller::Marshal(name, profileName);

			Value->profile(profileName, blob);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	MagickImage::MagickImage(const Magick::Image& image)
	{
		Value = new Magick::Image(image);
	}
	//==============================================================================================
	void MagickImage::Apply(QuantizeSettings^ settings)
	{
		Value->quantizeColors(settings->Colors);
		Value->quantizeColorSpace((Magick::ColorspaceType)settings->ColorSpace);
		Value->quantizeDither(settings->Dither);
		Value->quantizeTreeDepth(settings->TreeDepth);
	}
	//==============================================================================================
	const Magick::Image& MagickImage::ReuseValue()
	{
		return *Value;
	}
	//==============================================================================================
	MagickImage::MagickImage()
	{
		Value = CreateImage();
	}
	//==============================================================================================
	MagickImage::MagickImage(array<Byte>^ data)
	{
		Value = CreateImage();
		this->Read(data);
	}
	//==============================================================================================
	MagickImage::MagickImage(array<Byte>^ data, MagickReadSettings^ readSettings)
	{
		Value = CreateImage();
		this->Read(data, readSettings);
	}
	//==============================================================================================
	MagickImage::MagickImage(Bitmap^ bitmap)
	{
		Value = CreateImage();
		this->Read(bitmap);
	}
	//==============================================================================================
	MagickImage::MagickImage(FileInfo^ file)
	{
		Value = CreateImage();
		this->Read(file);
	}
	//==============================================================================================
	MagickImage::MagickImage(FileInfo^ file, MagickReadSettings^ readSettings)
	{
		Value = CreateImage();
		this->Read(file, readSettings);
	}
	//==============================================================================================
	MagickImage::MagickImage(MagickColor^ color, int width, int height)
	{

		Value = CreateImage();
		this->Read(color, width, height);
	}
	//==============================================================================================
	MagickImage::MagickImage(MagickImage^ image)
	{
		Throw::IfNull("image", image);

		Value = new Magick::Image(*image->Value);
	}
	//==============================================================================================
	MagickImage::MagickImage(String^ fileName)
	{
		Value = new Magick::Image();
		this->Read(fileName);
	}
	//==============================================================================================
	MagickImage::MagickImage(String^ fileName, int width, int height)
	{
		Value = new Magick::Image();
		this->Read(fileName, width, height);
	} 
	//==============================================================================================
	MagickImage::MagickImage(String^ fileName, MagickReadSettings^ readSettings)
	{
		Value = new Magick::Image();
		this->Read(fileName, readSettings);
	}
	//==============================================================================================
	MagickImage::MagickImage(Stream^ stream)
	{
		Value = new Magick::Image();
		this->Read(stream);
	}
	//==============================================================================================
	MagickImage::MagickImage(Stream^ stream, MagickReadSettings^ readSettings)
	{
		Value = new Magick::Image();
		this->Read(stream, readSettings);
	}
	//==============================================================================================
	bool MagickImage::Adjoin::get()
	{
		return Value->adjoin();
	}
	//==============================================================================================
	void MagickImage::Adjoin::set(bool value)
	{
		Value->adjoin(value);
	}
	//==============================================================================================
	int MagickImage::AnimationDelay::get()
	{
		return Convert::ToInt32(Value->animationDelay());
	}
	//==============================================================================================
	void MagickImage::AnimationDelay::set(int value)
	{
		Value->animationDelay(value);
	}
	//==============================================================================================
	int MagickImage::AnimationIterations::get()
	{
		return Convert::ToInt32(Value->animationIterations());
	}
	//==============================================================================================
	void MagickImage::AnimationIterations::set(int value)
	{
		Value->animationIterations(value);
	}
	//==============================================================================================
	bool MagickImage::AntiAlias::get()
	{
		return Value->antiAlias();
	}
	//==============================================================================================
	void MagickImage::AntiAlias::set(bool value)
	{
		Value->antiAlias(value);
	}
	//==============================================================================================
	MagickColor^ MagickImage::BackgroundColor::get()
	{
		return gcnew MagickColor(Value->backgroundColor());
	}
	//==============================================================================================
	void MagickImage::BackgroundColor::set(MagickColor^ value)
	{
		const Magick::Color* color = ReferenceEquals(value, nullptr) ? new Magick::Color() : value->CreateColor();
		Value->backgroundColor(*color);
		delete color;
	}
	//==============================================================================================
	int MagickImage::BaseHeight::get()
	{
		return Convert::ToInt32(Value->baseRows());
	}
	//==============================================================================================
	int MagickImage::BaseWidth::get()
	{
		return Convert::ToInt32(Value->baseColumns());
	}
	//==============================================================================================
	MagickGeometry^ MagickImage::BoundingBox::get()
	{
		try
		{
			return gcnew MagickGeometry(Value->boundingBox());
		}
		catch(Magick::WarningOption)
		{
			return nullptr;
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	MagickColor^ MagickImage::BorderColor::get()
	{
		return gcnew MagickColor(Value->borderColor());
	}
	//==============================================================================================
	void MagickImage::BorderColor::set(MagickColor^ value)
	{
		const Magick::Color* color = ReferenceEquals(value, nullptr) ? new Magick::Color() : value->CreateColor();
		Value->borderColor(*color);
		delete color;
	}
	//==============================================================================================
	MagickColor^ MagickImage::BoxColor::get()
	{
		return gcnew MagickColor(Value->boxColor());
	}
	//==============================================================================================
	void MagickImage::BoxColor::set(MagickColor^ value)
	{
		const Magick::Color* color = ReferenceEquals(value, nullptr) ? new Magick::Color() : value->CreateColor();
		Value->boxColor(*color);
		delete color;
	}
	//==============================================================================================
	ClassType MagickImage::ClassType::get()
	{
		return (GraphicsMagick::ClassType)Value->classType();
	}
	//==============================================================================================
	void MagickImage::ClassType::set(GraphicsMagick::ClassType value)
	{
		return Value->classType((Magick::ClassType)value);
	}
	//==============================================================================================
	MagickImage^ MagickImage::ClipMask::get()
	{
		Magick::Image clipMask = Value->clipMask();
		if (!clipMask.isValid())
			return nullptr;

		return gcnew MagickImage(clipMask);
	}
	//==============================================================================================
	void MagickImage::ClipMask::set(MagickImage^ value)
	{
		if (value == nullptr)
		{
			Magick::Image* image = new Magick::Image();
			Value->clipMask(*image);
			delete image;
		}
		else
		{
			Value->clipMask(*value->Value);
		}
	}
	//==============================================================================================
	Percentage MagickImage::ColorFuzz::get()
	{
		return Percentage::FromQuantum(Value->colorFuzz());
	}
	//==============================================================================================
	void MagickImage::ColorFuzz::set(Percentage value)
	{
		Value->colorFuzz(value.ToQuantum());
	}
	//==============================================================================================
	int MagickImage::ColorMapSize::get()
	{
		int colorMapSize = -1;
		try
		{
			colorMapSize = Convert::ToInt32(Value->colorMapSize());
		}
		catch(Magick::ErrorOption)
		{
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}

		return colorMapSize;
	}
	//==============================================================================================
	void MagickImage::ColorMapSize::set(int value)
	{
		Value->colorMapSize(value);
	}
	//==============================================================================================
	ColorSpace MagickImage::ColorSpace::get()
	{
		return (GraphicsMagick::ColorSpace)Value->colorSpace();
	}
	//==============================================================================================
	void MagickImage::ColorSpace::set(GraphicsMagick::ColorSpace value)
	{
		try
		{
			Value->colorSpace((Magick::ColorspaceType)value);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	ColorType MagickImage::ColorType::get()
	{
		return (GraphicsMagick::ColorType)Value->type();
	}
	//==============================================================================================
	void MagickImage::ColorType::set(GraphicsMagick::ColorType value)
	{
		Value->type((Magick::ImageType)value);
	}
	//==============================================================================================
	String^ MagickImage::Comment::get()
	{
		return Marshaller::Marshal(Value->comment());
	}
	//==============================================================================================
	void MagickImage::Comment::set(String^ value)
	{
		std::string comment; 
		Value->comment(Marshaller::Marshal(value, comment));
	}
	//==============================================================================================
	CompositeOperator MagickImage::Compose::get()
	{
		return (CompositeOperator)Value->compose();
	}
	//==============================================================================================
	void MagickImage::Compose::set(CompositeOperator value)
	{
		Value->compose((Magick::CompositeOperator)value);
	}
	//==============================================================================================
	CompressionMethod MagickImage::CompressionMethod::get()
	{
		return (GraphicsMagick::CompressionMethod)Value->compressType();
	}
	//==============================================================================================
	void MagickImage::CompressionMethod::set(GraphicsMagick::CompressionMethod value)
	{
		Value->compressType((Magick::CompressionType)value);
	}
	//==============================================================================================
	bool MagickImage::Debug::get()
	{
		return Value->debug();
	}
	//==============================================================================================
	void MagickImage::Debug::set(bool value)
	{
		Value->debug(value);
	} 
	//==============================================================================================
	MagickGeometry^ MagickImage::Density::get()
	{
		return gcnew MagickGeometry(Value->density());
	}
	//==============================================================================================
	void MagickImage::Density::set(MagickGeometry^ value)
	{
		if (value == nullptr)
			return;

		const Magick::Geometry* geometry = value->CreateGeometry();
		Value->density(*geometry);
		delete geometry;

		if (ResolutionUnits == Resolution::Undefined)
			ResolutionUnits = Resolution::PixelsPerInch;
	}
	//==============================================================================================
	int MagickImage::Depth::get()
	{
		return Convert::ToInt32(Value->depth());
	}
	//==============================================================================================
	void MagickImage::Depth::set(int value)
	{
		Value->depth(value);
	}
	//==============================================================================================
	Endian MagickImage::Endian::get()
	{
		return (GraphicsMagick::Endian)Value->endian();
	}
	//==============================================================================================
	void MagickImage::Endian::set(GraphicsMagick::Endian value)
	{
		Value->endian((Magick::EndianType)value);
	}
	//==============================================================================================
	int MagickImage::FileSize::get()
	{
		return Value->fileSize();
	}
	//==============================================================================================
	String^ MagickImage::FileName::get()
	{
		return Marshaller::Marshal(Value->baseFilename());
	}
	//==============================================================================================
	MagickColor^ MagickImage::FillColor::get()
	{
		return gcnew MagickColor(Value->fillColor());
	}
	//==============================================================================================
	void MagickImage::FillColor::set(MagickColor^ value)
	{
		const Magick::Color* color = ReferenceEquals(value, nullptr) ? new Magick::Color() : value->CreateColor();
		Value->fillColor(*color);
		delete color;
	}
	//==============================================================================================
	MagickImage^ MagickImage::FillPattern::get()
	{
		Magick::Image fillPattern = Value->fillPattern();
		if (!fillPattern.isValid())
			return nullptr;

		return gcnew MagickImage(fillPattern);
	}
	//==============================================================================================
	void MagickImage::FillPattern::set(MagickImage^ value)
	{
		if (value == nullptr)
		{
			Magick::Image* image = new Magick::Image();
			Value->fillPattern(*image);
			delete image;
		}
		else
		{
			Value->fillPattern(*value->Value);
		}
	}
	//==============================================================================================
	FillRule MagickImage::FillRule::get()
	{
		return (GraphicsMagick::FillRule)Value->fillRule();
	}
	//==============================================================================================
	void MagickImage::FillRule::set(GraphicsMagick::FillRule value)
	{
		Value->fillRule((Magick::FillRule)value);
	}
	//==============================================================================================
	FilterType MagickImage::FilterType::get()
	{
		return (GraphicsMagick::FilterType)Value->filterType();
	}
	//==============================================================================================
	void MagickImage::FilterType::set(GraphicsMagick::FilterType value)
	{
		Value->filterType((Magick::FilterTypes)value);
	}
	//==============================================================================================
	String^ MagickImage::FlashPixView::get()
	{
		return Marshaller::Marshal(Value->view());
	}
	//==============================================================================================
	void MagickImage::FlashPixView::set(String^ value)
	{
		std::string view;
		Value->view(Marshaller::Marshal(value, view));
	}
	//==============================================================================================
	String^ MagickImage::Font::get()
	{
		return Marshaller::Marshal(Value->font());
	}
	//==============================================================================================
	void MagickImage::Font::set(String^ value)
	{
		std::string font;
		Value->font(Marshaller::Marshal(value, font));
	}
	//==============================================================================================
	double MagickImage::FontPointsize::get()
	{
		return Value->fontPointsize();
	}
	//==============================================================================================
	void MagickImage::FontPointsize::set(double value)
	{
		Value->fontPointsize(value);
	}
	//==============================================================================================
	MagickFormat MagickImage::Format::get()
	{
		return EnumHelper::Parse<MagickFormat>(Marshaller::Marshal(Value->magick()), MagickFormat::Unknown);
	}
	//==============================================================================================
	void MagickImage::Format::set(MagickFormat value)
	{
		if (value == MagickFormat::Unknown)
			return;

		std::string name;
		Marshaller::Marshal(Enum::GetName(MagickFormat::typeid, value), name);

		Value->magick(name);
	}
	//==============================================================================================
	MagickFormatInfo^ MagickImage::FormatInfo::get()
	{
		if (Format == MagickFormat::Unknown)
			return nullptr;

		for each(MagickFormatInfo^ info in MagickFormatInfo::All)
		{
			if (info->Format == Format)
				return info;
		}

		return nullptr;
	}
	//==============================================================================================
	GifDisposeMethod MagickImage::GifDisposeMethod::get()
	{
		return (GraphicsMagick::GifDisposeMethod)Value->gifDisposeMethod();
	}
	//==============================================================================================
	void MagickImage::GifDisposeMethod::set(GraphicsMagick::GifDisposeMethod value)
	{
		Value->gifDisposeMethod((int)value);
	}
	//==============================================================================================
	bool MagickImage::HasAlpha::get()
	{
		return Value->matte();
	}
	//==============================================================================================
	void MagickImage::HasAlpha::set(bool value)
	{
		Value->matte(value);
	}
	//==============================================================================================
	int MagickImage::Height::get()
	{
		return Convert::ToInt32(Value->size().height());
	}
	//==============================================================================================
	Interlace MagickImage::Interlace::get()
	{
		return (GraphicsMagick::Interlace)Value->interlaceType();
	}
	//==============================================================================================
	void MagickImage::Interlace::set(GraphicsMagick::Interlace value)
	{
		Value->interlaceType((Magick::InterlaceType)value);
	}
	//==============================================================================================
	String^ MagickImage::Label::get()
	{
		std::string label = Value->label();
		if (label.length() == 0)
			return nullptr;

		return Marshaller::Marshal(label);
	}
	//==============================================================================================
	void MagickImage::Label::set(String^ value)
	{
		if (value == nullptr)
			value = "";

		std::string label;
		Marshaller::Marshal(value, label);
		Value->label(label);
	}
	//==============================================================================================
	MagickColor^ MagickImage::MatteColor::get()
	{
		return gcnew MagickColor(Value->matteColor());
	}
	//==============================================================================================
	void MagickImage::MatteColor::set(MagickColor^ value)
	{
		const Magick::Color* color = ReferenceEquals(value, nullptr) ? new Magick::Color() : value->CreateColor();
		Value->matteColor(*color);
		delete color;
	}
	//==============================================================================================
	OrientationType MagickImage::Orientation::get()
	{
		return (OrientationType)Value->orientation();
	}
	//==============================================================================================
	void MagickImage::Orientation::set(OrientationType value)
	{
		Value->orientation((Magick::OrientationType)value);
	}
	//==============================================================================================
	MagickGeometry^ MagickImage::Page::get()
	{
		return gcnew MagickGeometry(Value->page());
	}
	//==============================================================================================
	void MagickImage::Page::set(MagickGeometry^ value)
	{
		Throw::IfNull("value", value);

		const Magick::Geometry* geometry = value->CreateGeometry();
		Value->page(*geometry);
		delete geometry;
	}
	//==============================================================================================
	int MagickImage::Quality::get()
	{
		return Convert::ToInt32(Value->quality());
	}
	//==============================================================================================
	void MagickImage::Quality::set(int value)
	{
		int quality = value < 1 ? 1 : value;
		quality = quality > 100 ? 100 : quality;

		Value->quality(quality);
	}
	//==============================================================================================
	Resolution MagickImage::ResolutionUnits::get()
	{
		return (Resolution)Value->resolutionUnits();
	}
	//==============================================================================================
	void MagickImage::ResolutionUnits::set(Resolution value)
	{
		return Value->resolutionUnits((Magick::ResolutionType)value);
	}
	//==============================================================================================
	double MagickImage::ResolutionX::get()
	{
		return Value->xResolution();
	}
	//==============================================================================================
	double MagickImage::ResolutionY::get()
	{
		return Value->yResolution();
	}
	//==============================================================================================
	String^ MagickImage::Signature::get()
	{
		try
		{
			return Marshaller::Marshal(Value->signature(true));
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
	}
	//==============================================================================================
	bool MagickImage::StrokeAntiAlias::get()
	{
		return Value->strokeAntiAlias();
	}
	//==============================================================================================
	void MagickImage::StrokeAntiAlias::set(bool value)
	{
		Value->strokeAntiAlias(value);
	}
	//==============================================================================================
	MagickColor^ MagickImage::StrokeColor::get()
	{
		return gcnew MagickColor(Value->strokeColor());
	}
	//==============================================================================================
	void MagickImage::StrokeColor::set(MagickColor^ value)
	{
		const Magick::Color* color = ReferenceEquals(value, nullptr) ? new Magick::Color() : value->CreateColor();
		Value->strokeColor(*color);
		delete color;
	}
	//==============================================================================================
	array<double>^ MagickImage::StrokeDashArray::get()
	{
		const double* strokeDashArray = Value->strokeDashArray();
		if (strokeDashArray == NULL)
			return nullptr;

		return Marshaller::Marshal(strokeDashArray);
	}
	//==============================================================================================
	void MagickImage::StrokeDashArray::set(array<double>^ value)
	{
		double* strokeDashArray = Marshaller::MarshalAndTerminate(value);
		Value->strokeDashArray(strokeDashArray);
		delete[] strokeDashArray;
	}
	//==============================================================================================
	double MagickImage::StrokeDashOffset::get()
	{
		return Value->strokeDashOffset();
	}
	//==============================================================================================
	void MagickImage::StrokeDashOffset::set(double value)
	{
		Value->strokeDashOffset(value);
	}
	//==============================================================================================
	LineCap MagickImage::StrokeLineCap::get()
	{
		return (LineCap)Value->strokeLineCap();
	}
	//==============================================================================================
	void MagickImage::StrokeLineCap::set(LineCap value)
	{
		Value->strokeLineCap((Magick::LineCap)value);
	}
	//==============================================================================================
	LineJoin MagickImage::StrokeLineJoin::get()
	{
		return (LineJoin)Value->strokeLineJoin();
	}
	//==============================================================================================
	void MagickImage::StrokeLineJoin::set(LineJoin value)
	{
		Value->strokeLineJoin((Magick::LineJoin)value);
	}
	//==============================================================================================
	int MagickImage::StrokeMiterLimit::get()
	{
		return Convert::ToInt32(Value->strokeMiterLimit());
	}
	//==============================================================================================
	void MagickImage::StrokeMiterLimit::set(int value)
	{
		Value->strokeMiterLimit(value);
	}
	//==============================================================================================
	MagickImage^ MagickImage::StrokePattern::get()
	{
		Magick::Image strokePattern = Value->strokePattern();
		if (!strokePattern.isValid())
			return nullptr;

		return gcnew MagickImage(strokePattern);
	}
	//==============================================================================================
	void MagickImage::StrokePattern::set(MagickImage^ value)
	{
		if (value == nullptr)
			Value->strokePattern(Magick::Image());
		else
			Value->strokePattern(*value->Value);
	}
	//==============================================================================================
	double MagickImage::StrokeWidth::get()
	{
		return Value->strokeWidth();
	}
	//==============================================================================================
	void MagickImage::StrokeWidth::set(double value)
	{
		Value->strokeWidth(value);
	}
	//==============================================================================================
	Encoding^ MagickImage::TextEncoding::get()
	{
		String^ encoding = Marshaller::Marshal(Value->textEncoding());

		if (String::IsNullOrEmpty(encoding))
			return nullptr;

		try
		{
			return Encoding::GetEncoding(encoding);
		}
		catch (ArgumentException^)
		{
			return nullptr;
		}
	}
	//==============================================================================================
	void MagickImage::TextEncoding::set(Encoding^ value)
	{
		String^ name = value != nullptr ? value->WebName : nullptr;

		std::string encoding;
		Value->textEncoding(Marshaller::Marshal(name, encoding));
	}
	//==============================================================================================
	String^ MagickImage::TileName::get()
	{
		return Marshaller::Marshal(Value->tileName());
	}
	//==============================================================================================
	void MagickImage::TileName::set(String^ value)
	{
		std::string tileName;
		Value->tileName(Marshaller::Marshal(value, tileName));
	}
	//==============================================================================================
	int MagickImage::TotalColors::get()
	{
		return Value->totalColors();
	}
	//==============================================================================================
	bool MagickImage::Verbose::get() 
	{
		return Value->verbose();
	}
	//==============================================================================================
	void MagickImage::Verbose::set(bool verbose) 
	{
		return Value->verbose(verbose);
	}
	//==============================================================================================
	int MagickImage::Width::get()
	{
		return Convert::ToInt32(Value->size().width());
	}
	//==============================================================================================
	bool MagickImage::operator == (MagickImage^ left, MagickImage^ right)
	{
		return Object::Equals(left, right);
	}
	//==============================================================================================
	bool MagickImage::operator != (MagickImage^ left, MagickImage^ right)
	{
		return !Object::Equals(left, right);
	}
	//==============================================================================================
	bool MagickImage::operator > (MagickImage^ left, MagickImage^ right)
	{
		if (ReferenceEquals(left, nullptr))
			return ReferenceEquals(right, nullptr);

		return left->CompareTo(right) == 1;
	}
	//==============================================================================================
	bool MagickImage::operator < (MagickImage^ left, MagickImage^ right)
	{
		if (ReferenceEquals(left, nullptr))
			return !ReferenceEquals(right, nullptr);

		return left->CompareTo(right) == -1;
	}
	//==============================================================================================
	bool MagickImage::operator >= (MagickImage^ left, MagickImage^ right)
	{
		if (ReferenceEquals(left, nullptr))
			return ReferenceEquals(right, nullptr);

		return left->CompareTo(right) >= 0;
	}
	//==============================================================================================
	bool MagickImage::operator <= (MagickImage^ left, MagickImage^ right)
	{
		if (ReferenceEquals(left, nullptr))
			return !ReferenceEquals(right, nullptr);

		return left->CompareTo(right) <= 0;
	}
	//==============================================================================================
	MagickImage::operator array<Byte>^ (MagickImage^ image)
	{
		Throw::IfNull("image", image);

		return image->ToByteArray();
	}
	//==============================================================================================
	void MagickImage::Warning::add(EventHandler<WarningEventArgs^>^ handler)
	{
		Value->quiet(false);
		_WarningEvent += handler;
	}
	//==============================================================================================
	void MagickImage::Warning::remove(EventHandler<WarningEventArgs^>^ handler)
	{
		_WarningEvent -= handler;
		if (_WarningEvent == nullptr)
			Value->quiet(true);
	}
	//==============================================================================================
	void MagickImage::AdaptiveThreshold(int width, int height)
	{
		AdaptiveThreshold(width, height, 0);
	}
	//==============================================================================================
	void MagickImage::AdaptiveThreshold(int width, int height, Magick::Quantum bias)
	{
		try
		{
			Value->adaptiveThreshold(width, height, bias);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::AdaptiveThreshold(int width, int height, Percentage bias)
	{
		AdaptiveThreshold(width, height, bias.ToQuantum());
	}
	//==============================================================================================
	void MagickImage::AddNoise(NoiseType noiseType)
	{
		try
		{
			Value->addNoise((Magick::NoiseType)noiseType);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::AddNoise(NoiseType noiseType, Channels channels)
	{
		try
		{
			Value->addNoiseChannel((Magick::ChannelType)channels, (Magick::NoiseType)noiseType);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::AddProfile(ImageProfile^ profile)
	{
		Throw::IfNull("profile", profile);

		try
		{
			Magick::Blob blob;
			Marshaller::Marshal(profile->GetData(), &blob);

			std::string profileName;
			Marshaller::Marshal(profile->Name, profileName);

			Value->profile(profileName, blob);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::AffineTransform(DrawableAffine^ drawableAffine)
	{
		Throw::IfNull("drawableAffine", drawableAffine);

		try
		{
			Value->affineTransform(*((Magick::DrawableAffine*)drawableAffine->InternalValue));
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Annotate(String^ text, MagickGeometry^ location)
	{
		Throw::IfNullOrEmpty("text", text);
		Throw::IfNull("location", location);

		std::string annotateText;
		Marshaller::Marshal(text, annotateText);
		const Magick::Geometry* geometry = location->CreateGeometry();

		try
		{
			Value->annotate(annotateText, *geometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometry;
		}
	}
	//==============================================================================================
	void MagickImage::Annotate(String^ text, MagickGeometry^ boundingArea, Gravity gravity)
	{
		Throw::IfNullOrEmpty("text", text);
		Throw::IfNull("boundingArea", boundingArea);

		std::string annotateText;
		Marshaller::Marshal(text, annotateText);
		const Magick::Geometry* geometry = boundingArea->CreateGeometry();

		try
		{
			Value->annotate(annotateText, *geometry, (Magick::GravityType)gravity);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometry;
		}
	}
	//==============================================================================================
	void MagickImage::Annotate(String^ text, MagickGeometry^ boundingArea, Gravity gravity, double degrees)
	{
		Throw::IfNullOrEmpty("text", text);
		Throw::IfNull("boundingArea", boundingArea);

		std::string annotateText;
		Marshaller::Marshal(text, annotateText);
		const Magick::Geometry* geometry = boundingArea->CreateGeometry();

		try
		{
			Value->annotate(annotateText, *geometry, (Magick::GravityType)gravity, degrees);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometry;
		}
	}
	//==============================================================================================
	void MagickImage::Annotate(String^ text, Gravity gravity)
	{
		Throw::IfNullOrEmpty("text", text);

		std::string annotateText;
		Marshaller::Marshal(text, annotateText);

		try
		{
			Value->annotate(annotateText, (Magick::GravityType)gravity);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Blur()
	{
		Blur(0.0, 1.0);
	}
	//==============================================================================================
	void MagickImage::Blur(Channels channels)
	{
		Blur(0.0, 1.0, channels);
	}
	//==============================================================================================
	void MagickImage::Blur(double radius, double sigma)
	{
		try
		{
			Value->blur(radius, sigma);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Blur(double radius, double sigma, Channels channels)
	{
		try
		{
			Value->blurChannel((Magick::ChannelType)channels, radius, sigma);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Border(int size)
	{
		Border(size, size);
	}
	//==============================================================================================
	void MagickImage::Border(int width, int height)
	{
		const Magick::Geometry* geometry = new Magick::Geometry(width, height);

		try
		{
			Value->border(*geometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometry;
		}
	}
	//==============================================================================================
	void MagickImage::CDL(String^ fileName)
	{
		String^ filePath = FileHelper::CheckForBaseDirectory(fileName);
		Throw::IfInvalidFileName(filePath);

		String^ cdlData = File::ReadAllText(filePath);

		std::string cdl;
		Marshaller::Marshal(cdlData, cdl);

		try
		{
			Value->cdl(cdl);
		}
		catch (Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Charcoal()
	{
		Charcoal(0.0, 1.0);
	}
	//==============================================================================================
	void MagickImage::Charcoal(double radius, double sigma)
	{
		try
		{
			Value->charcoal(radius, sigma);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Chop(int xOffset, int width, int yOffset, int height)
	{
		try
		{
			Magick::Geometry geometry = Magick::Geometry(xOffset, yOffset, width, height);
			Value->chop(geometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Chop(MagickGeometry^ geometry)
	{
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->chop(*magickGeometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::ChopHorizontal(int offset, int width)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(offset, 0, width, 0);
		Chop(geometry);
	}
	//==============================================================================================
	void MagickImage::ChopVertical(int offset, int height)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(0, offset, 0, height);
		Chop(geometry);
	}
	//==============================================================================================
	void MagickImage::ChromaBluePrimary(double x, double y)
	{
		try
		{
			Value->chromaBluePrimary(x, y);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::ChromaGreenPrimary(double x, double y)
	{
		try
		{
			Value->chromaGreenPrimary(x, y);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::ChromaRedPrimary(double x, double y)
	{
		try
		{
			Value->chromaRedPrimary(x, y);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::ChromaWhitePoint(double x, double y)
	{
		try
		{
			Value->chromaWhitePoint(x, y);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	MagickImage^ MagickImage::Clone()
	{
		return gcnew MagickImage(*Value);
	}
	//==============================================================================================
	void MagickImage::Colorize(MagickColor^ color, Percentage alpha)
	{
		Throw::IfNegative("alpha", alpha);

		Colorize(color, alpha, alpha, alpha);
	}
	//==============================================================================================
	void MagickImage::Colorize(MagickColor^ color, Percentage alphaRed, Percentage alphaGreen,
		Percentage alphaBlue)
	{
		Throw::IfNull("color", color);
		Throw::IfNegative("alphaRed", alphaRed);
		Throw::IfNegative("alphaGreen", alphaGreen);
		Throw::IfNegative("alphaBlue", alphaBlue);

		const Magick::Color* magickColor = color->CreateColor();

		try
		{
			Value->colorize((int)alphaRed, (int)alphaGreen, (int)alphaBlue, *magickColor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickColor;
		}
	}
	//==============================================================================================
	MagickColor^ MagickImage::ColorMap(int index)
	{
		try
		{
			return gcnew MagickColor(Value->colorMap(index));
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
	}
	//==============================================================================================
	void MagickImage::ColorMap(int index, MagickColor^ color)
	{
		Throw::IfNull("color", color);

		try
		{
			const Magick::Color* colorMap = color->CreateColor();
			Value->colorMap(index, *colorMap);
			delete colorMap;
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::ColorMatrix(GraphicsMagick::ColorMatrix^ matrix)
	{
		Throw::IfNull("matrix", matrix);

		double* colorMatrix = matrix->CreateArray();

		try
		{
			Value->colorMatrix(matrix->Order, colorMatrix);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete[] colorMatrix;
		}
	}
	//==============================================================================================
	int MagickImage::CompareTo(MagickImage^ other)
	{
		if (ReferenceEquals(other, nullptr))
			return 1;

		int left = (this->Width * this->Height);
		int right = (other->Width * other->Height);

		if (left == right)
			return 0;

		return left < right ? -1 : 1;
	}
	//==============================================================================================
	void MagickImage::Composite(MagickImage^ image, CompositeOperator compose)
	{
		Composite(image, 0, 0, compose);
	} 
	//==============================================================================================
	void MagickImage::Composite(MagickImage^ image, int x, int y)
	{
		Composite(image, x, y, CompositeOperator::In);
	}
	//==============================================================================================
	void MagickImage::Composite(MagickImage^ image, int x, int y, CompositeOperator compose)
	{
		Throw::IfNull("image", image);

		try
		{
			Value->composite(*(image->Value), x, y, (Magick::CompositeOperator)compose);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Composite(MagickImage^ image, MagickGeometry^ offset)
	{
		Composite(image, offset, CompositeOperator::In);
	}
	//==============================================================================================
	void MagickImage::Composite(MagickImage^ image, MagickGeometry^ geometry, CompositeOperator compose)
	{
		Throw::IfNull("image", image);
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->composite(*(image->Value), *magickGeometry, (Magick::CompositeOperator)compose);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Composite(MagickImage^ image, Gravity gravity)
	{
		Composite(image, gravity, CompositeOperator::In);
	}
	//==============================================================================================
	void MagickImage::Composite(MagickImage^ image, Gravity gravity, CompositeOperator compose)
	{
		Throw::IfNull("image", image);

		try
		{
			Value->composite(*(image->Value), (Magick::GravityType)gravity, (Magick::CompositeOperator)compose);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Contrast()
	{
		Contrast(true);
	}
	//===========================================================================================
	void MagickImage::Contrast(bool enhance)
	{
		try
		{
			Value->contrast(enhance ? 0 : 1);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Convolve(ConvolveMatrix^ convolveMatrix)
	{
		Throw::IfNull("convolveMatrix", convolveMatrix);

		double* kernel = convolveMatrix->CreateArray();

		try
		{
			Value->convolve(convolveMatrix->Order, kernel);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete[] kernel;
		}
	}
	//==============================================================================================
	void MagickImage::Crop(MagickGeometry^ geometry)
	{
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->crop(*magickGeometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Crop(int width, int height)
	{
		Crop(width, height, Gravity::Center);
	}
	//==============================================================================================
	void MagickImage::Crop(int width, int height, Gravity gravity)
	{
		int imageWidth = (int)Value->size().width();
		int imageHeight = (int)Value->size().height();

		int newWidth = width > imageWidth ? imageWidth : width;
		int newHeight = height > imageHeight ? imageHeight : height;

		if (newWidth == imageWidth && newHeight == imageHeight)
			return;

		MagickGeometry^ geometry = gcnew MagickGeometry(newWidth, newHeight);
		switch(gravity)
		{
		case Gravity::North:
			geometry->X = (imageWidth - newWidth) / 2;
			break;
		case Gravity::Northeast:
			geometry->X = imageWidth - newWidth;
			break;
		case Gravity::East:
			geometry->X = imageWidth - newWidth;
			geometry->Y = (imageHeight - newHeight) / 2;
			break;
		case Gravity::Southeast:
			geometry->X = imageWidth - newWidth;
			geometry->Y = imageHeight - newHeight;
			break;
		case Gravity::South:
			geometry->X = (imageWidth - newWidth) / 2;
			geometry->Y = imageHeight - newHeight;
			break;
		case Gravity::Southwest:
			geometry->Y = imageHeight - newHeight;
			break;
		case Gravity::West:
			geometry->Y = (imageHeight - newHeight) / 2;
			break;
		case Gravity::Northwest:
			break;
		case Gravity::Center:
			geometry->X = (imageWidth - newWidth) / 2;
			geometry->Y = (imageHeight - newHeight) / 2;
			break;
		}

		Crop(geometry);
	}
	//==============================================================================================
	void MagickImage::CycleColormap(int amount)
	{
		try
		{
			Value->cycleColormap(amount);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Despeckle()
	{
		try
		{
			Value->despeckle();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Draw(... array<Drawable^>^ drawables)
	{
		Draw((IEnumerable<Drawable^>^)drawables);
	}
	//==============================================================================================
	void MagickImage::Draw(IEnumerable<Drawable^>^ drawables)
	{
		Throw::IfNull("drawables", drawables);

		try
		{
			std::list<Magick::Drawable> drawList;
			IEnumerator<Drawable^>^ enumerator = drawables->GetEnumerator();
			while(enumerator->MoveNext())
			{
				drawList.push_back(*(enumerator->Current->InternalValue));
			}

			Value->draw(drawList);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Edge(double radius)
	{
		try
		{
			Value->edge(radius);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Emboss()
	{
		Emboss(0.0, 1.0);
	}
	//==============================================================================================
	void MagickImage::Emboss(double radius, double sigma)
	{
		try
		{
			Value->emboss(radius, sigma);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	MagickGeometry^ MagickImage::EncodingGeometry()
	{
		try
		{
			return gcnew MagickGeometry(Value->geometry());
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
	}
	//==============================================================================================
	void MagickImage::Enhance()
	{
		try
		{
			Value->enhance();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Equalize()
	{
		try
		{
			Value->equalize();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	bool MagickImage::Equals(Object^ obj)
	{
		if (ReferenceEquals(this, obj))
			return true;

		return Equals(dynamic_cast<MagickImage^>(obj));
	}
	//==============================================================================================
	bool MagickImage::Equals(MagickImage^ other)
	{
		if (ReferenceEquals(other, nullptr))
			return false;

		if (ReferenceEquals(this, other))
			return true;

		return (Magick::operator == (*Value, *other->Value)) ? true : false;
	}
	//==============================================================================================
	void MagickImage::Evaluate(Channels channels, QuantumOperator evaluateOperator, double value)
	{
		try
		{
			Value->quantumOperator((Magick::ChannelType)channels,
				(Magick::QuantumOperator)evaluateOperator, value);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Evaluate(Channels channels, MagickGeometry^ geometry,
		QuantumOperator evaluateOperator, double value)
	{
		Throw::IfNull("geometry", geometry);
		Throw::IfTrue("geometry", geometry->IsPercentage, "Percentage is not supported.");

		try
		{
			Value->quantumOperator(geometry->X, geometry->Y, geometry->Width, geometry->Height,
				(Magick::ChannelType)channels, (Magick::QuantumOperator)evaluateOperator,
				value);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Extent(int width, int height)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(width, height);
		Extent(geometry);
	}
	//==============================================================================================
	void MagickImage::Extent(int width, int height, MagickColor^ backgroundColor)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(width, height);
		Extent(geometry, backgroundColor);
	}
	//==============================================================================================
	void MagickImage::Extent(int width, int height, Gravity gravity)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(width, height);
		Extent(geometry, gravity);
	}
	//==============================================================================================
	void MagickImage::Extent(int width, int height, Gravity gravity, MagickColor^ backgroundColor)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(width, height);
		Extent(geometry, gravity, backgroundColor);
	}
	//==============================================================================================
	void MagickImage::Extent(MagickGeometry^ geometry)
	{
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->extent(*magickGeometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Extent(MagickGeometry^ geometry, MagickColor^ backgroundColor)
	{
		Throw::IfNull("geometry", geometry);
		Throw::IfNull("backgroundColor", backgroundColor);

		const Magick::Color* color = backgroundColor->CreateColor();
		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->extent(*magickGeometry, *color);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete color;
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Extent(MagickGeometry^ geometry, Gravity gravity)
	{
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->extent(*magickGeometry, (Magick::GravityType)gravity);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Extent(MagickGeometry^ geometry, Gravity gravity, MagickColor^ backgroundColor)
	{
		Throw::IfNull("geometry", geometry);
		Throw::IfNull("backgroundColor", backgroundColor);

		const Magick::Color* color = backgroundColor->CreateColor();
		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->extent(*magickGeometry, *color, (Magick::GravityType)gravity);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete color;
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Flip()
	{
		try
		{
			Value->flip();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::FloodFill(int alpha, int x, int y, PaintMethod paintMethod)
	{
		try
		{
			Value->floodFillOpacity(x, y, alpha, (Magick::PaintMethod)paintMethod);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::FloodFill(MagickColor^ color, int x, int y)
	{
		Throw::IfNull("color", color);

		const Magick::Color* fillColor = color->CreateColor();

		try
		{
			Value->floodFillColor(x, y, *fillColor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete fillColor;
		}
	}
	//==============================================================================================
	void MagickImage::FloodFill(MagickColor^ color, int x, int y, MagickColor^ borderColor)
	{
		Throw::IfNull("color", color);
		Throw::IfNull("borderColor", borderColor);

		const Magick::Color* fillColor = color->CreateColor();
		const Magick::Color* fillBorderColor = borderColor->CreateColor();

		try
		{
			Value->floodFillColor(x, y, *fillColor, *fillBorderColor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete fillColor;
			delete fillBorderColor;
		}
	}
	//==============================================================================================
	void MagickImage::FloodFill(MagickColor^ color, MagickGeometry^ geometry)
	{
		Throw::IfNull("color", color);
		Throw::IfNull("geometry", geometry);

		const Magick::Color* fillColor = color->CreateColor();
		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->floodFillColor(*magickGeometry, *fillColor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete fillColor;
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::FloodFill(MagickColor^ color, MagickGeometry^ geometry, MagickColor^ borderColor)
	{
		Throw::IfNull("color", color);
		Throw::IfNull("geometry", geometry);
		Throw::IfNull("borderColor", borderColor);

		const Magick::Color* fillColor = color->CreateColor();
		const Magick::Color* fillBorderColor = borderColor->CreateColor();
		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->floodFillColor(*magickGeometry, *fillColor, *fillBorderColor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete fillColor;
			delete fillBorderColor;
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::FloodFill(MagickImage^ image, int x, int y)
	{
		Throw::IfNull("image", image);

		try
		{
			Value->floodFillTexture(x, y, *image->Value);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::FloodFill(MagickImage^ image, int x, int y, MagickColor^ borderColor)
	{
		Throw::IfNull("image", image);
		Throw::IfNull("borderColor", borderColor);

		const Magick::Color* fillBorderColor = borderColor->CreateColor();

		try
		{
			Value->floodFillTexture(x, y, *image->Value, *fillBorderColor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete fillBorderColor;
		}
	}
	//==============================================================================================
	void MagickImage::FloodFill(MagickImage^ image, MagickGeometry^ geometry)
	{
		Throw::IfNull("image", image);
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->floodFillTexture(*magickGeometry, *image->Value);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::FloodFill(MagickImage^ image, MagickGeometry^ geometry, MagickColor^ borderColor)
	{
		Throw::IfNull("image", image);
		Throw::IfNull("geometry", geometry);
		Throw::IfNull("borderColor", borderColor);

		const Magick::Color* fillBorderColor = borderColor->CreateColor();
		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->floodFillTexture(*magickGeometry, *image->Value, *fillBorderColor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete fillBorderColor;
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Flop()
	{
		try
		{
			Value->flop();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	TypeMetric^ MagickImage::FontTypeMetrics(String^ text)
	{
		Throw::IfNullOrEmpty("text", text);

		Magick::TypeMetric* metric = new Magick::TypeMetric();

		try
		{
			std::string fontText;
			Marshaller::Marshal(text, fontText);

			Value->fontTypeMetrics(fontText, metric);

			return gcnew TypeMetric(metric);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
		finally
		{
			delete metric;
		}
	}
	//==============================================================================================
	String^ MagickImage::FormatExpression(String^ expression)
	{
		Throw::IfNullOrEmpty("expression", expression);

		try
		{
			std::string magickExpression;
			Marshaller::Marshal(expression, magickExpression);
			std::string result = Value->formatExpression(magickExpression);
			return Marshaller::Marshal(result);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
	}
	//==============================================================================================
	void MagickImage::Frame()
	{
		Frame(_DefaultFrameGeometry);
	}
	//==============================================================================================
	void MagickImage::Frame(MagickGeometry^ geometry)
	{
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->frame(*magickGeometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Frame(int width, int height)
	{
		Frame(gcnew MagickGeometry(width, height, 6, 6));
	}
	//==============================================================================================
	void MagickImage::Frame(int width, int height, int innerBevel, int outerBevel)
	{
		Frame(gcnew MagickGeometry(width, height, innerBevel, outerBevel));
	}
	//==============================================================================================
	MagickImage^ MagickImage::FromBase64(String^ value)
	{
		array<Byte>^ data = Convert::FromBase64String(value);
		return gcnew MagickImage(data);
	}
	//==============================================================================================
	double MagickImage::Gamma()
	{
		try
		{
			return Value->gamma();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return -1;
		}
	}
	//==============================================================================================
	void MagickImage::Gamma(double value)
	{
		Gamma(value, value, value);
	}
	//==============================================================================================
	void MagickImage::Gamma(double gammaRed, double gammaGreen, double gammaBlue)
	{
		try
		{
			Value->gamma(gammaRed, gammaGreen, gammaBlue);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::GaussianBlur(double width, double sigma)
	{
		try
		{
			Value->gaussianBlur(width, sigma);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::GaussianBlur(double width, double sigma, Channels channels)
	{
		try
		{
			Value->gaussianBlurChannel((Magick::ChannelType)channels, width, sigma);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	EightBimProfile^ MagickImage::Get8BimProfile()
	{
		return CreateProfile<EightBimProfile>("8bim");
	}
	//==============================================================================================
	String^ MagickImage::GetAttribute(String^ name)
	{
		Throw::IfNullOrEmpty("name", name);

		std::string attributeName;
		Marshaller::Marshal(name, attributeName);

		try
		{
			return Marshaller::Marshal(Value->attribute(attributeName));
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
	}
	//==============================================================================================
	ColorProfile^ MagickImage::GetColorProfile()
	{
		ColorProfile^ result = CreateProfile<ColorProfile>("icc");

		if (result == nullptr)
			result = CreateProfile<ColorProfile>("icm");

		return result;
	}
	//==============================================================================================
	String^ MagickImage::GetDefine(MagickFormat format, String^ name)
	{
		Throw::IfNullOrEmpty("name", name);

		std::string magick;
		Marshaller::Marshal(Enum::GetName(MagickFormat::typeid, GetCoderFormat(format)), magick);
		std::string optionName;
		Marshaller::Marshal(name, optionName);

		try
		{
			return Marshaller::Marshal(Value->defineValue(magick, optionName));
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
	}
	//==============================================================================================
	ExifProfile^ MagickImage::GetExifProfile()
	{
		return CreateProfile<ExifProfile>("exif");
	}
	//==============================================================================================
	int MagickImage::GetHashCode()
	{
		String^ signature = Marshaller::Marshal(Value->signature());

		return
			Value->rows().GetHashCode() ^
			Value->columns().GetHashCode() ^
			signature->GetHashCode();
	}
	//==============================================================================================
	IptcProfile^ MagickImage::GetIptcProfile()
	{
		return CreateProfile<IptcProfile>("iptc");
	}
	//==============================================================================================
	ImageProfile^ MagickImage::GetProfile(String^ name)
	{
		return CreateProfile<ImageProfile>(name);
	}
	//==============================================================================================
	PixelCollection^ MagickImage::GetReadOnlyPixels()
	{
		return gcnew PixelCollection(Value, 0, 0, Width, Height);
	}
	//==============================================================================================
	PixelCollection^ MagickImage::GetReadOnlyPixels(int x, int y, int width, int height)
	{
		return gcnew PixelCollection(Value, x, y, width, height);
	}
	//==============================================================================================
	WritablePixelCollection^ MagickImage::GetWritablePixels()
	{
		return gcnew WritablePixelCollection(Value, 0, 0, Width, Height);
	}
	//==============================================================================================
	WritablePixelCollection^ MagickImage::GetWritablePixels(int x, int y, int width, int height)
	{
		return gcnew WritablePixelCollection(Value, x, y, width, height);
	}
	//==============================================================================================
	XmpProfile^ MagickImage::GetXmpProfile()
	{
		return CreateProfile<XmpProfile>("xmp");
	}
	//==============================================================================================
	void MagickImage::HaldClut(MagickImage^ image)
	{
		Throw::IfNull("image", image);

		try
		{
			Value->haldClut(*image->Value);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	Dictionary<MagickColor^, int>^ MagickImage::Histogram()
	{
		std::list<std::pair<const Magick::Color,size_t>> *colors = new std::list<std::pair<const Magick::Color,size_t>>();

		try
		{
			colorHistogram(colors, *Value);

			Dictionary<MagickColor^, int>^ result = gcnew Dictionary<MagickColor^, int>();
			for (std::list<std::pair<const Magick::Color,size_t>>::iterator iter = colors->begin(), end = colors->end(); iter != end; ++iter)
			{
				result->Add(gcnew MagickColor(iter->first), (int)iter->second);
			}

			return result;
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
		finally
		{
			delete colors;
		}
	}
	//==============================================================================================
	void MagickImage::Implode(double factor)
	{
		try
		{
			Value->implode(factor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Level(Percentage blackPointPercentage, Percentage whitePointPercentage)
	{
		Level(blackPointPercentage.ToQuantum(), whitePointPercentage.ToQuantum());
	}
	//==============================================================================================
	void MagickImage::Level(Magick::Quantum blackPoint, Magick::Quantum whitePoint)
	{
		Level(blackPoint, whitePoint, 1.0);
	}
	//==============================================================================================
	void MagickImage::Level(Percentage blackPointPercentage, Percentage whitePointPercentage, Channels channels)
	{
		Level(blackPointPercentage.ToQuantum(), whitePointPercentage.ToQuantum(), channels);
	}
	//==============================================================================================
	void MagickImage::Level(Magick::Quantum blackPoint, Magick::Quantum whitePoint, Channels channels)
	{
		Level(blackPoint, whitePoint, 1.0, channels);
	}
	//==============================================================================================
	void MagickImage::Level(Percentage blackPointPercentage, Percentage whitePointPercentage, double midpoint)
	{
		Level(blackPointPercentage.ToQuantum(), whitePointPercentage.ToQuantum(), midpoint);
	}
	//==============================================================================================
	void MagickImage::Level(Magick::Quantum blackPoint, Magick::Quantum whitePoint, double midpoint)
	{
		try
		{
			Value->level(blackPoint, whitePoint, midpoint);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Level(Percentage blackPointPercentage, Percentage whitePointPercentage, double midpoint, Channels channels)
	{
		Level(blackPointPercentage.ToQuantum(), whitePointPercentage.ToQuantum(), midpoint, channels);
	}
	//==============================================================================================
	void MagickImage::Level(Magick::Quantum blackPoint, Magick::Quantum whitePoint, double midpoint, Channels channels)
	{
		try
		{
			Value->levelChannel((Magick::ChannelType)channels, blackPoint, whitePoint, midpoint);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Lower(int size)
	{
		RaiseOrLower(size, false);
	}
	//==============================================================================================
	void MagickImage::Magnify()
	{
		try
		{
			Value->magnify();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	MagickErrorInfo^ MagickImage::Map(MagickImage^ image)
	{
		return Map(image, gcnew QuantizeSettings());
	}
	//==============================================================================================
	MagickErrorInfo^ MagickImage::Map(MagickImage^ image, QuantizeSettings^ settings)
	{
		Throw::IfNull("image", image);
		Throw::IfNull("settings", settings);

		try
		{
			Apply(settings);
			Value->map(*image->Value, settings->Dither);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}

		return settings->MeasureErrors ? gcnew MagickErrorInfo(Value) : nullptr;
	}
	//==============================================================================================
	void MagickImage::MedianFilter()
	{
		MedianFilter(0.0);
	}
	//==============================================================================================
	void MagickImage::MedianFilter(double radius)
	{
		try
		{
			Value->medianFilter(radius);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Minify()
	{
		try
		{
			Value->minify();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Modulate(Percentage brightness)
	{
		Modulate(brightness, Percentage(100), Percentage(100));
	}
	//==============================================================================================
	void MagickImage::Modulate(Percentage brightness, Percentage saturation)
	{
		Modulate(brightness, saturation, Percentage(100));
	} 
	//==============================================================================================
	void MagickImage::Modulate(Percentage brightness, Percentage saturation, Percentage hue)
	{
		Throw::IfNegative("brightness", brightness);
		Throw::IfNegative("saturation", saturation);
		Throw::IfNegative("hue", hue);

		try
		{
			Value->modulate((double)brightness, (double)saturation, (double)hue);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::MotionBlur(double radius, double sigma, double angle)
	{
		try
		{
			Value->motionBlur(radius, sigma, angle);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Negate()
	{
		Negate(false);
	}
	//==============================================================================================
	void MagickImage::Negate(bool onlyGrayscale)
	{
		try
		{
			Value->negate(onlyGrayscale);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Normalize()
	{
		try
		{
			Value->normalize();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::OilPaint()
	{
		OilPaint(3.0);
	}
	//==============================================================================================
	void MagickImage::OilPaint(double radius)
	{
		try
		{
			Value->oilPaint(radius);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Opaque(MagickColor^ target, MagickColor^ fill)
	{
		Throw::IfNull("target", target);
		Throw::IfNull("fill", fill);

		const Magick::Color* opaque = target->CreateColor();
		const Magick::Color* pen = fill->CreateColor();

		try
		{
			Value->opaque(*opaque, *pen);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete opaque;
			delete pen;
		}
	}
	//==============================================================================================
	void MagickImage::Ping(array<Byte>^ data)
	{
		MagickReadSettings^ readSettings = gcnew MagickReadSettings();
		readSettings->Ping = true;
		return Read(data, readSettings);
	}
	//==============================================================================================
	void MagickImage::Ping(String^ fileName)
	{
		MagickReadSettings^ readSettings = gcnew MagickReadSettings();
		readSettings->Ping = true;
		return Read(fileName, readSettings);
	}
	//==============================================================================================
	void MagickImage::Ping(Stream^ stream)
	{
		MagickReadSettings^ readSettings = gcnew MagickReadSettings();
		readSettings->Ping = true;
		return Read(stream, readSettings);
	}
	//==============================================================================================
	void MagickImage::PreserveColorType()
	{
		ColorType = ColorType;
	}
	//==============================================================================================
	MagickErrorInfo^ MagickImage::Quantize(QuantizeSettings^ settings)
	{
		Throw::IfNull("settings", settings);

		try
		{
			Apply(settings);
			Value->quantize(settings->MeasureErrors);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}

		return settings->MeasureErrors ? gcnew MagickErrorInfo(Value) : nullptr;
	}
	//==============================================================================================
	void MagickImage::Raise(int size)
	{
		RaiseOrLower(size, true);
	}
	//==============================================================================================
	void MagickImage::RandomThreshold(Magick::Quantum low, Magick::Quantum high)
	{
		RandomThreshold(low, high, false);
	}
	//==============================================================================================
	void MagickImage::RandomThreshold(Magick::Quantum low, Magick::Quantum high, Channels channels)
	{
		RandomThreshold(low, high, channels, false);
	}
	//==============================================================================================
	void MagickImage::RandomThreshold(Percentage percentageLow, Percentage percentageHigh)
	{
		Throw::IfNegative("percentageLow", percentageLow);
		Throw::IfNegative("percentageHigh", percentageHigh);

		RandomThreshold((Magick::Quantum)percentageLow, (Magick::Quantum)percentageHigh, true);
	}
	//==============================================================================================
	void MagickImage::RandomThreshold(Percentage percentageLow, Percentage percentageHigh, Channels channels)
	{
		Throw::IfNegative("percentageLow", percentageLow);
		Throw::IfNegative("percentageHigh", percentageHigh);

		RandomThreshold((Magick::Quantum)percentageLow, (Magick::Quantum)percentageHigh, channels, true);
	}
	//==============================================================================================
	void MagickImage::Read(array<Byte>^ data)
	{
		Read(data, nullptr);
	}
	//==============================================================================================
	void MagickImage::Read(array<Byte>^ data, MagickReadSettings^ readSettings)
	{
		HandleException(MagickReader::Read(Value, data, readSettings));
	}
	//==============================================================================================
	void MagickImage::Read(Bitmap^ bitmap)
	{
		Throw::IfNull("bitmap", bitmap);

		MemoryStream^ memStream = gcnew MemoryStream();
		try
		{
			if (IsSupportedImageFormat(bitmap->RawFormat))
				bitmap->Save(memStream, bitmap->RawFormat);
			else
				bitmap->Save(memStream, ImageFormat::Bmp);

			memStream->Position = 0;
			Read(memStream);
		}
		finally
		{
			delete memStream;
		}
	}
	//==============================================================================================
	void MagickImage::Read(FileInfo^ file)
	{
		Throw::IfNull("file", file);
		Read(file->FullName);
	}
	//==============================================================================================
	void MagickImage::Read(FileInfo^ file, MagickReadSettings^ readSettings)
	{
		Throw::IfNull("file", file);
		Read(file->FullName, readSettings);
	}
	//==============================================================================================
	void MagickImage::Read(MagickColor^ color, int width, int height)
	{
		HandleException(MagickReader::Read(Value, color, width, height));
	}
	//==============================================================================================
	void MagickImage::Read(String^ fileName)
	{
		Read(fileName, nullptr);
	}
	//==============================================================================================
	void MagickImage::Read(String^ fileName, int width, int height)
	{
		HandleException(MagickReader::Read(Value, fileName, width, height));
	}
	//==============================================================================================
	void MagickImage::Read(String^ fileName, MagickReadSettings^ readSettings)
	{
		HandleException(MagickReader::Read(Value, fileName, readSettings));
	}
	//==============================================================================================
	void MagickImage::Read(Stream^ stream)
	{
		Read(stream, nullptr);
	}
	//==============================================================================================
	void MagickImage::Read(Stream^ stream, MagickReadSettings^ readSettings)
	{
		HandleException(MagickReader::Read(Value, stream, readSettings));
	}
	//==============================================================================================
	void MagickImage::ReduceNoise()
	{
		try
		{
			Value->reduceNoise();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::ReduceNoise(int order)
	{
		try
		{
			Value->reduceNoise(order);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::RemoveDefine(MagickFormat format, String^ name)
	{
		Throw::IfNullOrEmpty("name", name);

		std::string magick;
		Marshaller::Marshal(Enum::GetName(MagickFormat::typeid, GetCoderFormat(format)), magick);
		std::string optionName;
		Marshaller::Marshal(name, optionName);

		try
		{
			Value->defineSet(magick, optionName, false);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::RemoveProfile(String^ name)
	{
		Magick::Blob blob;
		SetProfile(name, blob);
	}
	//==============================================================================================
	void MagickImage::RePage()
	{
		try
		{
			Value->repage();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		} 
	}
	//==============================================================================================
	void MagickImage::Resize(int width, int height)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(width, height);
		Resize(geometry);
	}
	//==============================================================================================
	void MagickImage::Resize(MagickGeometry^ geometry)
	{
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->resize(*magickGeometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Resize(Percentage percentage)
	{
		Resize(percentage, percentage);
	}
	//==============================================================================================
	void MagickImage::Resize(Percentage percentageWidth, Percentage percentageHeight)
	{
		Throw::IfNegative("percentageWidth", percentageWidth);
		Throw::IfNegative("percentageHeight", percentageHeight);

		MagickGeometry^ geometry = gcnew MagickGeometry(percentageWidth, percentageHeight);
		Resize(geometry);
	}
	//==============================================================================================
	void MagickImage::Roll(int xOffset, int yOffset)
	{
		try
		{
			Value->roll(xOffset, yOffset);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Rotate(double degrees)
	{
		try
		{
			Value->rotate(degrees);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Sample(int width, int height)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(width, height);
		Sample(geometry);
	}
	//==============================================================================================
	void MagickImage::Sample(MagickGeometry^ geometry)
	{
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->sample(*magickGeometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Sample(Percentage percentage)
	{
		Sample(percentage, percentage);
	}
	//==============================================================================================
	void MagickImage::Sample(Percentage percentageWidth, Percentage percentageHeight)
	{
		Throw::IfNegative("percentageWidth", percentageWidth);
		Throw::IfNegative("percentageHeight", percentageHeight);

		MagickGeometry^ geometry = gcnew MagickGeometry(percentageWidth, percentageHeight);
		Sample(geometry);
	}
	//==============================================================================================
	void MagickImage::Scale(int width, int height)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(width, height);
		Scale(geometry);
	}
	//==============================================================================================
	void MagickImage::Scale(MagickGeometry^ geometry)
	{
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->scale(*magickGeometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Scale(Percentage percentage)
	{
		Scale(percentage, percentage);
	}
	//==============================================================================================
	void MagickImage::Scale(Percentage percentageWidth, Percentage percentageHeight)
	{
		Throw::IfNegative("percentageWidth", percentageWidth);
		Throw::IfNegative("percentageHeight", percentageHeight);

		MagickGeometry^ geometry = gcnew MagickGeometry(percentageWidth, percentageHeight);
		Scale(geometry);
	}
	//==============================================================================================
	void MagickImage::Segment()
	{
		Segment(GraphicsMagick::ColorSpace::Undefined, 1.0, 1.5);
	}
	//==============================================================================================
	void MagickImage::Segment(GraphicsMagick::ColorSpace quantizeColorSpace, double clusterThreshold, double smoothingThreshold)
	{
		try
		{
			Value->quantizeColorSpace((Magick::ColorspaceType)quantizeColorSpace);
			Value->segment(clusterThreshold, smoothingThreshold);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::SetAttribute(String^ name, String^ value)
	{
		Throw::IfNullOrEmpty("name", name);
		Throw::IfNull("value", value);

		std::string attributeName;
		Marshaller::Marshal(name, attributeName);
		std::string attributeValue;
		Marshaller::Marshal(value, attributeValue);

		try
		{
			return Value->attribute(attributeName, attributeValue);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::SetDefine(MagickFormat format, String^ name, bool flag)
	{
		SetDefine(format, name, flag ? "true" : "false");
	}
	//==============================================================================================
	void MagickImage::SetDefine(MagickFormat format, String^ name, String^ value)
	{
		Throw::IfNullOrEmpty("name", name);
		Throw::IfNull("value", value);

		std::string magick;
		Marshaller::Marshal(Enum::GetName(MagickFormat::typeid, GetCoderFormat(format)), magick);
		std::string optionName;
		Marshaller::Marshal(name, optionName);
		std::string optionValue;
		Marshaller::Marshal(value, optionValue);

		try
		{
			Value->defineValue(magick, optionName, optionValue);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Shade()
	{
		Shade(30, 30, false);
	}
	//==============================================================================================
	void MagickImage::Shade(double azimuth, double elevation, bool colorShading)
	{
		try
		{
			Value->shade(azimuth, elevation, colorShading);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Sharpen()
	{
		Sharpen(0.0, 1.0);
	}
	//==============================================================================================
	void MagickImage::Sharpen(Channels channels)
	{
		Sharpen(0.0, 1.0, channels);
	}
	//==============================================================================================
	void MagickImage::Sharpen(double radius, double sigma)
	{
		try
		{
			Value->sharpen(radius, sigma);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Sharpen(double radius, double sigma, Channels channels)
	{
		try
		{
			Value->sharpenChannel((Magick::ChannelType)channels, radius, sigma);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Shave(int leftRight, int topBottom)
	{
		const Magick::Geometry* geometry = new Magick::Geometry(leftRight, topBottom);

		try
		{
			Value->shave(*geometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometry;
		}
	}
	//==============================================================================================
	void MagickImage::Shear(double xAngle, double yAngle)
	{
		try
		{
			Value->shear(xAngle, yAngle);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Solarize()
	{
		Solarize(50.0);
	}
	//==============================================================================================
	void MagickImage::Solarize(double factor)
	{
		try
		{
			Value->solarize(factor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Spread()
	{
		Spread(3);
	}
	//==============================================================================================
	void MagickImage::Spread(int amount)
	{
		try
		{
			Value->spread(amount);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Stegano(MagickImage^ watermark)
	{
		Throw::IfNull("watermark", watermark);

		try
		{
			Value->stegano(*watermark->Value);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Stereo(MagickImage^ rightImage)
	{
		Throw::IfNull("rightImage", rightImage);

		try
		{
			Value->stereo(*rightImage->Value);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Strip()
	{
		try
		{
			Value->strip();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Swirl(double degrees)
	{
		try
		{
			Value->swirl(degrees);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Texture(MagickImage^ image)
	{
		Throw::IfNull("image", image);

		try
		{
			Value->texture(*image->Value);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Threshold(Percentage percentage)
	{
		try
		{
			Value->threshold(percentage.ToQuantum());
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Tile(MagickImage^ image, CompositeOperator compose)
	{
		Throw::IfNull("image", image);

		for (int y=0; y < Height; y+= image->Height)
		{
			for (int x=0; x < Width; x += image->Width)
			{
				Composite(image, x, y, compose);
			}
		} 
	}
	//==============================================================================================
	String^ MagickImage::ToBase64()
	{
		array<Byte>^ bytes = ToByteArray();
		if (bytes == nullptr)
			return "";
		else
			return Convert::ToBase64String(bytes);
	}
	//==============================================================================================
	Bitmap^ MagickImage::ToBitmap()
	{
		if (ColorSpace == GraphicsMagick::ColorSpace::CMYK)
			ColorSpace = GraphicsMagick::ColorSpace::sRGB;

		String^ map = "BGR";
		PixelFormat format = PixelFormat::Format24bppRgb;
		if (HasAlpha)
		{
			map = "BGRA";
			format = PixelFormat::Format32bppArgb;
		}

		unsigned char* pixels = (unsigned char*) NULL;

		try
		{
			pixels = ExportPixels(map);

			Bitmap^ bitmap = gcnew Bitmap(Width, Height, format);
			BitmapData^ data = bitmap->LockBits(Rectangle(0, 0, Width, Height), ImageLockMode::ReadWrite, format);
			IntPtr destination = data->Scan0;
			size_t stride = (map->Length * Width);
			unsigned char* p = pixels;
			for(int i=0; i < Height; i++)
			{
				MagickLib::MagickCloneMemory(destination.ToPointer(), p, stride);
				p += stride;
				destination = IntPtr(destination.ToInt64() + data->Stride);
			}
			bitmap->UnlockBits(data);
			return bitmap;
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
		finally
		{
			if (pixels != (unsigned char*) NULL)
				MagickLib::MagickFree(pixels);
		}
	}
	//==============================================================================================
	Bitmap^ MagickImage::ToBitmap(ImageFormat^ imageFormat)
	{
		SetFormat(imageFormat);

		MemoryStream^ memStream = gcnew MemoryStream();
		Write(memStream);
		memStream->Position = 0;
		// Do not dispose the memStream, the bitmap owns it.
		return gcnew Bitmap(memStream);
	}
	//==============================================================================================
	array<Byte>^ MagickImage::ToByteArray()
	{
		Magick::Blob blob;
		HandleException(MagickWriter::Write(this->Value, &blob));
		return Marshaller::Marshal(&blob);
	}
	//==============================================================================================
	array<Byte>^ MagickImage::ToByteArray(MagickFormat format)
	{
		Format = format;
		return ToByteArray();
	}
	//==============================================================================================
	String^ MagickImage::ToString()
	{
		return String::Format(CultureInfo::InvariantCulture, "{0} {1}x{2} {3}-bit {4} {5}",
			Format, Width, Height, Depth, ColorSpace, FormatedFileSize());
	}
	//==============================================================================================
	void MagickImage::Transform(MagickGeometry^ imageGeometry)
	{
		Throw::IfNull("imageGeometry", imageGeometry);

		const Magick::Geometry* geometry = imageGeometry->CreateGeometry();

		try
		{
			Value->transform(*geometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometry;
		}
	}
	//==============================================================================================
	void MagickImage::Transform(MagickGeometry^ imageGeometry, MagickGeometry^ cropGeometry)
	{
		Throw::IfNull("imageGeometry", imageGeometry);
		Throw::IfNull("cropGeometry", cropGeometry);

		const Magick::Geometry* geometryImage = imageGeometry->CreateGeometry();
		const Magick::Geometry* geometryCrop = cropGeometry->CreateGeometry();

		try
		{ 
			Value->transform(*geometryImage, *geometryCrop);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete geometryImage;
			delete geometryCrop;
		}
	}
	//==============================================================================================
	void MagickImage::TransformOrigin(double x, double y)
	{
		Value->transformOrigin(x, y);
	}
	//==============================================================================================
	void MagickImage::TransformRotation(double angle)
	{
		Value->transformRotation(angle);
	}
	//==============================================================================================
	void MagickImage::TransformReset()
	{
		Value->transformReset();
	}
	//==============================================================================================
	void MagickImage::TransformScale(double scaleX, double scaleY)
	{
		Value->transformScale(scaleX, scaleY);
	}
	//==============================================================================================
	void MagickImage::TransformSkewX(double skewX)
	{
		Value->transformSkewX(skewX);
	}
	//==============================================================================================
	void MagickImage::TransformSkewY(double skewY)
	{
		Value->transformSkewY(skewY);
	}
	//==============================================================================================
	void MagickImage::Transparent(MagickColor^ color)
	{
		Throw::IfNull("color", color);

		const Magick::Color* transparentColor = color->CreateColor();

		try
		{
			Value->transparent(*transparentColor);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete transparentColor;
		}
	}
	//==============================================================================================
	void MagickImage::Trim()
	{
		try
		{
			Value->trim();
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Unsharpmask(double radius, double sigma, double amount, double threshold)
	{
		try
		{
			Value->unsharpmask(radius, sigma, amount, threshold);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Unsharpmask(double radius, double sigma, double amount, double threshold, Channels channels)
	{
		try
		{
			Value->unsharpmaskChannel((Magick::ChannelType)channels, radius, sigma, amount, threshold);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Wave()
	{
		Wave(25.0, 150.0);
	}
	//==============================================================================================
	void MagickImage::Wave(double amplitude, double length)
	{
		try
		{
			Value->wave(amplitude, length);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
	}
	//==============================================================================================
	void MagickImage::Write(FileInfo^ file)
	{
		Throw::IfNull("file", file);
		Write(file->FullName);
		file->Refresh();
	}
	//==============================================================================================
	void MagickImage::Write(Stream^ stream)
	{
		HandleException(MagickWriter::Write(Value, stream));
	}
	//==============================================================================================
	void MagickImage::Write(Stream^ stream, MagickFormat format)
	{
		Format=format;
		Write(stream);
	}
	//==============================================================================================
	void MagickImage::Write(String^ fileName)
	{
		HandleException(MagickWriter::Write(Value, fileName));
	}
	//==============================================================================================
	void MagickImage::Zoom(int width, int height)
	{
		MagickGeometry^ geometry = gcnew MagickGeometry(width, height);
		Zoom(geometry);
	}
	//==============================================================================================
	void MagickImage::Zoom(MagickGeometry^ geometry)
	{
		Throw::IfNull("geometry", geometry);

		const Magick::Geometry* magickGeometry = geometry->CreateGeometry();

		try
		{
			Value->zoom(*magickGeometry);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
		}
		finally
		{
			delete magickGeometry;
		}
	}
	//==============================================================================================
	void MagickImage::Zoom(Percentage percentage)
	{
		Zoom(percentage, percentage);
	}
	//==============================================================================================
	void MagickImage::Zoom(Percentage percentageWidth, Percentage percentageHeight)
	{
		Throw::IfNegative("percentageWidth", percentageWidth);
		Throw::IfNegative("percentageHeight", percentageHeight);

		MagickGeometry^ geometry = gcnew MagickGeometry(percentageWidth, percentageHeight);
		Zoom(geometry);
	}
	//==============================================================================================
#if !(NET20)
	//==============================================================================================
	BitmapSource^ MagickImage::ToBitmapSource()
	{
		String^ map = "RGB";
		MediaPixelFormat format = MediaPixelFormats::Rgb24;

		if (HasAlpha)
		{
			map = "BGRA";
			format = MediaPixelFormats::Bgra32;
		}

		if (ColorSpace == GraphicsMagick::ColorSpace::CMYK)
		{
			map = "CMYK";
			format = MediaPixelFormats::Cmyk32;
		}

		int step = (format.BitsPerPixel / 8);
		int stride = Width * step;
		unsigned char* pixels = (unsigned char*) NULL;

		try
		{
			pixels = ExportPixels(map);
			return BitmapSource::Create(Width, Height, 96, 96, format, nullptr, IntPtr((void *) pixels), stride * Height, stride);
		}
		catch(Magick::Exception& exception)
		{
			HandleException(exception);
			return nullptr;
		}
		finally
		{
			if (pixels != (unsigned char*) NULL)
				MagickLib::MagickFree(pixels);
		}
	}
	//==============================================================================================
#endif
	//==============================================================================================
}