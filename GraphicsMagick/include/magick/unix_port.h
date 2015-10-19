/*
  Copyright (C) 2007 GraphicsMagick Group
 
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

extern MagickExport long
  MagickGetMMUPageSize(void);

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
