/*
  Copyright (C) 2003 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  Windows NT Utility Methods for ImageMagick.
*/
#ifndef _MAGICK_NTFEATURE_H
#define _MAGICK_NTFEATURE_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#include "magick/render.h"

/*
  NT features routines.
*/
extern MagickExport char
  *NTRegistryKeyLookup(const char *key);

extern MagickExport void
  *CropImageToHBITMAP(Image *,const RectangleInfo *,ExceptionInfo *),
  *ImageToHBITMAP(Image* image);

#if !defined(XS_VERSION)

extern MagickExport unsigned int
  NTIsMagickConflict(const char *);

extern MagickExport TypeInfo
  * NTGetTypeList( void );

#endif /* !XS_VERSION */

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif /* !C++ */

#endif /* !_MAGICK_NTFEATURE_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
