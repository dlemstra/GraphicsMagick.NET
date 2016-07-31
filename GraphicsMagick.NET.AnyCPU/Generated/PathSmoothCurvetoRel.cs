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
using System.Collections;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Drawing2D;
using System.Drawing.Imaging;
using System.IO;
using System.Reflection;
using System.Text;
using System.Windows.Media.Imaging;
using System.Xml;
using System.Xml.Linq;
using System.Xml.XPath;
using Fasterflect;

namespace GraphicsMagick
{
	public sealed class PathSmoothCurvetoRel: PathBase
	{
		internal PathSmoothCurvetoRel(object instance)
			: base(instance)
		{
		}
		public PathSmoothCurvetoRel(IEnumerable<Coordinate> coordinates)
			: base(AssemblyHelper.CreateInstance(Types.PathSmoothCurvetoRel, new Type[] {Types.IEnumerableCoordinate}, Coordinate.CastIEnumerable(coordinates)))
		{
		}
		public PathSmoothCurvetoRel(Coordinate coordinate)
			: base(AssemblyHelper.CreateInstance(Types.PathSmoothCurvetoRel, new Type[] {Types.Coordinate}, GraphicsMagick.Coordinate.GetInstance(coordinate)))
		{
		}
	}
}
