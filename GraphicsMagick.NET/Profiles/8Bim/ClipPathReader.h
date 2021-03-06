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

#include "..\..\Arguments\PointD.h"

using namespace System::Drawing;
using namespace System::Text;

namespace GraphicsMagick
{
	//==============================================================================================
	private ref class ClipPathReader sealed
	{
		//===========================================================================================
	private:
		//===========================================================================================
		array<PointD>^ _First;
		int _Index;
		int _Height;
		bool _InSubpath;
		StringBuilder^ _Path;
		int _KnotCount;
		array<PointD>^ _Last;
		int _Width;
		//===========================================================================================
		void AddPath(array<Byte>^ data);
		//===========================================================================================
		array<PointD>^ CreatePoint(array<Byte>^ data);
		//===========================================================================================
		void ClosePath();
		//===========================================================================================
		void Reset(int offset);
		//===========================================================================================
		void SetKnotCount(array<Byte>^ data);
		//===========================================================================================
	public:
		//===========================================================================================
		ClipPathReader(int width, int height);
		//===========================================================================================
		String^ Read(array<Byte>^ data, int offset, int length);
		//===========================================================================================
	};
	//==============================================================================================
}