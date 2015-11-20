/*
  Copyright (C) 2003 - 2015 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  GraphicsMagick Application Programming Interface declarations.
*/
#ifndef _MAGICK_STUDIO_H
#define _MAGICK_STUDIO_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/*
  This define is not used by GraphicsMagick and it causes some headers
  from other installed packages (e.g. MinGW libpthread) to misbehave.
*/
#undef HAVE_CONFIG_H

/*
  Note that the WIN32 and WIN64 definitions are provided by the build
  configuration rather than the compiler.  Definitions available from the
  Windows compiler are _WIN32 and _WIN64.  Note that _WIN32 is defined if
  _WIN64 is defined.
*/
#if defined(WIN32) || defined(WIN64)
#  define MSWINDOWS
#endif /* defined(WIN32) || defined(WIN64) */

#if !defined(MSWINDOWS)
#  define POSIX
#endif /* !defined(MSWINDOWS) */

/*
  Private functions and types which are not part of the published API
  should only be exposed when MAGICK_IMPLEMENTATION is defined.
*/
#define MAGICK_IMPLEMENTATION 1

#include "magick/magick_config.h"
#if defined(__cplusplus) || defined(c_plusplus)
#  undef inline
#endif /* defined(__cplusplus) || defined(c_plusplus) */

/*
  Allow configuration of cache line size.  If smaller than actual cache line
  size, then performance may suffer due to false cache line sharing between
  threads.  Most CPUs have cache lines of 32 or 64 bytes.  IBM Power CPUs have
  cache lines of 128 bytes.
*/
/* FIXME: C pre-processor does not support comparing strings. */
/* #if defined(MAGICK_TARGET_CPU) && (MAGICK_TARGET_CPU == powerpc) */
/* #  define MAGICK_CACHE_LINE_SIZE 128 */
/* #else */
#  define MAGICK_CACHE_LINE_SIZE 64
/* #endif */


/*
  Support library symbol prefixing
*/
#if defined(PREFIX_MAGICK_SYMBOLS)
#  include "magick/symbols.h"
#endif /* defined(PREFIX_MAGICK_SYMBOLS) */

#if !defined(const)
  /*
    For some stupid reason the zlib headers define 'const' to nothing
    under AIX unless STDC is defined.
  */
#  define STDC
#endif /* !defined(const) */

/*
  For the Windows Visual C++ DLL build, use a Windows resource based
  message lookup table (i.e. use FormatMessage()).
 */
#if 0
  /*
    Currently disabled since feature only seems to work from
    a DLL
  */
#  if ((defined(MSWINDOWS) && defined(_DLL)) && !defined(__MINGW32__))
#    define MAGICK_WINDOWS_MESSAGE_TABLES 1
#  endif
#endif

#include <stdarg.h>
#include <stdio.h>
#if defined(MSWINDOWS) && defined(_DEBUG)
#  define _CRTDBG_MAP_ALLOC
#endif
#include <stdlib.h>
#if !defined(MSWINDOWS)
#  include <unistd.h>
#else
#  include <direct.h>
#  include <io.h>
#  if !defined(HAVE_STRERROR)
#    define HAVE_STRERROR
#  endif
#endif

/*
  Use fseeko() and ftello() if they are available since they use
  'off_t' rather than 'long'.  It is wrong to use fseeko() and
  ftello() only on systems with special LFS support since some systems
  (e.g. FreeBSD) support a 64-bit off_t by default.
*/
#if defined(HAVE_FSEEKO)
#  define fseek  fseeko
#  define ftell  ftello
#endif

#if !defined(ExtendedSignedIntegralType)
#  define ExtendedSignedIntegralType magick_int64_t
#endif
#if !defined(ExtendedUnsignedIntegralType)
#  define ExtendedUnsignedIntegralType magick_uint64_t
#endif

#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <errno.h>
#include <fcntl.h>
#include <math.h>
#include <time.h>
#include <limits.h>
#include <signal.h>
#include <assert.h>

#include <sys/types.h>
#include <sys/stat.h>

#if defined(HAVE_FTIME)
#  include <sys/timeb.h>
#endif

#if defined(HAVE_STDINT_H)
#  include <stdint.h>
#endif

