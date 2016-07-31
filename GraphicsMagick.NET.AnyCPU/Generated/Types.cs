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
using System.Collections.Generic;

namespace GraphicsMagick
{
	internal static class Types
	{
		private static Type _Channels;
		public static Type Channels
		{
			get
			{
				if (_Channels == null)
					_Channels = AssemblyHelper.GetType("GraphicsMagick.Channels");
				return _Channels;
			}
		}
		private static Type _ClassType;
		public static Type ClassType
		{
			get
			{
				if (_ClassType == null)
					_ClassType = AssemblyHelper.GetType("GraphicsMagick.ClassType");
				return _ClassType;
			}
		}
		private static Type _ColorBase;
		public static Type ColorBase
		{
			get
			{
				if (_ColorBase == null)
					_ColorBase = AssemblyHelper.GetType("GraphicsMagick.ColorBase");
				return _ColorBase;
			}
		}
		private static Type _ColorCMYK;
		public static Type ColorCMYK
		{
			get
			{
				if (_ColorCMYK == null)
					_ColorCMYK = AssemblyHelper.GetType("GraphicsMagick.ColorCMYK");
				return _ColorCMYK;
			}
		}
		private static Type _ColorGray;
		public static Type ColorGray
		{
			get
			{
				if (_ColorGray == null)
					_ColorGray = AssemblyHelper.GetType("GraphicsMagick.ColorGray");
				return _ColorGray;
			}
		}
		private static Type _ColorHSL;
		public static Type ColorHSL
		{
			get
			{
				if (_ColorHSL == null)
					_ColorHSL = AssemblyHelper.GetType("GraphicsMagick.ColorHSL");
				return _ColorHSL;
			}
		}
		private static Type _ColorMatrix;
		public static Type ColorMatrix
		{
			get
			{
				if (_ColorMatrix == null)
					_ColorMatrix = AssemblyHelper.GetType("GraphicsMagick.ColorMatrix");
				return _ColorMatrix;
			}
		}
		private static Type _ColorMono;
		public static Type ColorMono
		{
			get
			{
				if (_ColorMono == null)
					_ColorMono = AssemblyHelper.GetType("GraphicsMagick.ColorMono");
				return _ColorMono;
			}
		}
		private static Type _ColorProfile;
		public static Type ColorProfile
		{
			get
			{
				if (_ColorProfile == null)
					_ColorProfile = AssemblyHelper.GetType("GraphicsMagick.ColorProfile");
				return _ColorProfile;
			}
		}
		private static Type _ColorRGB;
		public static Type ColorRGB
		{
			get
			{
				if (_ColorRGB == null)
					_ColorRGB = AssemblyHelper.GetType("GraphicsMagick.ColorRGB");
				return _ColorRGB;
			}
		}
		private static Type _ColorSpace;
		public static Type ColorSpace
		{
			get
			{
				if (_ColorSpace == null)
					_ColorSpace = AssemblyHelper.GetType("GraphicsMagick.ColorSpace");
				return _ColorSpace;
			}
		}
		private static Type _NullableColorSpace;
		public static Type NullableColorSpace
		{
			get
			{
				if (_NullableColorSpace == null)
					_NullableColorSpace = typeof(Nullable<>).MakeGenericType(ColorSpace);
				return _NullableColorSpace;
			}
		}
		private static Type _ColorType;
		public static Type ColorType
		{
			get
			{
				if (_ColorType == null)
					_ColorType = AssemblyHelper.GetType("GraphicsMagick.ColorType");
				return _ColorType;
			}
		}
		private static Type _ColorYUV;
		public static Type ColorYUV
		{
			get
			{
				if (_ColorYUV == null)
					_ColorYUV = AssemblyHelper.GetType("GraphicsMagick.ColorYUV");
				return _ColorYUV;
			}
		}
		private static Type _CompositeOperator;
		public static Type CompositeOperator
		{
			get
			{
				if (_CompositeOperator == null)
					_CompositeOperator = AssemblyHelper.GetType("GraphicsMagick.CompositeOperator");
				return _CompositeOperator;
			}
		}
		private static Type _CompressionMethod;
		public static Type CompressionMethod
		{
			get
			{
				if (_CompressionMethod == null)
					_CompressionMethod = AssemblyHelper.GetType("GraphicsMagick.CompressionMethod");
				return _CompressionMethod;
			}
		}
		private static Type _ConvolveMatrix;
		public static Type ConvolveMatrix
		{
			get
			{
				if (_ConvolveMatrix == null)
					_ConvolveMatrix = AssemblyHelper.GetType("GraphicsMagick.ConvolveMatrix");
				return _ConvolveMatrix;
			}
		}
		private static Type _Coordinate;
		public static Type Coordinate
		{
			get
			{
				if (_Coordinate == null)
					_Coordinate = AssemblyHelper.GetType("GraphicsMagick.Coordinate");
				return _Coordinate;
			}
		}
		private static Type _IEnumerableCoordinate;
		public static Type IEnumerableCoordinate
		{
			get
			{
				if (_IEnumerableCoordinate == null)
					_IEnumerableCoordinate = typeof(IEnumerable<>).MakeGenericType(Coordinate);
				return _IEnumerableCoordinate;
			}
		}
		private static Type _DoubleMatrix;
		public static Type DoubleMatrix
		{
			get
			{
				if (_DoubleMatrix == null)
					_DoubleMatrix = AssemblyHelper.GetType("GraphicsMagick.DoubleMatrix");
				return _DoubleMatrix;
			}
		}
		private static Type _Drawable;
		public static Type Drawable
		{
			get
			{
				if (_Drawable == null)
					_Drawable = AssemblyHelper.GetType("GraphicsMagick.Drawable");
				return _Drawable;
			}
		}
		private static Type _IEnumerableDrawable;
		public static Type IEnumerableDrawable
		{
			get
			{
				if (_IEnumerableDrawable == null)
					_IEnumerableDrawable = typeof(IEnumerable<>).MakeGenericType(Drawable);
				return _IEnumerableDrawable;
			}
		}
		private static Type _DrawableAffine;
		public static Type DrawableAffine
		{
			get
			{
				if (_DrawableAffine == null)
					_DrawableAffine = AssemblyHelper.GetType("GraphicsMagick.DrawableAffine");
				return _DrawableAffine;
			}
		}
		private static Type _DrawableArc;
		public static Type DrawableArc
		{
			get
			{
				if (_DrawableArc == null)
					_DrawableArc = AssemblyHelper.GetType("GraphicsMagick.DrawableArc");
				return _DrawableArc;
			}
		}
		private static Type _DrawableBezier;
		public static Type DrawableBezier
		{
			get
			{
				if (_DrawableBezier == null)
					_DrawableBezier = AssemblyHelper.GetType("GraphicsMagick.DrawableBezier");
				return _DrawableBezier;
			}
		}
		private static Type _DrawableCircle;
		public static Type DrawableCircle
		{
			get
			{
				if (_DrawableCircle == null)
					_DrawableCircle = AssemblyHelper.GetType("GraphicsMagick.DrawableCircle");
				return _DrawableCircle;
			}
		}
		private static Type _DrawableClipPath;
		public static Type DrawableClipPath
		{
			get
			{
				if (_DrawableClipPath == null)
					_DrawableClipPath = AssemblyHelper.GetType("GraphicsMagick.DrawableClipPath");
				return _DrawableClipPath;
			}
		}
		private static Type _DrawableColor;
		public static Type DrawableColor
		{
			get
			{
				if (_DrawableColor == null)
					_DrawableColor = AssemblyHelper.GetType("GraphicsMagick.DrawableColor");
				return _DrawableColor;
			}
		}
		private static Type _DrawableCompositeImage;
		public static Type DrawableCompositeImage
		{
			get
			{
				if (_DrawableCompositeImage == null)
					_DrawableCompositeImage = AssemblyHelper.GetType("GraphicsMagick.DrawableCompositeImage");
				return _DrawableCompositeImage;
			}
		}
		private static Type _DrawableDashArray;
		public static Type DrawableDashArray
		{
			get
			{
				if (_DrawableDashArray == null)
					_DrawableDashArray = AssemblyHelper.GetType("GraphicsMagick.DrawableDashArray");
				return _DrawableDashArray;
			}
		}
		private static Type _DrawableDashOffset;
		public static Type DrawableDashOffset
		{
			get
			{
				if (_DrawableDashOffset == null)
					_DrawableDashOffset = AssemblyHelper.GetType("GraphicsMagick.DrawableDashOffset");
				return _DrawableDashOffset;
			}
		}
		private static Type _DrawableEllipse;
		public static Type DrawableEllipse
		{
			get
			{
				if (_DrawableEllipse == null)
					_DrawableEllipse = AssemblyHelper.GetType("GraphicsMagick.DrawableEllipse");
				return _DrawableEllipse;
			}
		}
		private static Type _DrawableFillColor;
		public static Type DrawableFillColor
		{
			get
			{
				if (_DrawableFillColor == null)
					_DrawableFillColor = AssemblyHelper.GetType("GraphicsMagick.DrawableFillColor");
				return _DrawableFillColor;
			}
		}
		private static Type _DrawableFillOpacity;
		public static Type DrawableFillOpacity
		{
			get
			{
				if (_DrawableFillOpacity == null)
					_DrawableFillOpacity = AssemblyHelper.GetType("GraphicsMagick.DrawableFillOpacity");
				return _DrawableFillOpacity;
			}
		}
		private static Type _DrawableFillRule;
		public static Type DrawableFillRule
		{
			get
			{
				if (_DrawableFillRule == null)
					_DrawableFillRule = AssemblyHelper.GetType("GraphicsMagick.DrawableFillRule");
				return _DrawableFillRule;
			}
		}
		private static Type _DrawableFont;
		public static Type DrawableFont
		{
			get
			{
				if (_DrawableFont == null)
					_DrawableFont = AssemblyHelper.GetType("GraphicsMagick.DrawableFont");
				return _DrawableFont;
			}
		}
		private static Type _DrawableGravity;
		public static Type DrawableGravity
		{
			get
			{
				if (_DrawableGravity == null)
					_DrawableGravity = AssemblyHelper.GetType("GraphicsMagick.DrawableGravity");
				return _DrawableGravity;
			}
		}
		private static Type _DrawableLine;
		public static Type DrawableLine
		{
			get
			{
				if (_DrawableLine == null)
					_DrawableLine = AssemblyHelper.GetType("GraphicsMagick.DrawableLine");
				return _DrawableLine;
			}
		}
		private static Type _DrawableMatte;
		public static Type DrawableMatte
		{
			get
			{
				if (_DrawableMatte == null)
					_DrawableMatte = AssemblyHelper.GetType("GraphicsMagick.DrawableMatte");
				return _DrawableMatte;
			}
		}
		private static Type _DrawableMiterLimit;
		public static Type DrawableMiterLimit
		{
			get
			{
				if (_DrawableMiterLimit == null)
					_DrawableMiterLimit = AssemblyHelper.GetType("GraphicsMagick.DrawableMiterLimit");
				return _DrawableMiterLimit;
			}
		}
		private static Type _DrawablePath;
		public static Type DrawablePath
		{
			get
			{
				if (_DrawablePath == null)
					_DrawablePath = AssemblyHelper.GetType("GraphicsMagick.DrawablePath");
				return _DrawablePath;
			}
		}
		private static Type _DrawablePoint;
		public static Type DrawablePoint
		{
			get
			{
				if (_DrawablePoint == null)
					_DrawablePoint = AssemblyHelper.GetType("GraphicsMagick.DrawablePoint");
				return _DrawablePoint;
			}
		}
		private static Type _DrawablePointSize;
		public static Type DrawablePointSize
		{
			get
			{
				if (_DrawablePointSize == null)
					_DrawablePointSize = AssemblyHelper.GetType("GraphicsMagick.DrawablePointSize");
				return _DrawablePointSize;
			}
		}
		private static Type _DrawablePolygon;
		public static Type DrawablePolygon
		{
			get
			{
				if (_DrawablePolygon == null)
					_DrawablePolygon = AssemblyHelper.GetType("GraphicsMagick.DrawablePolygon");
				return _DrawablePolygon;
			}
		}
		private static Type _DrawablePolyline;
		public static Type DrawablePolyline
		{
			get
			{
				if (_DrawablePolyline == null)
					_DrawablePolyline = AssemblyHelper.GetType("GraphicsMagick.DrawablePolyline");
				return _DrawablePolyline;
			}
		}
		private static Type _DrawablePopClipPath;
		public static Type DrawablePopClipPath
		{
			get
			{
				if (_DrawablePopClipPath == null)
					_DrawablePopClipPath = AssemblyHelper.GetType("GraphicsMagick.DrawablePopClipPath");
				return _DrawablePopClipPath;
			}
		}
		private static Type _DrawablePopGraphicContext;
		public static Type DrawablePopGraphicContext
		{
			get
			{
				if (_DrawablePopGraphicContext == null)
					_DrawablePopGraphicContext = AssemblyHelper.GetType("GraphicsMagick.DrawablePopGraphicContext");
				return _DrawablePopGraphicContext;
			}
		}
		private static Type _DrawablePopPattern;
		public static Type DrawablePopPattern
		{
			get
			{
				if (_DrawablePopPattern == null)
					_DrawablePopPattern = AssemblyHelper.GetType("GraphicsMagick.DrawablePopPattern");
				return _DrawablePopPattern;
			}
		}
		private static Type _DrawablePushClipPath;
		public static Type DrawablePushClipPath
		{
			get
			{
				if (_DrawablePushClipPath == null)
					_DrawablePushClipPath = AssemblyHelper.GetType("GraphicsMagick.DrawablePushClipPath");
				return _DrawablePushClipPath;
			}
		}
		private static Type _DrawablePushGraphicContext;
		public static Type DrawablePushGraphicContext
		{
			get
			{
				if (_DrawablePushGraphicContext == null)
					_DrawablePushGraphicContext = AssemblyHelper.GetType("GraphicsMagick.DrawablePushGraphicContext");
				return _DrawablePushGraphicContext;
			}
		}
		private static Type _DrawablePushPattern;
		public static Type DrawablePushPattern
		{
			get
			{
				if (_DrawablePushPattern == null)
					_DrawablePushPattern = AssemblyHelper.GetType("GraphicsMagick.DrawablePushPattern");
				return _DrawablePushPattern;
			}
		}
		private static Type _DrawableRectangle;
		public static Type DrawableRectangle
		{
			get
			{
				if (_DrawableRectangle == null)
					_DrawableRectangle = AssemblyHelper.GetType("GraphicsMagick.DrawableRectangle");
				return _DrawableRectangle;
			}
		}
		private static Type _DrawableRotation;
		public static Type DrawableRotation
		{
			get
			{
				if (_DrawableRotation == null)
					_DrawableRotation = AssemblyHelper.GetType("GraphicsMagick.DrawableRotation");
				return _DrawableRotation;
			}
		}
		private static Type _DrawableRoundRectangle;
		public static Type DrawableRoundRectangle
		{
			get
			{
				if (_DrawableRoundRectangle == null)
					_DrawableRoundRectangle = AssemblyHelper.GetType("GraphicsMagick.DrawableRoundRectangle");
				return _DrawableRoundRectangle;
			}
		}
		private static Type _DrawableScaling;
		public static Type DrawableScaling
		{
			get
			{
				if (_DrawableScaling == null)
					_DrawableScaling = AssemblyHelper.GetType("GraphicsMagick.DrawableScaling");
				return _DrawableScaling;
			}
		}
		private static Type _DrawableSkewX;
		public static Type DrawableSkewX
		{
			get
			{
				if (_DrawableSkewX == null)
					_DrawableSkewX = AssemblyHelper.GetType("GraphicsMagick.DrawableSkewX");
				return _DrawableSkewX;
			}
		}
		private static Type _DrawableSkewY;
		public static Type DrawableSkewY
		{
			get
			{
				if (_DrawableSkewY == null)
					_DrawableSkewY = AssemblyHelper.GetType("GraphicsMagick.DrawableSkewY");
				return _DrawableSkewY;
			}
		}
		private static Type _DrawableStrokeAntialias;
		public static Type DrawableStrokeAntialias
		{
			get
			{
				if (_DrawableStrokeAntialias == null)
					_DrawableStrokeAntialias = AssemblyHelper.GetType("GraphicsMagick.DrawableStrokeAntialias");
				return _DrawableStrokeAntialias;
			}
		}
		private static Type _DrawableStrokeColor;
		public static Type DrawableStrokeColor
		{
			get
			{
				if (_DrawableStrokeColor == null)
					_DrawableStrokeColor = AssemblyHelper.GetType("GraphicsMagick.DrawableStrokeColor");
				return _DrawableStrokeColor;
			}
		}
		private static Type _DrawableStrokeLineCap;
		public static Type DrawableStrokeLineCap
		{
			get
			{
				if (_DrawableStrokeLineCap == null)
					_DrawableStrokeLineCap = AssemblyHelper.GetType("GraphicsMagick.DrawableStrokeLineCap");
				return _DrawableStrokeLineCap;
			}
		}
		private static Type _DrawableStrokeLineJoin;
		public static Type DrawableStrokeLineJoin
		{
			get
			{
				if (_DrawableStrokeLineJoin == null)
					_DrawableStrokeLineJoin = AssemblyHelper.GetType("GraphicsMagick.DrawableStrokeLineJoin");
				return _DrawableStrokeLineJoin;
			}
		}
		private static Type _DrawableStrokeOpacity;
		public static Type DrawableStrokeOpacity
		{
			get
			{
				if (_DrawableStrokeOpacity == null)
					_DrawableStrokeOpacity = AssemblyHelper.GetType("GraphicsMagick.DrawableStrokeOpacity");
				return _DrawableStrokeOpacity;
			}
		}
		private static Type _DrawableStrokeWidth;
		public static Type DrawableStrokeWidth
		{
			get
			{
				if (_DrawableStrokeWidth == null)
					_DrawableStrokeWidth = AssemblyHelper.GetType("GraphicsMagick.DrawableStrokeWidth");
				return _DrawableStrokeWidth;
			}
		}
		private static Type _DrawableText;
		public static Type DrawableText
		{
			get
			{
				if (_DrawableText == null)
					_DrawableText = AssemblyHelper.GetType("GraphicsMagick.DrawableText");
				return _DrawableText;
			}
		}
		private static Type _DrawableTextAntialias;
		public static Type DrawableTextAntialias
		{
			get
			{
				if (_DrawableTextAntialias == null)
					_DrawableTextAntialias = AssemblyHelper.GetType("GraphicsMagick.DrawableTextAntialias");
				return _DrawableTextAntialias;
			}
		}
		private static Type _DrawableTextDecoration;
		public static Type DrawableTextDecoration
		{
			get
			{
				if (_DrawableTextDecoration == null)
					_DrawableTextDecoration = AssemblyHelper.GetType("GraphicsMagick.DrawableTextDecoration");
				return _DrawableTextDecoration;
			}
		}
		private static Type _DrawableTextUnderColor;
		public static Type DrawableTextUnderColor
		{
			get
			{
				if (_DrawableTextUnderColor == null)
					_DrawableTextUnderColor = AssemblyHelper.GetType("GraphicsMagick.DrawableTextUnderColor");
				return _DrawableTextUnderColor;
			}
		}
		private static Type _DrawableTranslation;
		public static Type DrawableTranslation
		{
			get
			{
				if (_DrawableTranslation == null)
					_DrawableTranslation = AssemblyHelper.GetType("GraphicsMagick.DrawableTranslation");
				return _DrawableTranslation;
			}
		}
		private static Type _DrawableViewbox;
		public static Type DrawableViewbox
		{
			get
			{
				if (_DrawableViewbox == null)
					_DrawableViewbox = AssemblyHelper.GetType("GraphicsMagick.DrawableViewbox");
				return _DrawableViewbox;
			}
		}
		private static Type _EightBimProfile;
		public static Type EightBimProfile
		{
			get
			{
				if (_EightBimProfile == null)
					_EightBimProfile = AssemblyHelper.GetType("GraphicsMagick.EightBimProfile");
				return _EightBimProfile;
			}
		}
		private static Type _EightBimValue;
		public static Type EightBimValue
		{
			get
			{
				if (_EightBimValue == null)
					_EightBimValue = AssemblyHelper.GetType("GraphicsMagick.EightBimValue");
				return _EightBimValue;
			}
		}
		private static Type _Endian;
		public static Type Endian
		{
			get
			{
				if (_Endian == null)
					_Endian = AssemblyHelper.GetType("GraphicsMagick.Endian");
				return _Endian;
			}
		}
		private static Type _ExceptionTypes;
		public static Type ExceptionTypes
		{
			get
			{
				if (_ExceptionTypes == null)
					_ExceptionTypes = AssemblyHelper.GetType("GraphicsMagick.ExceptionTypes");
				return _ExceptionTypes;
			}
		}
		private static Type _ExifDataType;
		public static Type ExifDataType
		{
			get
			{
				if (_ExifDataType == null)
					_ExifDataType = AssemblyHelper.GetType("GraphicsMagick.ExifDataType");
				return _ExifDataType;
			}
		}
		private static Type _ExifParts;
		public static Type ExifParts
		{
			get
			{
				if (_ExifParts == null)
					_ExifParts = AssemblyHelper.GetType("GraphicsMagick.ExifParts");
				return _ExifParts;
			}
		}
		private static Type _ExifProfile;
		public static Type ExifProfile
		{
			get
			{
				if (_ExifProfile == null)
					_ExifProfile = AssemblyHelper.GetType("GraphicsMagick.ExifProfile");
				return _ExifProfile;
			}
		}
		private static Type _ExifTag;
		public static Type ExifTag
		{
			get
			{
				if (_ExifTag == null)
					_ExifTag = AssemblyHelper.GetType("GraphicsMagick.ExifTag");
				return _ExifTag;
			}
		}
		private static Type _ExifValue;
		public static Type ExifValue
		{
			get
			{
				if (_ExifValue == null)
					_ExifValue = AssemblyHelper.GetType("GraphicsMagick.ExifValue");
				return _ExifValue;
			}
		}
		private static Type _FillRule;
		public static Type FillRule
		{
			get
			{
				if (_FillRule == null)
					_FillRule = AssemblyHelper.GetType("GraphicsMagick.FillRule");
				return _FillRule;
			}
		}
		private static Type _FilterType;
		public static Type FilterType
		{
			get
			{
				if (_FilterType == null)
					_FilterType = AssemblyHelper.GetType("GraphicsMagick.FilterType");
				return _FilterType;
			}
		}
		private static Type _FontStretch;
		public static Type FontStretch
		{
			get
			{
				if (_FontStretch == null)
					_FontStretch = AssemblyHelper.GetType("GraphicsMagick.FontStretch");
				return _FontStretch;
			}
		}
		private static Type _FontStyleType;
		public static Type FontStyleType
		{
			get
			{
				if (_FontStyleType == null)
					_FontStyleType = AssemblyHelper.GetType("GraphicsMagick.FontStyleType");
				return _FontStyleType;
			}
		}
		private static Type _FontWeight;
		public static Type FontWeight
		{
			get
			{
				if (_FontWeight == null)
					_FontWeight = AssemblyHelper.GetType("GraphicsMagick.FontWeight");
				return _FontWeight;
			}
		}
		private static Type _GifDisposeMethod;
		public static Type GifDisposeMethod
		{
			get
			{
				if (_GifDisposeMethod == null)
					_GifDisposeMethod = AssemblyHelper.GetType("GraphicsMagick.GifDisposeMethod");
				return _GifDisposeMethod;
			}
		}
		private static Type _GraphicsMagickNET;
		public static Type GraphicsMagickNET
		{
			get
			{
				if (_GraphicsMagickNET == null)
					_GraphicsMagickNET = AssemblyHelper.GetType("GraphicsMagick.GraphicsMagickNET");
				return _GraphicsMagickNET;
			}
		}
		private static Type _Gravity;
		public static Type Gravity
		{
			get
			{
				if (_Gravity == null)
					_Gravity = AssemblyHelper.GetType("GraphicsMagick.Gravity");
				return _Gravity;
			}
		}
		private static Type _ImageProfile;
		public static Type ImageProfile
		{
			get
			{
				if (_ImageProfile == null)
					_ImageProfile = AssemblyHelper.GetType("GraphicsMagick.ImageProfile");
				return _ImageProfile;
			}
		}
		private static Type _Interlace;
		public static Type Interlace
		{
			get
			{
				if (_Interlace == null)
					_Interlace = AssemblyHelper.GetType("GraphicsMagick.Interlace");
				return _Interlace;
			}
		}
		private static Type _IptcProfile;
		public static Type IptcProfile
		{
			get
			{
				if (_IptcProfile == null)
					_IptcProfile = AssemblyHelper.GetType("GraphicsMagick.IptcProfile");
				return _IptcProfile;
			}
		}
		private static Type _IptcTag;
		public static Type IptcTag
		{
			get
			{
				if (_IptcTag == null)
					_IptcTag = AssemblyHelper.GetType("GraphicsMagick.IptcTag");
				return _IptcTag;
			}
		}
		private static Type _IptcValue;
		public static Type IptcValue
		{
			get
			{
				if (_IptcValue == null)
					_IptcValue = AssemblyHelper.GetType("GraphicsMagick.IptcValue");
				return _IptcValue;
			}
		}
		private static Type _LineCap;
		public static Type LineCap
		{
			get
			{
				if (_LineCap == null)
					_LineCap = AssemblyHelper.GetType("GraphicsMagick.LineCap");
				return _LineCap;
			}
		}
		private static Type _LineJoin;
		public static Type LineJoin
		{
			get
			{
				if (_LineJoin == null)
					_LineJoin = AssemblyHelper.GetType("GraphicsMagick.LineJoin");
				return _LineJoin;
			}
		}
		private static Type _LogEventArgs;
		public static Type LogEventArgs
		{
			get
			{
				if (_LogEventArgs == null)
					_LogEventArgs = AssemblyHelper.GetType("GraphicsMagick.LogEventArgs");
				return _LogEventArgs;
			}
		}
		private static Type _MagickColor;
		public static Type MagickColor
		{
			get
			{
				if (_MagickColor == null)
					_MagickColor = AssemblyHelper.GetType("GraphicsMagick.MagickColor");
				return _MagickColor;
			}
		}
		private static Type _MagickErrorInfo;
		public static Type MagickErrorInfo
		{
			get
			{
				if (_MagickErrorInfo == null)
					_MagickErrorInfo = AssemblyHelper.GetType("GraphicsMagick.MagickErrorInfo");
				return _MagickErrorInfo;
			}
		}
		private static Type _MagickFormat;
		public static Type MagickFormat
		{
			get
			{
				if (_MagickFormat == null)
					_MagickFormat = AssemblyHelper.GetType("GraphicsMagick.MagickFormat");
				return _MagickFormat;
			}
		}
		private static Type _NullableMagickFormat;
		public static Type NullableMagickFormat
		{
			get
			{
				if (_NullableMagickFormat == null)
					_NullableMagickFormat = typeof(Nullable<>).MakeGenericType(MagickFormat);
				return _NullableMagickFormat;
			}
		}
		private static Type _MagickFormatInfo;
		public static Type MagickFormatInfo
		{
			get
			{
				if (_MagickFormatInfo == null)
					_MagickFormatInfo = AssemblyHelper.GetType("GraphicsMagick.MagickFormatInfo");
				return _MagickFormatInfo;
			}
		}
		private static Type _MagickGeometry;
		public static Type MagickGeometry
		{
			get
			{
				if (_MagickGeometry == null)
					_MagickGeometry = AssemblyHelper.GetType("GraphicsMagick.MagickGeometry");
				return _MagickGeometry;
			}
		}
		private static Type _MagickImage;
		public static Type MagickImage
		{
			get
			{
				if (_MagickImage == null)
					_MagickImage = AssemblyHelper.GetType("GraphicsMagick.MagickImage");
				return _MagickImage;
			}
		}
		private static Type _IEnumerableMagickImage;
		public static Type IEnumerableMagickImage
		{
			get
			{
				if (_IEnumerableMagickImage == null)
					_IEnumerableMagickImage = typeof(IEnumerable<>).MakeGenericType(MagickImage);
				return _IEnumerableMagickImage;
			}
		}
		private static Type _MagickImageCollection;
		public static Type MagickImageCollection
		{
			get
			{
				if (_MagickImageCollection == null)
					_MagickImageCollection = AssemblyHelper.GetType("GraphicsMagick.MagickImageCollection");
				return _MagickImageCollection;
			}
		}
		private static Type _MagickImageInfo;
		public static Type MagickImageInfo
		{
			get
			{
				if (_MagickImageInfo == null)
					_MagickImageInfo = AssemblyHelper.GetType("GraphicsMagick.MagickImageInfo");
				return _MagickImageInfo;
			}
		}
		private static Type _MagickReadSettings;
		public static Type MagickReadSettings
		{
			get
			{
				if (_MagickReadSettings == null)
					_MagickReadSettings = AssemblyHelper.GetType("GraphicsMagick.MagickReadSettings");
				return _MagickReadSettings;
			}
		}
		private static Type _MagickScript;
		public static Type MagickScript
		{
			get
			{
				if (_MagickScript == null)
					_MagickScript = AssemblyHelper.GetType("GraphicsMagick.MagickScript");
				return _MagickScript;
			}
		}
		private static Type _NoiseType;
		public static Type NoiseType
		{
			get
			{
				if (_NoiseType == null)
					_NoiseType = AssemblyHelper.GetType("GraphicsMagick.NoiseType");
				return _NoiseType;
			}
		}
		private static Type _OrientationType;
		public static Type OrientationType
		{
			get
			{
				if (_OrientationType == null)
					_OrientationType = AssemblyHelper.GetType("GraphicsMagick.OrientationType");
				return _OrientationType;
			}
		}
		private static Type _PaintMethod;
		public static Type PaintMethod
		{
			get
			{
				if (_PaintMethod == null)
					_PaintMethod = AssemblyHelper.GetType("GraphicsMagick.PaintMethod");
				return _PaintMethod;
			}
		}
		private static Type _PathArc;
		public static Type PathArc
		{
			get
			{
				if (_PathArc == null)
					_PathArc = AssemblyHelper.GetType("GraphicsMagick.PathArc");
				return _PathArc;
			}
		}
		private static Type _IEnumerablePathArc;
		public static Type IEnumerablePathArc
		{
			get
			{
				if (_IEnumerablePathArc == null)
					_IEnumerablePathArc = typeof(IEnumerable<>).MakeGenericType(PathArc);
				return _IEnumerablePathArc;
			}
		}
		private static Type _PathArcAbs;
		public static Type PathArcAbs
		{
			get
			{
				if (_PathArcAbs == null)
					_PathArcAbs = AssemblyHelper.GetType("GraphicsMagick.PathArcAbs");
				return _PathArcAbs;
			}
		}
		private static Type _PathArcRel;
		public static Type PathArcRel
		{
			get
			{
				if (_PathArcRel == null)
					_PathArcRel = AssemblyHelper.GetType("GraphicsMagick.PathArcRel");
				return _PathArcRel;
			}
		}
		private static Type _PathBase;
		public static Type PathBase
		{
			get
			{
				if (_PathBase == null)
					_PathBase = AssemblyHelper.GetType("GraphicsMagick.PathBase");
				return _PathBase;
			}
		}
		private static Type _IEnumerablePathBase;
		public static Type IEnumerablePathBase
		{
			get
			{
				if (_IEnumerablePathBase == null)
					_IEnumerablePathBase = typeof(IEnumerable<>).MakeGenericType(PathBase);
				return _IEnumerablePathBase;
			}
		}
		private static Type _PathClosePath;
		public static Type PathClosePath
		{
			get
			{
				if (_PathClosePath == null)
					_PathClosePath = AssemblyHelper.GetType("GraphicsMagick.PathClosePath");
				return _PathClosePath;
			}
		}
		private static Type _PathCurveto;
		public static Type PathCurveto
		{
			get
			{
				if (_PathCurveto == null)
					_PathCurveto = AssemblyHelper.GetType("GraphicsMagick.PathCurveto");
				return _PathCurveto;
			}
		}
		private static Type _IEnumerablePathCurveto;
		public static Type IEnumerablePathCurveto
		{
			get
			{
				if (_IEnumerablePathCurveto == null)
					_IEnumerablePathCurveto = typeof(IEnumerable<>).MakeGenericType(PathCurveto);
				return _IEnumerablePathCurveto;
			}
		}
		private static Type _PathCurvetoAbs;
		public static Type PathCurvetoAbs
		{
			get
			{
				if (_PathCurvetoAbs == null)
					_PathCurvetoAbs = AssemblyHelper.GetType("GraphicsMagick.PathCurvetoAbs");
				return _PathCurvetoAbs;
			}
		}
		private static Type _PathCurvetoRel;
		public static Type PathCurvetoRel
		{
			get
			{
				if (_PathCurvetoRel == null)
					_PathCurvetoRel = AssemblyHelper.GetType("GraphicsMagick.PathCurvetoRel");
				return _PathCurvetoRel;
			}
		}
		private static Type _PathLinetoAbs;
		public static Type PathLinetoAbs
		{
			get
			{
				if (_PathLinetoAbs == null)
					_PathLinetoAbs = AssemblyHelper.GetType("GraphicsMagick.PathLinetoAbs");
				return _PathLinetoAbs;
			}
		}
		private static Type _PathLinetoHorizontalAbs;
		public static Type PathLinetoHorizontalAbs
		{
			get
			{
				if (_PathLinetoHorizontalAbs == null)
					_PathLinetoHorizontalAbs = AssemblyHelper.GetType("GraphicsMagick.PathLinetoHorizontalAbs");
				return _PathLinetoHorizontalAbs;
			}
		}
		private static Type _PathLinetoHorizontalRel;
		public static Type PathLinetoHorizontalRel
		{
			get
			{
				if (_PathLinetoHorizontalRel == null)
					_PathLinetoHorizontalRel = AssemblyHelper.GetType("GraphicsMagick.PathLinetoHorizontalRel");
				return _PathLinetoHorizontalRel;
			}
		}
		private static Type _PathLinetoRel;
		public static Type PathLinetoRel
		{
			get
			{
				if (_PathLinetoRel == null)
					_PathLinetoRel = AssemblyHelper.GetType("GraphicsMagick.PathLinetoRel");
				return _PathLinetoRel;
			}
		}
		private static Type _PathLinetoVerticalAbs;
		public static Type PathLinetoVerticalAbs
		{
			get
			{
				if (_PathLinetoVerticalAbs == null)
					_PathLinetoVerticalAbs = AssemblyHelper.GetType("GraphicsMagick.PathLinetoVerticalAbs");
				return _PathLinetoVerticalAbs;
			}
		}
		private static Type _PathLinetoVerticalRel;
		public static Type PathLinetoVerticalRel
		{
			get
			{
				if (_PathLinetoVerticalRel == null)
					_PathLinetoVerticalRel = AssemblyHelper.GetType("GraphicsMagick.PathLinetoVerticalRel");
				return _PathLinetoVerticalRel;
			}
		}
		private static Type _PathMovetoAbs;
		public static Type PathMovetoAbs
		{
			get
			{
				if (_PathMovetoAbs == null)
					_PathMovetoAbs = AssemblyHelper.GetType("GraphicsMagick.PathMovetoAbs");
				return _PathMovetoAbs;
			}
		}
		private static Type _PathMovetoRel;
		public static Type PathMovetoRel
		{
			get
			{
				if (_PathMovetoRel == null)
					_PathMovetoRel = AssemblyHelper.GetType("GraphicsMagick.PathMovetoRel");
				return _PathMovetoRel;
			}
		}
		private static Type _PathQuadraticCurveto;
		public static Type PathQuadraticCurveto
		{
			get
			{
				if (_PathQuadraticCurveto == null)
					_PathQuadraticCurveto = AssemblyHelper.GetType("GraphicsMagick.PathQuadraticCurveto");
				return _PathQuadraticCurveto;
			}
		}
		private static Type _IEnumerablePathQuadraticCurveto;
		public static Type IEnumerablePathQuadraticCurveto
		{
			get
			{
				if (_IEnumerablePathQuadraticCurveto == null)
					_IEnumerablePathQuadraticCurveto = typeof(IEnumerable<>).MakeGenericType(PathQuadraticCurveto);
				return _IEnumerablePathQuadraticCurveto;
			}
		}
		private static Type _PathQuadraticCurvetoAbs;
		public static Type PathQuadraticCurvetoAbs
		{
			get
			{
				if (_PathQuadraticCurvetoAbs == null)
					_PathQuadraticCurvetoAbs = AssemblyHelper.GetType("GraphicsMagick.PathQuadraticCurvetoAbs");
				return _PathQuadraticCurvetoAbs;
			}
		}
		private static Type _PathQuadraticCurvetoRel;
		public static Type PathQuadraticCurvetoRel
		{
			get
			{
				if (_PathQuadraticCurvetoRel == null)
					_PathQuadraticCurvetoRel = AssemblyHelper.GetType("GraphicsMagick.PathQuadraticCurvetoRel");
				return _PathQuadraticCurvetoRel;
			}
		}
		private static Type _PathSmoothCurvetoAbs;
		public static Type PathSmoothCurvetoAbs
		{
			get
			{
				if (_PathSmoothCurvetoAbs == null)
					_PathSmoothCurvetoAbs = AssemblyHelper.GetType("GraphicsMagick.PathSmoothCurvetoAbs");
				return _PathSmoothCurvetoAbs;
			}
		}
		private static Type _PathSmoothCurvetoRel;
		public static Type PathSmoothCurvetoRel
		{
			get
			{
				if (_PathSmoothCurvetoRel == null)
					_PathSmoothCurvetoRel = AssemblyHelper.GetType("GraphicsMagick.PathSmoothCurvetoRel");
				return _PathSmoothCurvetoRel;
			}
		}
		private static Type _PathSmoothQuadraticCurvetoAbs;
		public static Type PathSmoothQuadraticCurvetoAbs
		{
			get
			{
				if (_PathSmoothQuadraticCurvetoAbs == null)
					_PathSmoothQuadraticCurvetoAbs = AssemblyHelper.GetType("GraphicsMagick.PathSmoothQuadraticCurvetoAbs");
				return _PathSmoothQuadraticCurvetoAbs;
			}
		}
		private static Type _PathSmoothQuadraticCurvetoRel;
		public static Type PathSmoothQuadraticCurvetoRel
		{
			get
			{
				if (_PathSmoothQuadraticCurvetoRel == null)
					_PathSmoothQuadraticCurvetoRel = AssemblyHelper.GetType("GraphicsMagick.PathSmoothQuadraticCurvetoRel");
				return _PathSmoothQuadraticCurvetoRel;
			}
		}
		private static Type _Percentage;
		public static Type Percentage
		{
			get
			{
				if (_Percentage == null)
					_Percentage = AssemblyHelper.GetType("GraphicsMagick.Percentage");
				return _Percentage;
			}
		}
		private static Type _Pixel;
		public static Type Pixel
		{
			get
			{
				if (_Pixel == null)
					_Pixel = AssemblyHelper.GetType("GraphicsMagick.Pixel");
				return _Pixel;
			}
		}
		private static Type _IEnumerablePixel;
		public static Type IEnumerablePixel
		{
			get
			{
				if (_IEnumerablePixel == null)
					_IEnumerablePixel = typeof(IEnumerable<>).MakeGenericType(Pixel);
				return _IEnumerablePixel;
			}
		}
		private static Type _PixelBaseCollection;
		public static Type PixelBaseCollection
		{
			get
			{
				if (_PixelBaseCollection == null)
					_PixelBaseCollection = AssemblyHelper.GetType("GraphicsMagick.PixelBaseCollection");
				return _PixelBaseCollection;
			}
		}
		private static Type _PixelCollection;
		public static Type PixelCollection
		{
			get
			{
				if (_PixelCollection == null)
					_PixelCollection = AssemblyHelper.GetType("GraphicsMagick.PixelCollection");
				return _PixelCollection;
			}
		}
		private static Type _PixelStorageSettings;
		public static Type PixelStorageSettings
		{
			get
			{
				if (_PixelStorageSettings == null)
					_PixelStorageSettings = AssemblyHelper.GetType("GraphicsMagick.PixelStorageSettings");
				return _PixelStorageSettings;
			}
		}
		private static Type _PointD;
		public static Type PointD
		{
			get
			{
				if (_PointD == null)
					_PointD = AssemblyHelper.GetType("GraphicsMagick.PointD");
				return _PointD;
			}
		}
		private static Type _QuantizeSettings;
		public static Type QuantizeSettings
		{
			get
			{
				if (_QuantizeSettings == null)
					_QuantizeSettings = AssemblyHelper.GetType("GraphicsMagick.QuantizeSettings");
				return _QuantizeSettings;
			}
		}
		private static Type _Quantum;
		public static Type Quantum
		{
			get
			{
				if (_Quantum == null)
					_Quantum = AssemblyHelper.GetType("GraphicsMagick.Quantum");
				return _Quantum;
			}
		}
		private static Type _QuantumOperator;
		public static Type QuantumOperator
		{
			get
			{
				if (_QuantumOperator == null)
					_QuantumOperator = AssemblyHelper.GetType("GraphicsMagick.QuantumOperator");
				return _QuantumOperator;
			}
		}
		private static Type _RenderingIntent;
		public static Type RenderingIntent
		{
			get
			{
				if (_RenderingIntent == null)
					_RenderingIntent = AssemblyHelper.GetType("GraphicsMagick.RenderingIntent");
				return _RenderingIntent;
			}
		}
		private static Type _Resolution;
		public static Type Resolution
		{
			get
			{
				if (_Resolution == null)
					_Resolution = AssemblyHelper.GetType("GraphicsMagick.Resolution");
				return _Resolution;
			}
		}
		private static Type _ScriptReadEventArgs;
		public static Type ScriptReadEventArgs
		{
			get
			{
				if (_ScriptReadEventArgs == null)
					_ScriptReadEventArgs = AssemblyHelper.GetType("GraphicsMagick.ScriptReadEventArgs");
				return _ScriptReadEventArgs;
			}
		}
		private static Type _ScriptVariables;
		public static Type ScriptVariables
		{
			get
			{
				if (_ScriptVariables == null)
					_ScriptVariables = AssemblyHelper.GetType("GraphicsMagick.ScriptVariables");
				return _ScriptVariables;
			}
		}
		private static Type _ScriptWriteEventArgs;
		public static Type ScriptWriteEventArgs
		{
			get
			{
				if (_ScriptWriteEventArgs == null)
					_ScriptWriteEventArgs = AssemblyHelper.GetType("GraphicsMagick.ScriptWriteEventArgs");
				return _ScriptWriteEventArgs;
			}
		}
		private static Type _SparseColorArg;
		public static Type SparseColorArg
		{
			get
			{
				if (_SparseColorArg == null)
					_SparseColorArg = AssemblyHelper.GetType("GraphicsMagick.SparseColorArg");
				return _SparseColorArg;
			}
		}
		private static Type _StorageType;
		public static Type StorageType
		{
			get
			{
				if (_StorageType == null)
					_StorageType = AssemblyHelper.GetType("GraphicsMagick.StorageType");
				return _StorageType;
			}
		}
		private static Type _TextDecoration;
		public static Type TextDecoration
		{
			get
			{
				if (_TextDecoration == null)
					_TextDecoration = AssemblyHelper.GetType("GraphicsMagick.TextDecoration");
				return _TextDecoration;
			}
		}
		private static Type _TypeMetric;
		public static Type TypeMetric
		{
			get
			{
				if (_TypeMetric == null)
					_TypeMetric = AssemblyHelper.GetType("GraphicsMagick.TypeMetric");
				return _TypeMetric;
			}
		}
		private static Type _VirtualPixelMethod;
		public static Type VirtualPixelMethod
		{
			get
			{
				if (_VirtualPixelMethod == null)
					_VirtualPixelMethod = AssemblyHelper.GetType("GraphicsMagick.VirtualPixelMethod");
				return _VirtualPixelMethod;
			}
		}
		private static Type _WarningEventArgs;
		public static Type WarningEventArgs
		{
			get
			{
				if (_WarningEventArgs == null)
					_WarningEventArgs = AssemblyHelper.GetType("GraphicsMagick.WarningEventArgs");
				return _WarningEventArgs;
			}
		}
		private static Type _WritablePixelCollection;
		public static Type WritablePixelCollection
		{
			get
			{
				if (_WritablePixelCollection == null)
					_WritablePixelCollection = AssemblyHelper.GetType("GraphicsMagick.WritablePixelCollection");
				return _WritablePixelCollection;
			}
		}
		private static Type _XmpProfile;
		public static Type XmpProfile
		{
			get
			{
				if (_XmpProfile == null)
					_XmpProfile = AssemblyHelper.GetType("GraphicsMagick.XmpProfile");
				return _XmpProfile;
			}
		}
		private static Type _NullableBoolean;
		public static Type NullableBoolean
		{
			get
			{
				if (_NullableBoolean == null)
					_NullableBoolean = typeof(Nullable<>).MakeGenericType(typeof(Boolean));
				return _NullableBoolean;
			}
		}
		private static Type _NullableInt32;
		public static Type NullableInt32
		{
			get
			{
				if (_NullableInt32 == null)
					_NullableInt32 = typeof(Nullable<>).MakeGenericType(typeof(Int32));
				return _NullableInt32;
			}
		}
	}
}
