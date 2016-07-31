/*
  Copyright (C) 2007-2016 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.

  Interfaces specific to Unix.
 
*/
#ifndef _UNIX_PORT_H
#define _UNIX_PORT_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif


/*
  I/O defines.
*/
#if defined(MSWINDOWS) && !defined(Windows95) && !defined(__BORLANDC__)
  /* Windows '95 and Borland C do not support _lseeki64 */
#  define MagickSeek(fildes,offset,whence)  _lseeki64(fildes,/* __int64 */ offset,whence)
#  define MagickTell(fildes) /* __int64 */ _telli64(fildes)
#else
#  define MagickSeek(fildes,offset,whence)  lseek(fildes,offset,whence)
#  define MagickTell(fildes) (MagickSeek(fildes,0,SEEK_CUR))
#endif

#define MagickFseek(stream,offset,whence) fseek(stream,offset,whence)
#define MagickFstat(fildes,stat_buff) fstat(fildes,stat_buff)
#define MagickFtell(stream) ftell(stream)
#define MagickStatStruct_t struct stat
#define MagickStat(path,stat_buff) stat(path,stat_buff)

extern MagickExport long
  MagickGetMMUPageSize(void);

extern MagickExport int
  MagickGetFileAttributes(const char *filename, struct stat *statbuf);

extern MagickExport int
  MagickSetFileAttributes(const char *filename, const struct stat *statbuf);

/*
  Size type passed to read/write
*/
#define MAGICK_POSIX_IO_SIZE_T size_t

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif /* _UNIX_PORT_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
