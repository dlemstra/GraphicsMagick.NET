/*
  Copyright (C) 2003-2009 GraphicsMagick Group
  Copyright (C) 2003 ImageMagick Studio
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  GraphicsMagick Pixel Wand Methods.
*/
#ifndef _MAGICK_PIXEL_WAND_H
#define _MAGICK_PIXEL_WAND_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#include "wand/wand_symbols.h"

typedef struct _PixelWand PixelWand;

extern WandExport char
  *PixelGetColorAsString(const PixelWand *);

extern WandExport double
  PixelGetBlack(const PixelWand *),
  PixelGetBlue(const PixelWand *),
  PixelGetCyan(const PixelWand *),
  PixelGetGreen(const PixelWand *),
  PixelGetMagenta(const PixelWand *),
  PixelGetOpacity(const PixelWand *),
  PixelGetRed(const PixelWand *),
  PixelGetYellow(const PixelWand *);

extern WandExport PixelWand
  *ClonePixelWand(const PixelWand *),
  **ClonePixelWands(const PixelWand **,const unsigned long),
  *NewPixelWand(void),
  **NewPixelWands(const unsigned long);

extern WandExport Quantum
  PixelGetBlackQuantum(const PixelWand *),
  PixelGetBlueQuantum(const PixelWand *),
  PixelGetCyanQuantum(const PixelWand *),
  PixelGetGreenQuantum(const PixelWand *),
  PixelGetMagentaQuantum(const PixelWand *),
  PixelGetOpacityQuantum(const PixelWand *),
  PixelGetRedQuantum(const PixelWand *),
  PixelGetYellowQuantum(const PixelWand *);

extern WandExport unsigned int
  PixelSetColor(PixelWand *,const char *);

extern WandExport unsigned long
  PixelGetColorCount(const PixelWand *);

extern WandExport void
  DestroyPixelWand(PixelWand *),
  PixelGetQuantumColor(const PixelWand *,PixelPacket *),
  PixelSetBlack(PixelWand *,const double),
  PixelSetBlackQuantum(PixelWand *,const Quantum),
  PixelSetBlue(PixelWand *,const double),
  PixelSetBlueQuantum(PixelWand *,const Quantum),
  PixelSetColorCount(PixelWand *,const unsigned long),
  PixelSetCyan(PixelWand *,const double),
  PixelSetCyanQuantum(PixelWand *,const Quantum),
  PixelSetGreen(PixelWand *,const double),
  PixelSetGreenQuantum(PixelWand *,const Quantum),
  PixelSetMagenta(PixelWand *,const double),
  PixelSetMagentaQuantum(PixelWand *,const Quantum),
  PixelSetOpacity(PixelWand *,const double),
  PixelSetOpacityQuantum(PixelWand *,const Quantum),
  PixelSetQuantumColor(PixelWand *,PixelPacket *),
  PixelSetRed(PixelWand *,const double),
  PixelSetRedQuantum(PixelWand *,const Quantum),
  PixelSetYellow(PixelWand *,const double),
  PixelSetYellowQuantum(PixelWand *,const Quantum);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
