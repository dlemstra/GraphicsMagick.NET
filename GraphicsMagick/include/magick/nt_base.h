/*
  Copyright (C) 2003 - 2015 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  Windows NT Utility Methods for GraphicsMagick.
*/
#ifndef _MAGICK_NTBASE_H
#define _MAGICK_NTBASE_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

#include "magick/delegate.h"

#define WIN32_LEAN_AND_MEAN
#define VC_EXTRALEAN
#include <windows.h>
#include <winuser.h>
#include <wingdi.h>
#include <io.h>
#include <process.h>
#include <errno.h>
#include <malloc.h>
#if defined(_DEBUG)
#include <crtdbg.h>
#endif

/*
  Define declarations.
*/

#define F_OK 0
#define R_OK 4
#define W_OK 2
#define RW_OK 6
#define HAVE_VSNPRINTF 1
#define HAVE_RAISE 1
#define HAVE_SPAWNVP 1
#define HAVE_PROCESS_H 1

#if defined(_VISUALC_)
#  define HAVE_CRYPTGENRANDOM 1
#  define HAVE_WINCRYPT_H 1
#endif

/*
  POSIX definitions for standard file numbers for use with _read() or _write()
*/
#if !defined(STDIN_FILENO)
#  define STDIN_FILENO 0
#endif
#if !defined(STDOUT_FILENO)
#  define STDOUT_FILENO 1
#endif
#if !defined(STDERR_FILENO)
#  define STDERR_FILENO 2
#endif

/*
  Size type passed to read/write
*/
#define MAGICK_POSIX_IO_SIZE_T unsigned int

/*
  libtiff features.
*/

/* Define to 1 if you have the <tiffconf.h> header file. */
#define HAVE_TIFFCONF_H 1

/* Define to 1 if you have the `TIFFIsCODECConfigured' function. */
#define HAVE_TIFFISCODECCONFIGURED 1

/* Define to 1 if you have the `TIFFMergeFieldInfo' function. */
#define HAVE_TIFFMERGEFIELDINFO 1

/* Define to 1 if you have the `TIFFSetErrorHandlerExt' function. */
#define HAVE_TIFFSETERRORHANDLEREXT 1

/* Define to 1 if you have the `TIFFSetTagExtender' function. */
#define HAVE_TIFFSETTAGEXTENDER 1

/* Define to 1 if you have the `TIFFSetWarningHandlerExt' function. */
#define HAVE_TIFFSETWARNINGHANDLEREXT 1

/* Define to 1 if you have the `TIFFSwabArrayOfTriples' function. */
#define HAVE_TIFFSWABARRAYOFTRIPLES 1

/* Define to 1 if you have the <ft2build.h> header file. */
#define HAVE_FT2BUILD_H 1

// Define to support memory mapping files for improved performance
#define HAVE_MMAP_FILEIO 1

// Use Visual C++ C inline method extension to improve performance
#if !defined(inline)
#  define inline __inline
#endif

// Visual C++ does not usually seem to support the C'99 restrict keyword
// Maybe it will be added in some version.
#if defined(_VISUALC_)  /* && (_MSC_VER <= 1500) */
#  define restrict /* nothing */
#endif

#if !defined(chsize)
# if defined(__BORLANDC__)
#   define chsize(file,length) chsize(file,length)
# else
#   define chsize(file,length) _chsize(file,length)
# endif
#endif

#if !defined(hypot)
#  define hypot  _hypot
#endif

#if !defined(_MSC_VER) || (defined(_MSC_VER) && _MSC_VER < 1500)
#define vsnprintf _vsnprintf 
#endif

#if defined(_MT) && defined(MSWINDOWS)
#define SAFE_GLOBAL __declspec(thread)
#else
#define SAFE_GLOBAL
#endif

/*
  With Visual C++, Popen and pclose are available via _popen and _pclose.
  These are documented to work for console applications only.
*/
#define HAVE_POPEN 1
#define HAVE__POPEN 1
#if !defined(popen)
#  define popen(command,mode)  _popen(command,mode)
#endif /* !defined(popen) */
#define HAVE_PCLOSE 1
#define HAVE__PCLOSE 1
#if !defined(pclose)
#  define pclose(stream)  _pclose(stream)
#endif /* !defined(pclose) */