#if defined(POSIX)
#  if defined(HAVE_SYS_NDIR_H) || defined(HAVE_SYS_DIR_H) || defined(HAVE_NDIR_H)
#    define dirent direct
#    define NAMLEN(dirent) (dirent)->d_namlen
#    if defined(HAVE_SYS_NDIR_H)
#      include <sys/ndir.h>
#    endif
#    if defined(HAVE_SYS_DIR_H)
#      include <sys/dir.h>
#    endif
#    if defined(HAVE_NDIR_H)
#      include <ndir.h>
#    endif
#  else
#    include <dirent.h>
#    define NAMLEN(dirent) strlen((dirent)->d_name)
#  endif
#  include <sys/wait.h>
#  if defined(HAVE_SYS_RESOURCE_H)
#    include <sys/resource.h>
#  endif /* defined(HAVE_SYS_RESOURCE_H)  */
#  if defined(HAVE_SYS_MMAN_H)
#    include <sys/mman.h>
#  endif /*  defined(HAVE_SYS_MMAN_H) */
#  include <pwd.h>
#endif

#if !defined(S_ISDIR)
#  define S_ISDIR(mode) (((mode) & S_IFMT) == S_IFDIR)
#endif

#if !defined(S_ISREG)
#  define S_ISREG(mode) (((mode) & S_IFMT) == S_IFREG)
#endif

/*
  Avoid shadowing system library globals and functions.
*/
#undef gamma
#define gamma gamma_magick
#undef swab
#define swab swab_magick
#undef y1
#define y1 y1_magick

/*
  Include common bits shared with api.h
*/
#include "magick/common.h"
/*
  Enable use of numeric message IDs and a translation table in order
  to support multiple locales.
 */
#define MAGICK_IDBASED_MESSAGES 1
#if defined(MAGICK_IDBASED_MESSAGES)
#  include "magick/locale_c.h"
#endif
#include "magick/magick_types.h"
#include "magick/image.h"
#include "magick/list.h"
#include "magick/memory.h"

#if !defined(MSWINDOWS)
#  include <sys/time.h>
#  if defined(HAVE_SYS_TIMES_H)
#    include <sys/times.h>
#  endif
#endif

#if defined(POSIX)
# include "magick/unix_port.h"
#endif /* defined(POSIX) */

#if defined(MSWINDOWS)
# include "magick/nt_base.h"
#endif /* defined(MSWINDOWS) */

#if defined(HAVE_MMAP_FILEIO) && !defined(MSWINDOWS)
# include <sys/mman.h>
#endif

#if defined(HAVE_PTHREAD)
# include <pthread.h>
#endif

#if defined(HAVE_POLL)
# include <sys/poll.h>
#endif

/*
  Work around OpenMP implementation bugs noticed in the Open64 5.0 compiler
  These workarounds will be removed once the bugs have been fixed in a release.
  Open64 5.0 provides these definitions:
  __OPENCC__ 5        -- OpenCC major version
  __OPENCC_MINOR__ 0  -- OpenCC minor version
  __OPEN64__ "5.0"    -- OpenCC stringified version
*/
#if defined(__OPENCC__)
#  undef USE_STATIC_SCHEDULING_ONLY
#  define USE_STATIC_SCHEDULING_ONLY 1
#endif

/*
  OpenMP support requires version 2.0 (March 2002) or later.
*/
#if defined(_OPENMP) && ((_OPENMP >= 200203) || defined(__OPENCC__))
#  include <omp.h>
#  define HAVE_OPENMP 1
#endif

#undef index
#undef pipe

/*
  If TRIO library is used, remap snprintf and vsnprintf to TRIO equivalents.
*/
#if defined(HasTRIO)
#  include <trio.h>
#  define snprintf trio_snprintf
#  define HAVE_SNPRINTF 1
#  define vsnprintf trio_vsnprintf
#  define HAVE_VSNPRINTF 1
#endif

/*
  Provide prototypes for several functions which are detected to be
  available, but which do not provide a prototype due to interface
  standards conformance (or a bug).
*/

#if defined(HAVE_PREAD) && defined(HAVE_DECL_PREAD) && !HAVE_DECL_PREAD
ssize_t pread(int fildes, void *buf, size_t nbyte, off_t offset);
#endif

#if defined(HAVE_PWRITE) && defined(HAVE_DECL_PWRITE) && !HAVE_DECL_PWRITE
ssize_t pwrite(int fildes, const void *buf, size_t nbyte, off_t offset);
#endif

#if defined(HAVE_STRLCPY) && defined(HAVE_DECL_STRLCPY) && !HAVE_DECL_STRLCPY
extern size_t strlcpy(char *dst, const char *src, size_t dstsize);
#endif

#if defined(HAVE_VSNPRINTF) && defined(HAVE_DECL_VSNPRINTF) && !HAVE_DECL_VSNPRINTF
extern int vsnprintf(char *s, size_t n, const char *format, va_list ap);
#endif

