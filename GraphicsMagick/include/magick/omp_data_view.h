/*
  Copyright (C) 2008 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  GraphicsMagick OpenMP Thread-Specific Data Methods.
*/
#ifndef _MAGICK_OMP_DATA_VIEW
#define _MAGICK_OMP_DATA_VIEW

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif


  /****
   *
   * Simplified support for OpenMP thread-specific data
   * These interfaces are subject to change.
   *
   ****/

  typedef struct _ThreadViewDataSet
  {
    void
    **view_data;

    MagickFreeFunc
    destructor;
    
    unsigned int
    nviews;
  } ThreadViewDataSet;

  extern MagickExport void
  DestroyThreadViewDataSet(ThreadViewDataSet *data_set);
  
  extern MagickExport ThreadViewDataSet
  *AllocateThreadViewDataSet(const MagickFreeFunc destructor,
                             const Image *image,
                             ExceptionInfo *exception);

  extern MagickExport ThreadViewDataSet *
  AllocateThreadViewDataArray(const Image *image,
                              ExceptionInfo *exception,
                              size_t count,size_t size);

  extern MagickExport unsigned int
  GetThreadViewDataSetAllocatedViews(ThreadViewDataSet *data_set);

  extern MagickExport void
  *AccessThreadViewData(ThreadViewDataSet *data_set);

  extern MagickExport void
  *AccessThreadViewDataById(ThreadViewDataSet *data_set,
                            unsigned int index);

  extern MagickExport void
  AssignThreadViewData(ThreadViewDataSet *data_set, unsigned int index,
                       void *data);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif /* defined(__cplusplus) || defined(c_plusplus) */

#endif /* _MAGICK_OMP_DATA_VIEW */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
