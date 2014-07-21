/*
  Copyright (C) 2003 - 2009 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
  Copyright 1991-1999 E. I. du Pont de Nemours and Company
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  GraphicsMagick Colormap Methods
*/
#ifndef _MAGICK_COLORMAP_H
#define _MAGICK_COLORMAP_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/*
  Include declarations.
*/
#include "magick/image.h"
#include "magick/error.h"

extern MagickExport MagickPassFail
  AllocateImageColormap(Image *,const unsigned long),
  CycleColormapImage(Image *image,const int amount),
  ReplaceImageColormap(Image *image,const PixelPacket *colormap,
    const unsigned int colors),
  SortColormapByIntensity(Image *);

#if defined(MAGICK_IMPLEMENTATION)

#define VerifyColormapIndex(image,index) \
{ \
  if (index >= image->colors) \
    index=MagickConstrainColormapIndex(image,index); \
}

extern MagickExport unsigned int
  MagickConstrainColormapIndex(Image *image, unsigned int index);

#endif /* defined(MAGICK_IMPLEMENTATION) */

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif /* _MAGICK_COLORMAP_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
