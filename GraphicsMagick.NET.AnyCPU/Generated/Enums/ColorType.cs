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
	public enum ColorType
	{
		Undefined = 0,
		Bilevel = 1,
		Grayscale = 2,
		GrayscaleMatte = 3,
		Palette = 4,
		PaletteMatte = 5,
		TrueColor = 6,
		TrueColorMatte = 7,
		ColorSeparation = 8,
		ColorSeparationMatte = 9,
		Optimize = 10,
	}
}
