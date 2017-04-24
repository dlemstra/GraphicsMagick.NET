//=================================================================================================
// Copyright 2017 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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
	public enum ExifDataType
	{
		Unknown = 0,
		Byte = 1,
		Ascii = 2,
		Short = 3,
		Long = 4,
		Rational = 5,
		SignedByte = 6,
		Undefined = 7,
		SignedShort = 8,
		SignedLong = 9,
		SignedRational = 10,
		SingleFloat = 11,
		DoubleFloat = 12,
	}
}
