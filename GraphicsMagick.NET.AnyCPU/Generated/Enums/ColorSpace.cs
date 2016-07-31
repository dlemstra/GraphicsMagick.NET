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

namespace GraphicsMagick
{
	public enum ColorSpace
	{
		Undefined = 0,
		RGB = 1,
		GRAY = 2,
		Transparent = 3,
		OHTA = 4,
		XYZ = 5,
		YCC = 6,
		YIQ = 7,
		YPbPr = 8,
		YUV = 9,
		CMYK = 10,
		sRGB = 11,
		HSL = 12,
		HWB = 13,
		Rec601Luma = 16,
		Rec601YCbCr = 17,
		YCbCr = 17,
		Rec709Luma = 18,
		Rec709YCbCr = 19,
	}
}