/*
  Some 64-bit int support.
*/
#if defined(HAVE_STRTOLL) && (SIZEOF_SIGNED_LONG < 8)
#  define MagickStrToL64(str,endptr,base) (strtoll(str,endptr,base))
#else
#  define MagickStrToL64(str,endptr,base) ((magick_int64_t) strtol(str,endptr,base))
#endif
#if defined(HAVE_ATOLL) && (SIZEOF_SIGNED_LONG < 8)
#  define MagickAtoL64(str) (atoll(str))
#else
#  define MagickAtoL64(str) ((magick_int64_t) atol(str))
#endif

/*
  Review these platform specific definitions.
*/
#if defined(POSIX)
#  define DirectorySeparator  "/"
#  define DirectoryListSeparator  ':'
#  define EditorOptions  " -title \"Edit Image Comment\" -e vi"
#  define Exit  exit
#  define IsBasenameSeparator(c)  ((c) == '/')
#  define PreferencesDefaults  "~/."
#  define ProcessPendingEvents(text)
#  define ReadCommandlLine(argc,argv)
#  define SetNotifyHandlers
#  define MagickSleep(seconds) sleep(seconds)
#endif

#if defined(MSWINDOWS)
#  define DirectorySeparator  "\\"
#  define DirectoryListSeparator  ';'
#  define EditorOptions ""
#  define IsBasenameSeparator(c)  (((c) == '/') || ((c) == '\\'))
#  define ProcessPendingEvents(text)
#  if !defined(PreferencesDefaults)
#     define PreferencesDefaults  "~\\."
#  endif /* PreferencesDefaults */
#  define ReadCommandlLine(argc,argv)
#  define SetNotifyHandlers \
    SetErrorHandler(NTErrorHandler); \
    SetWarningHandler(NTWarningHandler)
#  define MagickSleep(seconds)  Sleep(seconds*1000)
#  if !defined(HAVE_TIFFCONF_H)
#    define HAVE_TIFFCONF_H
#  endif
#endif /* defined(MSWINDOWS) */


/*
  Define declarations.
*/
#define AbsoluteValue(x)  ((x) < 0 ? -(x) : (x))
#define False  0
#define DegreesToRadians(x) (MagickPI*(x)/180.0)
#define MagickIncarnate(x)  InitializeMagick(x)
#define MagickEpsilon  1.0e-12
#define MagickPI  3.14159265358979323846264338327950288419716939937510
#define MagickSQ2PI 2.50662827463100024161235523934010416269302368164062
#define Max(x,y)  (((x) > (y)) ? (x) : (y))
#define Min(x,y)  (((x) < (y)) ? (x) : (y))
#define NumberOfObjectsInArray(octets,size) ((octets+size-1)/size)
#define QuantumTick(i,span) \
  ((((i) % ((Max(101,span)-1)/100)) == 0) || \
    ((magick_int64_t) (i) == ((magick_int64_t) (span)-1)))
#define RadiansToDegrees(x) (180.0*(x)/MagickPI)
#define RoundUpToAlignment(offset,alignment)				\
  (((offset)+((alignment)-1)) & ~((alignment)-1))
#define AssertAlignment(offset,alignment) \
  (assert((((size_t) offset) % (size_t) alignment) == (size_t) 0))
#define NormalizeDepthToOctet(depth) (depth < 8 ? 8 : \
  (depth < 16 ? 16 : (depth < 32 ? 32 : depth)))
#define ScaleColor5to8(x)  (((x) << 3) | ((x) >> 2))
#define ScaleColor6to8(x)  (((x) << 2) | ((x) >> 4))
#define Swap(x,y) ((x)^=(y), (y)^=(x), (x)^=(y))
#define True  1

#define DefineNameToString(value) #value
#define DefineValueToString(define) DefineNameToString(define)

/*
  atof(), atoi(), and atol() are legacy functions which might not be
  thread safe, might not enforce reasonable limits, and should not be
  used for new code.  So we implement them via strtod and strtol.
*/
#define MagickAtoF(str) (strtod(str, (char **)NULL))
#define MagickAtoI(str) ((int) strtol(str, (char **)NULL, 10))
#define MagickAtoL(str) (strtol(str, (char **)NULL, 10))

/*
  3D effects.
*/
#define AccentuateModulate  ScaleCharToQuantum(80)
#define HighlightModulate  ScaleCharToQuantum(125)
#define ShadowModulate  ScaleCharToQuantum(135)
#define DepthModulate  ScaleCharToQuantum(185)
#define TroughModulate  ScaleCharToQuantum(110)

