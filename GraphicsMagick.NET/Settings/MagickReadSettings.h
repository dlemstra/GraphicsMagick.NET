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
#pragma once

#include "..\Arguments\MagickGeometry.h"
#include "..\Enums\ColorSpace.h"
#include "..\Enums\MagickFormat.h"
#include "PixelStorageSettings.h"

using namespace System::Collections::Generic;

namespace GraphicsMagick
{
	///=============================================================================================
	///<summary>
	/// Class that contains setting for when an image is being read.
	///</summary>
	public ref class MagickReadSettings sealed
	{
		//===========================================================================================
	private:
		//===========================================================================================
		Dictionary<String^, String^>^ _Defines;
		//===========================================================================================
		void ApplyColorSpace(MagickLib::ImageInfo *imageInfo);
		//===========================================================================================
		void ApplyDefines(MagickLib::ImageInfo *imageInfo);
		//===========================================================================================
		void ApplyDensity(MagickLib::ImageInfo *imageInfo);
		//===========================================================================================
		void ApplyDimensions(MagickLib::ImageInfo *imageInfo);
		//===========================================================================================
		void ApplyFormat(MagickLib::ImageInfo *imageInfo);
		//===========================================================================================
		void ApplyUseMonochrome(MagickLib::ImageInfo *imageInfo);
		//===========================================================================================
	internal:
		//===========================================================================================
		bool Ping;
		//===========================================================================================
		void Apply(Magick::Image *image);
		//===========================================================================================
		void Apply(MagickLib::ImageInfo *imageInfo);
		//===========================================================================================
	public:
		///==========================================================================================
		///<summary>
		/// Initializes a new instance of the MagickReadSettings class.
		///</summary>
		MagickReadSettings();
		///==========================================================================================
		///<summary>
		/// Color space.
		///</summary>
		property Nullable<ColorSpace> ColorSpace;
		///==========================================================================================
		///<summary>
		/// Vertical and horizontal resolution in pixels.
		///</summary>
		property MagickGeometry^ Density;
		///==========================================================================================
		///<summary>
		/// The format of the image.
		///</summary>
		property Nullable<MagickFormat> Format;
		///==========================================================================================
		///<summary>
		/// The height.
		///</summary>
		property Nullable<int> Height;
		///==========================================================================================
		///<summary>
		/// The settings for pixel storage.
		///</summary>
		property PixelStorageSettings^ PixelStorage;
		///==========================================================================================
		///<summary>
		/// The height.
		/// Use monochrome reader.
		///</summary>
		property Nullable<bool> UseMonochrome;
		///==========================================================================================
		///<summary>
		/// The width.
		///</summary>
		property Nullable<int> Width;
		///==========================================================================================
		///<summary>
		/// Sets a format-specific option.
		///</summary>
		///<param name="format">The format to set the option for.</param>
		///<param name="name">The name of the option.</param>
		///<param name="value">The value of the option.</param>
		void SetDefine(MagickFormat format, String^ name, String^ value);
		//===========================================================================================
	};
	//==============================================================================================
}