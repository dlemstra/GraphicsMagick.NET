/*
  Copyright (C) 2003-2010 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  Methods to lock and unlock semaphores.
*/
#ifndef _MAGICK_SEMAPHORE_H
#define _MAGICK_SEMAPHORE_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

typedef struct _SemaphoreInfo SemaphoreInfo;

extern MagickExport SemaphoreInfo
  *AllocateSemaphoreInfo(void);

extern MagickExport void
  DestroySemaphoreInfo(SemaphoreInfo **),
  LockSemaphoreInfo(SemaphoreInfo *),
  UnlockSemaphoreInfo(SemaphoreInfo *);


/*
  These are deprecated.
*/
extern MagickExport void
  AcquireSemaphoreInfo(SemaphoreInfo **) MAGICK_FUNC_DEPRECATED,
  LiberateSemaphoreInfo(SemaphoreInfo **) MAGICK_FUNC_DEPRECATED;

/*
  These should not be MagickExport.
*/
extern MagickExport void
  DestroySemaphore(void),
  InitializeSemaphore(void);

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
