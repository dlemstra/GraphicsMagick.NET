//=================================================================================================
// Copyright 2014 Dirk Lemstra <https://graphicsmagick.codeplex.com/>
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
#include "Quantum.h"

namespace GraphicsMagick
{
	//==============================================================================================
#if (QuantumDepth > 8)
	Magick::Quantum Quantum::Convert(Byte value)
	{
#if (QuantumDepth == 16)
		return (Magick::Quantum) (257UL * value);
#else
#error Not implemented!
#endif
	}
#endif
	//==============================================================================================
	Magick::Quantum Quantum::Convert(double value)
	{
		return (Magick::Quantum)value;
	}
	//==============================================================================================
	Magick::Quantum Quantum::Convert(Magick::Quantum value)
	{
		return value;
	}
	//==============================================================================================
	Magick::Quantum Quantum::Convert(unsigned int value)
	{
		return (Magick::Quantum)value;
	}
	//==============================================================================================
#if (QuantumDepth != 16)
	Magick::Quantum Quantum::Convert(unsigned short value)
	{
		return (Magick::Quantum)value;
	}
#endif
	//==============================================================================================
	double Quantum::Scale(Magick::Quantum value)
	{
		return ((double) 1.0/(double) Max)*value;
	}
	//==============================================================================================
	int Quantum::Depth::get()
	{
		return QuantumDepth;
	}
	//==============================================================================================
	Magick::Quantum Quantum::Max::get()
	{
#if (QuantumDepth == 8)
		return (Magick::Quantum) 255;
#elif (QuantumDepth == 16)
		return (Magick::Quantum) 65535;
#else
#error Not implemented!
#endif
	}
	//==============================================================================================
}