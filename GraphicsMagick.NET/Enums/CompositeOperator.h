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

#include "Stdafx.h"

namespace GraphicsMagick
{
	///=============================================================================================
	///<summary>
	/// Specifies the composite operators.
	///</summary>
	public enum class CompositeOperator
	{
		Undefined = Magick::UndefinedCompositeOp,
		NoComposite = Magick::NoCompositeOp,
		Atop = Magick::AtopCompositeOp,
		Bumpmap = Magick::BumpmapCompositeOp,
		Clear = Magick::ClearCompositeOp,
		Colorize = Magick::ColorizeCompositeOp,
		CopyBlack = Magick::CopyBlackCompositeOp,
		CopyBlue = Magick::CopyBlueCompositeOp,
		Copy = Magick::CopyCompositeOp,
		CopyCyan = Magick::CopyCyanCompositeOp,
		CopyGreen = Magick::CopyGreenCompositeOp,
		CopyMagenta = Magick::CopyMagentaCompositeOp,
		CopyOpacity = Magick::CopyOpacityCompositeOp,
		CopyRed = Magick::CopyRedCompositeOp,
		CopyYellow = Magick::CopyYellowCompositeOp,
		Darken = Magick::DarkenCompositeOp,
		Difference = Magick::DifferenceCompositeOp,
		Displace = Magick::DisplaceCompositeOp,
		Dissolve = Magick::DissolveCompositeOp,
		Hue = Magick::HueCompositeOp,
		In = Magick::InCompositeOp,
		Lighten = Magick::LightenCompositeOp,
		Luminize = Magick::LuminizeCompositeOp,
		Modulate = Magick::ModulateCompositeOp,
		Multiply = Magick::MultiplyCompositeOp,
		Out = Magick::OutCompositeOp,
		Over = Magick::OverCompositeOp,
		Overlay = Magick::OverlayCompositeOp,
		Plus = Magick::PlusCompositeOp,
		Saturate = Magick::SaturateCompositeOp,
		Screen = Magick::ScreenCompositeOp,
		Threshold = Magick::ThresholdCompositeOp,
		Xor = Magick::XorCompositeOp,
		Minus = Magick::MinusCompositeOp,
		Add = Magick::AddCompositeOp,
		Subtract = Magick::SubtractCompositeOp,
		Divide = Magick::DivideCompositeOp,
		HardLight = Magick::HardLightCompositeOp,
		Exclusion = Magick::ExclusionCompositeOp,
		ColorDodge = Magick::ColorDodgeCompositeOp,
		ColorBurn = Magick::ColorBurnCompositeOp,
		SoftLight = Magick::SoftLightCompositeOp,
		LinearBurn = Magick::LinearBurnCompositeOp,
		LinearDodge = Magick::LinearDodgeCompositeOp,
		LinearLight = Magick::LinearLightCompositeOp,
		VividLight = Magick::VividLightCompositeOp,
		PinLight = Magick::PinLightCompositeOp,
		HardMix = Magick::HardMixCompositeOp
	};
	//==============================================================================================
}