/*
  Copyright (C) 2003, 2004 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  GraphicsMagick Temporary File Management
*/

#ifndef _MAGICK_TEMPFILE_H
#define _MAGICK_TEMPFILE_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif /* defined(__cplusplus) || defined(c_plusplus) */

typedef enum
{
  BinaryFileIOMode,
  TextFileIOMode
} FileIOMode;


MagickExport MagickPassFail
  AcquireTemporaryFileName(char *filename),
  LiberateTemporaryFile(char *filename);

MagickExport int
  AcquireTemporaryFileDescriptor(char *filename);

MagickExport FILE *
  AcquireTemporaryFileStream(char *filename,FileIOMode mode);

#if defined(MAGICK_IMPLEMENTATION)

#define ThrowReaderTemporaryFileException(filename) \
{ \
  if ((image) == (Image *) NULL) \
    { \
    ThrowException(exception,FileOpenError,UnableToCreateTemporaryFile, \
      filename); \
    } \
  else \
    { \
      ThrowException(exception,FileOpenError,UnableToCreateTemporaryFile, \
        filename); \
      CloseBlob(image); \
      DestroyImageList(image); \
    } \
  return((Image *) NULL); \
}
#define ThrowWriterTemporaryFileException(filename) \
{ \
  assert(image != (Image *) NULL); \
  ThrowException(&(image)->exception,FileOpenError, \
    UnableToCreateTemporaryFile,filename); \
  if (image_info->adjoin) \
    while ((image)->previous != (Image *) NULL) \
      (image)=(image)->previous; \
  CloseBlob(image); \
  return(False); \
}

MagickExport void
  DestroyTemporaryFiles(void),
  PurgeTemporaryFiles(void),
  PurgeTemporaryFilesAsyncSafe(void);

extern MagickPassFail
  InitializeTemporaryFiles(void);

#endif /* MAGICK_IMPLEMENTATION */

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif /* defined(__cplusplus) || defined(c_plusplus) */

#endif /* _MAGICK_TEMPFILE_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
