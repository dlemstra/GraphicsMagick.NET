/*
  Copyright (C) 2008 - 2011 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  16/24 bit floating point conversion functions.

  Written by Richard Nolde, 2008

*/

#ifndef _MAGICK_FLOATS_H
#define _MAGICK_FLOATS_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif /* defined(__cplusplus) || defined(c_plusplus) */

#define RANGE_LIMITED 0
#define ZERO_LIMITED  1
#define STRICT_IEEE   2

typedef unsigned char  fp_16bits[2];
typedef unsigned char  fp_24bits[3];

extern MagickExport  int _Gm_convert_fp16_to_fp32 (const fp_16bits *fp16, float *fp32);

extern MagickExport int _Gm_convert_fp32_to_fp16 (const float *fp32, fp_16bits *fp16, const int mode);

extern MagickExport int _Gm_convert_fp24_to_fp32 (const fp_24bits *fp24, float *fp32, const int mode);

extern MagickExport int _Gm_convert_fp32_to_fp24 (const float *fp32, fp_24bits *fp24, const int mode);

#endif /* ifndef _MAGICK_FLOATS_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
