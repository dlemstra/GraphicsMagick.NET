/*
  Copyright (C) 2005,2012 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
*/

#ifndef _MAGICK_TSD_H
#define _MAGICK_TSD_H

/*
  Thread specific data support.
*/

#if defined(HAVE_PTHREAD)
typedef pthread_key_t MagickTsdKey_t;
#elif defined(MSWINDOWS)
typedef DWORD MagickTsdKey_t;
#else
typedef void *MagickTsdKey_t;
#endif

extern MagickExport MagickPassFail
  MagickTsdKeyCreate2(MagickTsdKey_t *key,MagickFreeFunc destructor),
  MagickTsdKeyCreate(MagickTsdKey_t *key),
  MagickTsdKeyDelete(MagickTsdKey_t key),
  MagickTsdSetSpecific(MagickTsdKey_t key, const void *value);

extern MagickExport void
  *MagickTsdGetSpecific(MagickTsdKey_t key);

#endif /* _MAGICK_TSD_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
