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

#include "..\MagickColor.h"

namespace GraphicsMagick
{
	///=============================================================================================
	///<summary>
	/// Base class for colors
	///</summary>
	public ref class ColorBase abstract : IEquatable<ColorBase^>, IComparable<ColorBase^>
	{
		//===========================================================================================
	private:
		//===========================================================================================
		bool _HasAlpha;
		MagickColor^ _Value;
		//===========================================================================================
	protected private:
		//===========================================================================================
		ColorBase(bool hasAlpha);
		//===========================================================================================
		ColorBase(bool hasAlpha, MagickColor^ color);
		//===========================================================================================
		property MagickColor^ Value
		{
			MagickColor^ get();
		}
		//===========================================================================================
		virtual void UpdateValue();
		//===========================================================================================
	public:
		//===========================================================================================
		static bool operator == (ColorBase^ left, ColorBase^ right);
		//===========================================================================================
		static bool operator != (ColorBase^ left, ColorBase^ right);
		//===========================================================================================
		static bool operator > (ColorBase^ left, ColorBase^ right);
		//===========================================================================================
		static bool operator < (ColorBase^ left, ColorBase^ right);
		//===========================================================================================
		static bool operator >= (ColorBase^ left, ColorBase^ right);
		//===========================================================================================
		static bool operator <= (ColorBase^ left, ColorBase^ right);
		//===========================================================================================
		static operator MagickColor^ (ColorBase^ color);
		///==========================================================================================
		///<summary>
		/// Compares the current instance with another object of the same type.
		///</summary>
		///<param name="other">The object to compare this color with.</param>
		virtual int CompareTo(ColorBase^ other);
		///==========================================================================================
		///<summary>
		/// Determines whether the specified object is equal to the current color.
		///</summary>
		///<param name="obj">The object to compare this color with.</param>
		virtual bool Equals(Object^ obj) override;
		///==========================================================================================
		///<summary>
		/// Determines whether the specified geometry is equal to the current color.
		///</summary>
		///<param name="other">The image to compare this color with.</param>
		virtual bool Equals(ColorBase^ other);
		///==========================================================================================
		///<summary>
		/// Servers as a hash of this type.
		///</summary>
		virtual int GetHashCode() override;
		///==========================================================================================
		///<summary>
		/// Converts the value of this instance to an equivalent MagickColor.
		///</summary>
		MagickColor^ ToMagickColor();
		//===========================================================================================
	};
	//==============================================================================================
}