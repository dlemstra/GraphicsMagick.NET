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
	public enum CompositeOperator
	{
		Undefined = 0,
		Over = 1,
		In = 2,
		Out = 3,
		Atop = 4,
		Xor = 5,
		Plus = 6,
		Difference = 10,
		Multiply = 11,
		Bumpmap = 12,
		Copy = 13,
		CopyRed = 14,
		CopyGreen = 15,
		CopyBlue = 16,
		CopyOpacity = 17,
		Clear = 18,
		Dissolve = 19,
		Displace = 20,
		Modulate = 21,
		Threshold = 22,
		NoComposite = 23,
		Darken = 24,
		Lighten = 25,
		Hue = 26,
		Saturate = 27,
		Colorize = 28,
		Luminize = 29,
		Screen = 30,
		Overlay = 31,
		CopyCyan = 32,
		CopyMagenta = 33,
		CopyYellow = 34,
		CopyBlack = 35,
	}
}
