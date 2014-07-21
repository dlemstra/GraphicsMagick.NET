/*
  Copyright (C) 2009-2013 GraphicsMagick Group

  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  Magick API common definitions support.
*/
#ifndef _MAGICK_COMMON_H
#define _MAGICK_COMMON_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/**
 ** Borland C++ Builder DLL compilation defines
 **/
#if defined(__BORLANDC__) && defined(_DLL)
#  pragma message("BCBMagick lib DLL export interface")
#  define _MAGICKDLL_
#  define _MAGICKLIB_
#  undef BuildMagickModules
#  define SupportMagickModules
#endif 

#if defined(MSWINDOWS) && !defined(__CYGWIN__)
#  if defined(_MT) && defined(_DLL) && !defined(_MAGICKDLL_) && !defined(_LIB)
#    define _MAGICKDLL_
#  endif
#  if defined(_MAGICKDLL_)
#    if defined(_VISUALC_)
#      pragma warning( disable: 4273 )  /* Disable the dll linkage warnings */
#    endif
#    if !defined(_MAGICKLIB_)
#      define MagickExport  __declspec(dllimport)
#      if defined(_VISUALC_)
#        pragma message( "Magick lib DLL import interface" )
#      endif
#    else
#      define MagickExport  __declspec(dllexport)
#      if defined(_VISUALC_)
#         pragma message( "Magick lib DLL export interface" )
#      endif
#    endif
#  else
#    define MagickExport
#    if defined(_VISUALC_)
#      pragma message( "Magick lib static interface" )
#    endif
#  endif
#  if defined(_DLL) && !defined(_LIB)
#    define ModuleExport  __declspec(dllexport)
#    if defined(_VISUALC_)
#      pragma message( "Magick module DLL export interface" ) 
#    endif
#  else
#    define ModuleExport
#    if defined(_VISUALC_)
#      pragma message( "Magick module static interface" ) 
#    endif
#  endif
#  define MagickGlobal __declspec(thread)
#  if defined(_VISUALC_)
#    pragma warning(disable : 4018)
#    pragma warning(disable : 4244)
#    pragma warning(disable : 4142)
#    pragma warning(disable : 4800)
#    pragma warning(disable : 4786)
#    pragma warning(disable : 4996) /* function deprecation warnings */
#  endif
#else
#  define MagickExport
#  define ModuleExport
#  define MagickGlobal
#endif

/*
  This size is the default minimum string allocation size (heap or
  stack) for a C string in GraphicsMagick.  The weird size is claimed
  to be based on 2*FILENAME_MAX (not including terminating NULL) on
  some antique system.  Linux has a FILENAME_MAX definition, but it is
  4096 bytes.  Many OSs have path limits of 1024 bytes.

  The FormatString() function assumes that the buffer it is writing to
  has at least this many bytes remaining.
*/
#if !defined(MaxTextExtent)
#  define MaxTextExtent  2053
#endif

#define MagickSignature  0xabacadabUL

#define MagickPassFail unsigned int
#define MagickPass     1
#define MagickFail     0

#define MagickBool     unsigned int
#define MagickTrue     1
#define MagickFalse    0

/*
  Support for __attribute__ was added in GCC 2.0.  It is not supported
  in strict ANSI mode which is indicated by __STRICT_ANSI__ being
  defined.

  http://www.ohse.de/uwe/articles/gcc-attributes.html

  Note that GCC 3.2 on MinGW does not define __GNUC__ or __GNUC_MINOR__.

*/
#if !defined(__attribute__)
#  if (!defined(__GNUC__) || (__GNUC__ < 2 || __STRICT_ANSI__))
#    define __attribute__(x) /*nothing*/
#  else
#    if (((__GNUC__) > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 1))) /* 3.1+ */
#      define MAGICK_FUNC_DEPRECATED __attribute__((__deprecated__))
#    endif
#    if (__GNUC__ >= 3)  /* 3.0+ */
#      define MAGICK_FUNC_MALLOC __attribute__((__malloc__))
#    endif
#    if (((__GNUC__) > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 3)))  /* 3.3+ */
  /* Supports argument syntax like __attribute__((nonnull (1, 2))) but
     don't know how to support non-GCC fallback. */
