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

using System;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Web;

//=================================================================================================
#if Q8
[assembly: AssemblyTitle("GraphicsMagick.NET Q8 AnyCPU net40-client")]
#elif Q16
[assembly: AssemblyTitle("GraphicsMagick.NET Q16 AnyCPU net40-client")]
#else
#error Not implemented!
#endif
[assembly: AssemblyProduct("GraphicsMagick.NET")]
[assembly: AssemblyDescription("GraphicsMagick.NET.AnyCPU")]
[assembly: AssemblyCompany("")]
[assembly: AssemblyCopyright("Copyright © 2014-2015 Dirk Lemstra")]
[assembly: AssemblyTrademark("")]
//=================================================================================================
[assembly: AssemblyConfiguration("Release")]
[assembly: AssemblyCulture("")]
[assembly: AssemblyVersion("1.0.0.0")]
[assembly: AssemblyFileVersion("1.3.24.0")]
[assembly: ComVisible(false)]
[assembly: CLSCompliant(true)]
//=================================================================================================