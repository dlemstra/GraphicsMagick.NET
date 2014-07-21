/*
  Copyright (C) 2010 - 2011 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
*/

#ifndef _MAGICK_PREFETCH_H
#define _MAGICK_PREFETCH_H

/*
  Prefetching pragmas and instrinsics support.

  http://blogs.sun.com/solarisdev/entry/new_article_prefetching
  http://gcc.gnu.org/projects/prefetch.html

  http://blog.metawrap.com/blog/x86CachePrefetch.aspx
  http://scripts.mit.edu/~birge/blog/accelerating-code-using-gccs-prefetch-extension/
  http://gcc.gnu.org/onlinedocs/gcc-3.4.6/gcc/Other-Builtins.html
  http://www.ibm.com/developerworks/linux/library/l-gcc-hacks/index.html
  http://gcc.gnu.org/onlinedocs/gcc-4.4.3/gcc/Other-Builtins.html#Other-Builtins
  http://docs.sun.com/app/docs/doc/820-7598/bjapp?a=view
*/

#if defined(HAVE_SUN_PREFETCH_H)
#  include <sun_prefetch.h>
#endif /* defined(HAVE_SUN_PREFETCH_H) */

/* Prefetch data that is likely to be read more than once */
#if defined(sun_prefetch_read_many)
#  define MAGICK_PREFETCH_READ_MANY(address) sun_prefetch_read_many(address)
#endif
#if ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 2)) || (__GNUC__ >= 4)
#  define MAGICK_PREFETCH_READ_MANY(address) __builtin_prefetch(address,0,3)
#endif

/* Prefetch data that is likely to be read only once */
#if defined(sun_prefetch_read_once)
#  define MAGICK_PREFETCH_READ_ONCE(address) sun_prefetch_read_once(address)
#endif
#if ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 2)) || (__GNUC__ >= 4)
#  define MAGICK_PREFETCH_READ_ONCE(address) __builtin_prefetch(address,0,0)
#endif

/* Prefetch data that is likely to be written more than once */
#if defined(sun_prefetch_write_many)
#  define MAGICK_PREFETCH_WRITE_MANY(address) sun_prefetch_write_many(address)
#endif
#if ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 2)) || (__GNUC__ >= 4)
#  define MAGICK_PREFETCH_WRITE_MANY(address) __builtin_prefetch(address,1,3)
#endif

/* Prefetch data that is likely to be written only once */
#if defined(sun_prefetch_write_once)
#  define MAGICK_PREFETCH_WRITE_ONCE(address) sun_prefetch_write_once(address)
#endif
#if ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 2)) || (__GNUC__ >= 4)
#  define MAGICK_PREFETCH_WRITE_ONCE(address) __builtin_prefetch(address,1,0)
#endif

#endif /* _MAGICK_PREFETCH_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
