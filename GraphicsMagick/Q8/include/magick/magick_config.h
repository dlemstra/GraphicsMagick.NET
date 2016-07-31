// This may look like C code, but it is really -*- C++ -*-
//
// Copyright (C) 2003, 2004 GraphicsMagick Group
// Copyright (C) 2002 ImageMagick Studio
// Copyright 1991-1999 E. I. du Pont de Nemours and Company
//
// This program is covered by multiple licenses, which are described in
// Copyright.txt. You should have received a copy of Copyright.txt with this
// package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.

//
// This header file is for compilation using Visual Studio for the
// WIN32 target environment.
//

// GraphicsMagick build feature configuration.  Please note that
// disabling a feature via this header file may not be sufficient to
// remove any library dependencies from the build.  The VisualMagick
// project files may need to be edited to remove libraries the feature
// depends on. When building a static GraphicsMagick, coder
// registrations are made via magick\static.c so if a format is
// removed, the call to its registration function should be commented
// out in static.c.  Note that VisualMagick configure updates
// magick\static.c so re-running configure may cause local changes to
// be lost.
//
// Note that by default GraphicsMagick is configured with a
// QuantumDepth of eight, has LZW compression enabled, and looks for
// all files in the directory where the executable is located.  The
// installed configuration (i.e.  the setup.exe-style installer) is
// modifying by defining "UseInstalledMagick".  If you would like to
// install GraphicsMagick using hard-coded paths, or want to use the
// Windows registry to install GraphicsMagick, then
// UseInstalledMagick" should be defined.
//
// Enabled options are of the form:
//
//   #define option
//
// while disabled options are initially in the form
//
//   // #undef option
//
// so it is necessary to remove the comment, and change "undef" to "define"
// in order for the option to be enabled.

/////////////
//
// QuantumDepth
//
// Specify size of PixelPacket color Quantums (8, 16, or 32).  A value
// of 8 uses half the memory than 16 and typically runs 30% faster,
// but provides 256 times less color resolution than a value of 16.  A
// value of 16 is recommended if it is desired that all features be
// fully supported but even a value of 8 allows reading 16-bit files
// (while losing precision).
#define QuantumDepth 8

/////////////
//
// UseInstalledMagick
//
// Define to build a GraphicsMagick which uses registry settings or
// hard-coded paths to locate installed components.  This supports
// using the "setup.exe" style installer, or using hard-coded path
// definitions (see below).  If you want to be able to simply copy
// the built GraphicsMagick to any directory on any machine, then do
// not use this setting.
// #undef UseInstalledMagick

/////////////
//
// ProvideDllMain
//
// When building GraphicsMagick using DLLs, include a DllMain()
// function which automatically invokes InitializeMagick(NULL), and
// DestroyMagick() so that the user doesn't need to.  Note that
// repeated calls to InitializeMagick() are ignored so if a path must
// be passed to InitializeMagick(), then disable this setting.
#undef ProvideDllMain


/////////////
//
// PREFIX_MAGICK_SYMBOLS
//
// Define if the symbols in the GraphicsMagick library should all be
// prefixed with "Gm" to ensure that there are no conflicts at the
// library level. Symbol renaming is done using the C preprocessor so
// there is still risk of conflict at the source level.
#undef PREFIX_MAGICK_SYMBOLS


/////////////
//
// DisableSlowOpenMP
//
// Define in order to disable use of OpenMP for quick algorithms which
// may run slower and slower rather than faster and faster as CPU
// cores are added.  Unfortunately some operating systems and hardware
// are not so good for OpenMP so that they incur considerable overhead
// and therefore only provide benefit for very slow algorithms.  Since
// the problematic algorithms are quick, the inability to speed them
// up is not much of a problem.
//
// From what we have seen, AMD server CPUs (Opteron family) always
// show a benefit from OpenMP, AMD desktop CPUs (e.g. Phenom X4) are
// ok, Intel Core 2 Dual core are ok, Intel Core 2 Quad and other
// Intel multi-chip modules (MCM) or older dual-CPU systems may
// perform poorly for lightweight algorithms.  If the CPU cores need
// to communicate via L3 cache or main memory, then performance may
// suffer unless this define is used.
#define DisableSlowOpenMP


/////////////
//
// EnableBrokenCoders
//
// Define in order to enable broken or potentially dangeous coders
// (file format support).  This should not be enabled for applications
// which may handle untrusted inputs such as file uploads from the Internet.
#undef EnableBrokenCoders


/////////////
//
// Optional packages
//
// All packages except autotrace and X11 are included by default in the build.

// Define to use the autotrace library (obtain sources seperately)
// #undef HasAUTOTRACE

// Define to use the bzip2 compression library
#define HasBZLIB

// Define to use the FlashPIX library (fpx module/subdirectory).
// FlashPix is no longer actively supported but it should still be
// discovered by the configure program and work if the source is
// extracted to a 'fpx' subdirectory.
// #undef HasFPX

// Define to use the JBIG library
#undef HasJBIG

// Define to use the Jasper JPEG v2 library
#define HasJP2

// Define to use the IJG JPEG v1 library
#define HasJPEG

// Define to use the "little" Color Management System (LCMS) library
#define HasLCMS

// Define to use the PNG library
#define HasPNG

// Define to use the TIFF library
#define HasTIFF

// Define to use the FreeType (TrueType & Postscript font support) library
#define HasTTF

// Define to use the WebP library
#define HasWEBP

// Define to use the Windows GDI32 library (for clipboard and emf modules)
#define HasWINGDI32

// Define to use the libwmf WMF parsing library
#define HasWMFlite

/////////////
//
// HasX11
//
// Define if MIT X11 is available (or stubbed) X11 is required in
// order for the 'animate', 'display', and 'import' commands to be
// available.  X11 is not usually available under Windows since it
// requires that another package be installed such as Cygwin's X11.
// If you know what X11 is and actually plan to use it, then define
// HasX11.
// #undef HasX11

// Define to use the GNOME XML library
#define HasXML

// Define to use the zlib ZIP compression library
#define HasZLIB

/////////////
//
// Hard Coded Paths
//
// If hard-coded paths are defined via the the following define
// statements, then they will override any values from the Windows
// registry.
// It is unusual to use hard-coded paths under Windows.

// Optional: Specify where X11 application resource files are installed
// #define ApplicationDefaults "c:\\GraphicsMagick\\"

// Optional: Specify where user-specific X11 application resource files are installed
// #define PreferencesDefaults  "~\\."

// Optional: Specify where gm.exe and support executables are installed
// #define MagickBinPath       "c:\\GraphicsMagick\\"

// Optional: Specify where operating system specific files are installed
// #define MagickLibPath       "c:\\GraphicsMagick\\"

// Optional: Specify name of the library that contains the mgk resource files
#define MagickLibName "GraphicsMagick.NET-x64.dll"

// Optional: Specify where operating system independent files are installed
// #define MagickSharePath     "c:\\GraphicsMagick\\"

// Optional: Specify where coder modules (DLLs) are installed
// #define MagickCoderModulesPath   "c:\\GraphicsMagick\\"

// Optional: Specify where filter modules (DLLs) are installed
// #define MagickFilterModulesPath   "c:\\GraphicsMagick\\"

/////////////
//
// The remaining defines should not require user modification.
//
#define HAVE_SYS_TYPES_H 1
#define HAVE_LCMS2_H 1  // Using LCMS2
