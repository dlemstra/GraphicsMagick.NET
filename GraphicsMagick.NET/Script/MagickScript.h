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

#include "ScriptReadEventArgs.h"
#include "ScriptVariables.h"
#include "ScriptWriteEventArgs.h"
#include "..\MagickImage.h"
#include "..\MagickImageCollection.h"
#include "..\Settings\MagickReadSettings.h"
#include "..\Drawables\Coordinate.h"
#include "..\Drawables\Base\Drawable.h"
#include "..\Drawables\Paths\Args\PathArc.h"
#include "..\Drawables\Paths\Args\PathCurveto.h"
#include "..\Drawables\Paths\Args\PathQuadraticCurveto.h"
#include "..\Drawables\Paths\Base\PathBase.h"

using namespace System::Xml;
using namespace System::Xml::XPath;
using namespace System::Collections::ObjectModel;

#if !(NET20)
using namespace System::Xml::Linq;
#endif

namespace GraphicsMagick
{
	///=============================================================================================
	///<summary>
	/// Class that can be used to execute a Magick Script Language file.
	///</summary>
	public ref class MagickScript sealed
	{
		//===========================================================================================
	private:
		//===========================================================================================
		static initonly XmlReaderSettings^ _ReaderSettings = CreateXmlReaderSettings();
		//===========================================================================================
		EventHandler<ScriptReadEventArgs^>^ _ReadHandler;
		XmlDocument^ _Script;
		ScriptVariables^ _Variables;
		EventHandler<ScriptWriteEventArgs^>^ _WriteHandler;
		//===========================================================================================
		MagickImage^ CreateMagickImage(XmlElement^ element);
		//===========================================================================================
		Collection<PathBase^>^ CreatePaths(XmlElement^ element);
		//===========================================================================================
		ImageProfile^ CreateProfile(XmlElement^ element);
		//===========================================================================================
		static XmlReaderSettings^ CreateXmlReaderSettings();
		//===========================================================================================
		void Execute(XmlElement^ element, MagickImage^ image);
		//===========================================================================================
		MagickImage^ Execute(XmlElement^ element, MagickImageCollection^ collection);
		//===========================================================================================
		void ExecuteClone(XmlElement^ element, MagickImage^ image);
		//===========================================================================================
		MagickImage^ ExecuteCollection(XmlElement^ element);
		//===========================================================================================
		void ExecuteDraw(XmlElement^ element, MagickImage^ image);
		//===========================================================================================
		void ExecuteWrite(XmlElement^ element, MagickImage^ image);
		//===========================================================================================
		void Initialize(Stream^ stream);
		//===========================================================================================
		void Initialize(XPathNavigator^ navigator);
		//===========================================================================================
		static bool OnlyContains(System::Collections::Hashtable^ arguments, ... array<Object^>^ keys);
		//===========================================================================================
		generic <class T>
		void SetArgument(System::Collections::Hashtable^ arguments, XmlAttribute^ attribute);
		//===========================================================================================
#include "Generated\Execute.h"
		//===========================================================================================
	public:
		///==========================================================================================
		///<summary>
		/// Initializes a new instance of the MagickScript class using the specified IXPathNavigable.
		///</summary>
		///<param name="xml">The IXPathNavigable that contains the script.</param>
		MagickScript(IXPathNavigable^ xml);
		///==========================================================================================
		///<summary>
		/// Initializes a new instance of the MagickScript class using the specified filename.
		///</summary>
		///<param name="fileName">The fully qualified name of the script file, or the relative script file name.</param>
		MagickScript(String^ fileName);
		///==========================================================================================
		///<summary>
		/// Initializes a new instance of the MagickScript class using the specified stream.
		///</summary>
		///<param name="stream">The stream to read the script data from.</param>
		MagickScript(Stream^ stream);
		///==========================================================================================
		///<summary>
		/// The variables of this script.
		///</summary>
		property ScriptVariables^ Variables
		{
			ScriptVariables^ get();
		}
		///==========================================================================================
		///<summary>
		/// Event that will be raised when the script needs an image to be read.
		///</summary>
		event EventHandler<ScriptReadEventArgs^>^ Read
		{
			void add(EventHandler<ScriptReadEventArgs^>^ handler);
			void remove(EventHandler<ScriptReadEventArgs^>^ handler);
		private:
			void raise(Object^ sender, ScriptReadEventArgs^ arguments);
		}
		///==========================================================================================
		///<summary>
		/// Event that will be raised when the script needs an image to be written.
		///</summary>
		event EventHandler<ScriptWriteEventArgs^>^ Write
		{
			void add(EventHandler<ScriptWriteEventArgs^>^ handler);
			void remove(EventHandler<ScriptWriteEventArgs^>^ handler);
		private:
			void raise(Object^ sender, ScriptWriteEventArgs^ arguments);
		}
		///==========================================================================================
		///<summary>
		/// Executes the script and returns the resulting image.
		///</summary>
		MagickImage^ Execute();
		///==========================================================================================
		///<summary>
		/// Executes the script using the specified image.
		///</summary>
		///<param name="image">The image to execute the script on.</param>
		void Execute(MagickImage^ image);
		//===========================================================================================
#if !(NET20)
		///==========================================================================================
		///<summary>
		/// Initializes a new instance of the MagickScript class using the specified XElement.
		///</summary>
		///<param name="xml">The XElement that contains the script.</param>
		MagickScript(XElement^ xml);
		//===========================================================================================
#endif
		//===========================================================================================
	};
	//==============================================================================================
}