/*
  Visual C++ 7.0 supports GlobalMemoryStatusEx but MinGW headers and
  Visual C++ 6.0 lack support for it.

  _MSC_VER values:
    1100 MSVC 5.0
    1200 MSVC 6.0
    1300 MSVC 7.0 Visual C++ .NET 2002
    1310 Visual c++ .NET 2003
    1400 Visual C++ 2005
    1500 Visual C++ 2008
    1600 Visual C++ 2010
    1700 Visual C++ 2012
    1800 Visual C++ 2013
    1900 Visual C++ 2015

  Should look at __CLR_VER ("Defines the version of the common language
  runtime used when the application was compiled.") as well.
*/
#if defined(_VISUALC_) && (_MSC_VER >= 1310)
#  define HAVE_GLOBALMEMORYSTATUSEX 1
#endif

/*
  _aligned_malloc was introduced in Visual Studio .NET 2003.
  The feature is is introduced in msvcr71.dll and is capable of
  working on Windows '98 given that the correct run-time libraries
  are installed.
*/
#if ((defined(_VISUALC_) && (_MSC_VER >= 1310)) ||              \
     (defined(__MINGW32__) && (__MSVCRT_VERSION__ >= 0x0700)))
#  define HAVE__ALIGNED_MALLOC 1
#endif

/*
  Windows provides Unix-style access() via _access()
 */
#define HAVE_ACCESS 1
#define access(path,mode) _access(path,mode)

/*
  Windows provides Unix-style mkdir() via _mkdir() but it does not
  seem to accept a 'mode' argument.
 */
#define mkdir(path,mode) _mkdir(path)

/*
  Windows provides _commit() as a substitute for fsync()
*/
#define fsync(fd) _commit(fd)

#if !defined(isatty)
#  define isatty(x) _isatty(x)
#endif

#if !defined(fileno)
#  define fileno(x) _fileno(x)
#endif

#if !defined(unlink)
#  define unlink(path) _unlink(path)
#endif /* !defined(unlink) */

/*
  Typedef declarations.
*/
typedef UINT (CALLBACK *LPFNDLLFUNC1)(DWORD,UINT);

#if !defined(XS_VERSION) /* Not in Perl extension */

/*
  For POSIX, ssize_t is the type returned by _read and _write.
  Recent MinGW compilers include this typedef by default.

  Note that under WIN64 read/write appear to still return 'int' and use
  'unsigned int' rather than 'size_t' to specify the I/O size.  This really
  sucks!
 */
#if !defined(ssize_t) && !defined(__MINGW32__) && !defined(__MINGW64__)
#  if defined(WIN64)
  typedef __int64 ssize_t;
#  else
  typedef int ssize_t;
#  endif
#endif /* !defined(ssize_t) && !defined(__MINGW32__) && !defined(__MINGW64__)*/

#endif /* !defined(XS_VERSION) */

/*
  Bzlib is strange in that symbols from bzlib.h are DLL-exported by
  default rather than imported.  This feels like a bug to me.
*/
#if defined(HasBZLIB)
#  if defined(_WIN32)
#    define BZ_IMPORT 1
#  endif
#endif /* defined(HasBZLIB) */


/*
  NT utilities routines.
*/

extern MagickExport char
  *NTGetLastError(void);

/*
  Ghostscript DLL support.
*/
extern MagickExport int
  NTGhostscriptDLL(char *path, int path_length),
  NTGhostscriptEXE(char *path, int path_length),
  NTGhostscriptFonts(char *path, int path_length),
  NTGhostscriptLoadDLL(void),
  NTGhostscriptUnLoadDLL(void);

#if defined(MAGICK_IMPLEMENTATION)
extern MagickExport const GhostscriptVectors
  *NTGhostscriptDLLVectors( void );
#endif /* defined(MAGICK_IMPLEMENTATION) */

/*
  Directory access functions
*/
#if !defined(HAVE_DIRENT_H) || defined(__MINGW32__) || defined(__MINGW64__)
struct dirent
{
  char
    d_name[2048];

