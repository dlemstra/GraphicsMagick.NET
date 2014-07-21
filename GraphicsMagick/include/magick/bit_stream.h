/*
  Copyright (C) 2003, 2005, 2009 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.

  Interfaces to deal with marshalling quantums to and from a bit-stream.
  Written by Bob Friesenhahn, September 2003
 
*/
#ifndef _MAGICK_BIT_STREAM_H
#define _MAGICK_BIT_STREAM_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

  /*
    Bit stream reader "handle"
  */
  typedef struct _BitStreamReadHandle
  {
    const unsigned char  *bytes;
    unsigned int          bits_remaining;
  } BitStreamReadHandle;

  /*
    Bit stream writer "handle"
  */
  typedef struct _BitStreamWriteHandle
  {
    unsigned char  *bytes;
    unsigned int    bits_remaining;
  } BitStreamWriteHandle;

  /*
    Word reading function.

    read_func_state  - state to pass to word reading function.
  */
  typedef unsigned long (*WordStreamReadFunc) (void *read_func_state);
  
  /*
    Word stream word reader "handle"
  */
  typedef struct _WordStreamReadHandle
  {
    magick_uint32_t      word;
    unsigned int         bits_remaining;
    WordStreamReadFunc   read_func;
    void                *read_func_state;
  } WordStreamReadHandle;

  /*
    Word writing function.

    write_func_state  - state to pass to word writing function.
    value             - value to write
    returns number of bytes written.
  */
  typedef size_t (*WordStreamWriteFunc) (void *write_func_state,
                                         const unsigned long value);

  /*
    Word stream writer "handle"
  */
  typedef struct _WordStreamWriteHandle
  {
    magick_uint32_t      word;
    unsigned int         bits_remaining;
    WordStreamWriteFunc  write_func;
    void                *write_func_state;
  } WordStreamWriteHandle;

  extern MagickExport void
  MagickBitStreamInitializeRead(BitStreamReadHandle *bit_stream,
				const unsigned char *bytes);

  extern MagickExport unsigned int
  MagickBitStreamMSBRead(BitStreamReadHandle *bit_stream,
			 const unsigned int requested_bits);

  extern MagickExport void
  MagickBitStreamInitializeWrite(BitStreamWriteHandle *bit_stream,
				 unsigned char *bytes);

  extern MagickExport void
  MagickBitStreamMSBWrite(BitStreamWriteHandle *bit_stream,
			  const unsigned int requested_bits,
			  const unsigned int quantum);

  extern MagickExport void
  MagickWordStreamInitializeRead(WordStreamReadHandle *word_stream,
				 WordStreamReadFunc read_func,
				 void *read_func_state);

  extern MagickExport unsigned int
  MagickWordStreamLSBRead(WordStreamReadHandle *word_stream,
			  const unsigned int requested_bits);

  extern MagickExport void
  MagickWordStreamInitializeWrite(WordStreamWriteHandle *word_stream,
				  WordStreamWriteFunc write_func,
				  void *write_func_state);

  extern MagickExport void
  MagickWordStreamLSBWrite(WordStreamWriteHandle *word_stream,
			   const unsigned int requested_bits,
			   const unsigned int quantum);

  extern MagickExport void
  MagickWordStreamLSBWriteFlush(WordStreamWriteHandle *word_stream);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif /* _MAGICK_BIT_STREAM_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