/*
  Define system symbols if not already defined.
*/
#if !defined(STDIN_FILENO)
#  define STDIN_FILENO  0x00
#endif

#if !defined(O_BINARY)
#  define O_BINARY  0x00
#endif

#if !defined(MAP_FAILED)
#  define MAP_FAILED      ((void *) -1)
#endif

#if !defined(PATH_MAX)
#  define PATH_MAX 4096
#endif

#if defined(HasLTDL) || ( defined(MSWINDOWS) && defined(_DLL) )
#  define SupportMagickModules
#endif

#if defined(_MAGICKMOD_)
#  undef BuildMagickModules
#  define BuildMagickModules
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

#if defined(MSWINDOWS) && !defined(Windows95) && !defined(__BORLANDC__) && \
  !(defined(_MSC_VER) && _MSC_VER < 1400) && \
  !(defined(__MSVCRT_VERSION__) && __MSVCRT_VERSION__ < 0x800)

  /*
    Windows '95 and Borland C do not support _lseeki64
    Visual Studio does not support _fseeki64 and _ftelli64 until the 2005 release.
    Without these interfaces, files over 2GB in size are not supported for Windows.
  */
#  define MagickFseek(stream,offset,whence) _fseeki64(stream,/* __int64 */ offset,whence)
#  define MagickFstat(fildes,stat_buff) _fstati64(fildes,/* struct _stati64 */ stat_buff)
#  define MagickFtell(stream) /* __int64 */ _ftelli64(stream)
#  define MagickStatStruct_t struct _stati64
#  define MagickStat(path,stat_buff) _stati64(path,/* struct _stati64 */ stat_buff)
#else
#  define MagickFseek(stream,offset,whence) fseek(stream,offset,whence)
#  define MagickFstat(fildes,stat_buff) fstat(fildes,stat_buff)
#  define MagickFtell(stream) ftell(stream)
#  define MagickStatStruct_t struct stat
#  define MagickStat(path,stat_buff) stat(path,stat_buff)
#endif

/*
  C99 isblank() is not portable enough yet.
*/
#define MagickIsBlank(c) (c== ' ' || c == '\t')

#if !defined(MagickMmap)
#  define MagickMmap(address,length,protection,access,file,offset) \
     mmap(address,length,protection,access,file,offset)
#endif
#if !defined(MagickMsync)
#  define MagickMsync(addr,len,flags) msync(addr,len,flags)
#endif
#if !defined(MagickMunmap)
#  define MagickMunmap(addr,len) munmap(addr,len)
#endif
#if !defined(MagickFtruncate)
#  define MagickFtruncate(filedes,length) ftruncate(filedes,length)
#endif

#if !defined(HAVE_POPEN) && defined(HAVE__POPEN)
#  define HAVE_POPEN 1
#  define popen _popen
#endif /* !defined(HAVE_POPEN) && defined(HAVE__POPEN) */

#if !defined(HAVE_PCLOSE) && defined(HAVE__PCLOSE)
#  define HAVE_PCLOSE 1
#  define pclose _pclose
#endif /* !defined(HAVE_PCLOSE) && defined(HAVE__PCLOSE) */

#if defined(HAVE__EXIT)
#  define SignalHandlerExit _exit
#else
#  define SignalHandlerExit Exit
#endif /* defined(HAVE__EXIT) */

/*
  OpenMP function null replacements if not using OpenMP.
*/
#if !defined(HAVE_OPENMP)
#  undef omp_get_max_threads
#  define omp_get_max_threads() 1
#  undef omp_get_num_threads
#  define omp_get_num_threads() 1
#  undef omp_get_thread_num
#  define omp_get_thread_num() 0
#  undef omp_set_num_threads
#  define omp_set_num_threads(nthreads)
#endif /* !defined(HAVE_OPENMP) */


/*
  Image const declarations.
*/
extern MagickExport const char
  *BackgroundColor,
  *BorderColor,
  *DefaultTileFrame,
  *DefaultTileGeometry,
  *DefaultTileLabel,
  *ForegroundColor,
  *HighlightColor,
  *MatteColor,
  *PSDensityGeometry,
  *PSPageGeometry;

#define LoadImageText "[%s] Loading image: %lux%lu...  "
#define SaveImageText "[%s] Saving image: %lux%lu...  "
#define LoadImagesText "[%s] Loading images...  "
#define SaveImagesText "[%s] Saving images...  "

extern MagickExport const unsigned long
  DefaultCompressionQuality;

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif /* defined(__cplusplus) || defined(c_plusplus) */

#endif /* ifndef _MAGICK_STUDIO_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
