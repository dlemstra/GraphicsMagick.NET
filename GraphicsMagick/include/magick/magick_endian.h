/*
  Copyright (C) 2005 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.

  Word-swapping functions.
*/
extern MagickExport void
  MagickReverseBits(unsigned char *cp, size_t n),
  MagickSwabArrayOfDouble(double *dp, size_t n),
  MagickSwabArrayOfFloat(float *fp, size_t n),
  MagickSwabArrayOfUInt16(magick_uint16_t *wp, size_t n),
  MagickSwabArrayOfUInt32(magick_uint32_t *lp, size_t n),
  MagickSwabDouble(double *dp),
  MagickSwabFloat(float *fp),
  MagickSwabUInt16(magick_uint16_t *wp),
  MagickSwabUInt32(magick_uint32_t *lp);

extern MagickExport const unsigned char
  *MagickGetBitRevTable(int);

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