  int
    d_namlen;
};

typedef struct _DIR
{
  HANDLE
    hSearch;

  WIN32_FIND_DATA
    Win32FindData;

  BOOL
    firsttime;

  struct dirent
    file_info;
} DIR;

extern MagickExport long
  NTtelldir(DIR *);

extern MagickExport struct dirent
  *NTreaddir(DIR *);

extern MagickExport DIR
  *NTopendir(const char *);

extern MagickExport int
  NTclosedir(DIR *);

extern MagickExport void
  NTseekdir(DIR *,long);

#define closedir(dir) NTclosedir(dir)
#define opendir(path) NTopendir(path)
#define readdir(entry) NTreaddir(entry)
#define seekdir(entry,position) NTseekdir(entry,position)
#define telldir(entry) NTtelldir(entry)
#endif /* !defined(HAVE_DIRENT_H) */

/*
  System functions.
*/
extern MagickExport int
  NTSystemComman(const char *);

#if !defined(XS_VERSION)  /* Not in Perl extension */

/*
  Precision timing functions.
*/
extern MagickExport double
  NTElapsedTime(void),
  NTUserTime(void);

/*
  Memory mapped file support.
*/
#define PROT_NONE       0x0  // pages can not be accessed
#define PROT_READ       0x1  // pages can be read
#define PROT_WRITE      0x2  // pages can be written
#define MAP_SHARED      0x1  // share changes
#define MAP_PRIVATE     0x2  // changes are private
#define MAP_NORESERVE   0x4  // do not reserve paging space
#define MAP_ANON        0x8  // anonymous mapping
#if !defined(MAP_FAILED)
#  define MAP_FAILED      ((void *) -1) // returned on error by mmap
#endif
#define MS_ASYNC        0x0  // asynchronous page sync
#define MS_SYNC         0x1  // synchronous page sync

extern MagickExport void
  Exit(int) MAGICK_FUNC_NORETURN,
  *NTmmap(char *address,size_t length,int protection,int access,int file,
     magick_off_t offset);

extern MagickExport int
  NTftruncate(int filedes, off_t length),
  NTmsync(void *addr, size_t len, int flags),
  NTmunmap(void *addr, size_t len);

#define MagickMmap(address,length,protection,access,file,offset) \
  NTmmap(address,length,protection,access,file,offset)
#define MagickMsync(addr,len,flags) NTmsync(addr,len,flags)
#define MagickMunmap(addr,len) NTmunmap(addr,len)
#define MagickFtruncate(filedes,length) NTftruncate(filedes,length)

/*
  libltdl-like module loader wrappers
*/
#if !defined(HasLTDL)
extern MagickExport void
  *NTdlopen(const char *filename),
  *NTdlsym(void *handle, const char *name);

extern MagickExport int
  NTdlclose(void *handle),
  NTdlexit(void),
  NTdlinit(void),
  NTdlsetsearchpath(const char *);

extern MagickExport const char
  *NTdlerror(void);

#define lt_dlclose(handle) NTdlclose(handle)
#define lt_dlerror() NTdlerror()
#define lt_dlexit() NTdlexit()
#define lt_dlinit() NTdlinit()
#define lt_dlopen(filename) NTdlopen(filename)
#define lt_dlsetsearchpath(path) NTdlsetsearchpath(path)
#define lt_dlsym(handle,name) NTdlsym(handle,name)
#endif /* !defined(HasLTDL) */
  
extern MagickExport unsigned char
  *NTResourceToBlob(const char *);

extern MagickExport MagickPassFail
  NTGetExecutionPath(char *path);

extern MagickExport MagickBool
  IsWindows95(),
  NTKernelAPISupported(const char *name);

extern MagickExport void
  NTErrorHandler(const ExceptionType,const char *,const char *),
  NTWarningHandler(const ExceptionType,const char *,const char *);

extern MagickExport long
  MagickGetMMUPageSize();

extern MagickExport void
  NTInitializeExceptionHandlers();

#endif /* !XS_VERSION */

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif /* !C++ */

#endif /* !_MAGICK_NTBASE_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