#      define MAGICK_FUNC_NONNULL __attribute__((__nonnull__))
#    endif
#    if (((__GNUC__) > 3) || ((__GNUC__ == 2) && (__GNUC_MINOR__ >= 5))) /* 2.5+ */
#      define MAGICK_FUNC_NORETURN __attribute__((__noreturn__))
#    endif
#    if ((__GNUC__) >= 3) /* 2.96+ */
#      define MAGICK_FUNC_PURE __attribute__((__pure__))
#    endif
#    if (((__GNUC__) > 3) || ((__GNUC__ == 2) && (__GNUC_MINOR__ >= 7))) /* 2.7+ */
#      define MAGICK_FUNC_UNUSED __attribute__((__unused__))
#    endif
#    if (((__GNUC__) > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 3)))  /* 3.3+ */
#      define MAGICK_FUNC_WARN_UNUSED_RESULT __attribute__((__warn_unused_result__))
#    endif
#    if (((__GNUC__) > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 3)))  /* 4.3+ */
#      define MAGICK_FUNC_ALLOC_SIZE_1ARG(arg_num) __attribute__((__alloc_size__(arg_num)))
#      define MAGICK_FUNC_ALLOC_SIZE_2ARG(arg_num1,arg_num2) __attribute__((__alloc_size__(arg_num1,arg_num2)))
#      define MAGICK_FUNC_HOT __attribute__((__hot__))
#      define MAGICK_FUNC_COLD __attribute__((__cold__))
#      define MAGICK_OPTIMIZE_FUNC(opt) __attribute__((__optimize__ (opt)))
#    endif
#    if (((__GNUC__) > 4) || ((__GNUC__ == 4) && (__GNUC_MINOR__ >= 7)))  /* 4.7+ */
#      define MAGICK_ASSUME_ALIGNED(exp,align) __builtin_assume_aligned(exp,align)
#      define MAGICK_ASSUME_ALIGNED_OFFSET(exp,align,offset) __builtin_assume_aligned(exp,align,offset)
#    endif
#  endif
#endif
#if !defined(MAGICK_FUNC_DEPRECATED)
#  define MAGICK_FUNC_DEPRECATED /*nothing*/
#endif
#if !defined(MAGICK_FUNC_MALLOC)
#  define MAGICK_FUNC_MALLOC /*nothing*/
#endif
#if !defined (MAGICK_FUNC_NONNULL)
#  define MAGICK_FUNC_NONNULL /*nothing*/
#endif
#if !defined (MAGICK_FUNC_NORETURN)
#  define MAGICK_FUNC_NORETURN /*nothing*/
#endif
#if !defined (MAGICK_FUNC_PURE)
#  define MAGICK_FUNC_PURE /*nothing*/
#endif
#if !defined (MAGICK_FUNC_UNUSED)
#  define MAGICK_FUNC_UNUSED /*nothing*/
#endif
#if !defined(MAGICK_FUNC_WARN_UNUSED_RESULT)
#  define MAGICK_FUNC_WARN_UNUSED_RESULT /*nothing*/
#endif
#if !defined(MAGICK_FUNC_ALLOC_SIZE_1ARG)
#  define MAGICK_FUNC_ALLOC_SIZE_1ARG(arg_num) /*nothing*/
#endif
#if !defined(MAGICK_FUNC_ALLOC_SIZE_2ARG)
#  define MAGICK_FUNC_ALLOC_SIZE_2ARG(arg_num1,arg_num2) /*nothing*/
#endif
#if !defined(MAGICK_FUNC_HOT)
#  define MAGICK_FUNC_HOT  /*nothing*/
#endif
#if !defined(MAGICK_FUNC_COLD)
#  define MAGICK_FUNC_COLD  /*nothing*/
#endif
#if !defined(MAGICK_ASSUME_ALIGNED)
#  define MAGICK_ASSUME_ALIGNED(exp,align) (exp)
#endif
#if !defined(MAGICK_ASSUME_ALIGNED_OFFSET)
#  define MAGICK_ASSUME_ALIGNED_OFFSET(exp,align,offset) (exp)
#endif
#if !defined(MAGICK_OPTIMIZE_FUNC)
#  define MAGICK_OPTIMIZE_FUNC(opt) /*nothing*/
#endif

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif /* _MAGICK_COMMON_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
