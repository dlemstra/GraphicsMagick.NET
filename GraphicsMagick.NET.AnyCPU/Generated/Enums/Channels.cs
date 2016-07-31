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
	[Flags]
	public enum Channels
	{
		Undefined = 0,
		Red = 1,
		Cyan = 2,
		Green = 3,
		Magenta = 4,
		Blue = 5,
		Yellow = 6,
		Opacity = 7,
		RGB = 7,
		Black = 8,
		All = 10,
		Gray = 11,
	}
}
