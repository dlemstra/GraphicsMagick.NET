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
	/// Class that can be used to acquire information about the Quantum.
	///</summary>
	public ref class Quantum abstract sealed
	{
		//===========================================================================================
	internal:
		//===========================================================================================
#if (QuantumDepth > 8)
		static Magick::Quantum Convert(Byte value);
#endif
		//===========================================================================================
		static Magick::Quantum Convert(double value);
		//===========================================================================================
		static Magick::Quantum Convert(Magick::Quantum value);
		//===========================================================================================
		static Magick::Quantum Convert(unsigned int value);
		//===========================================================================================
#if (QuantumDepth != 16)
		static Magick::Quantum Convert(unsigned short value);
#endif
		//===========================================================================================
		static double Scale(Magick::Quantum value);
		//===========================================================================================
	public:
		///==========================================================================================
		///<summary>
		/// Returns the Quantum depth.
		///</summary>
		static property int Depth
		{
			int get();
		}
		///==========================================================================================
		///<summary>
		/// Returns the maximum value of the quantum.
		///</summary>
		QUANTUM_CLS_COMPLIANT static property Magick::Quantum Max
		{
			Magick::Quantum get();
		}
		//===========================================================================================
	};
	//==============================================================================================
}