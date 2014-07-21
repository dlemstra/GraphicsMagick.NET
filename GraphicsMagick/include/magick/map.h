/*
  Copyright (C) 2003 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
*/
#ifndef _MAGICK_MAP_H
#define _MAGICK_MAP_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/*
  Include declarations.
*/

typedef struct _MagickMapHandle *MagickMap;
typedef struct _MagickMapIteratorHandle *MagickMapIterator;

/*
  Function prototype for a function to clone (copy) an object
*/
typedef void * (*MagickMapObjectClone)(const void *object_,
  const size_t object_size);

/*
  Function prototype for a function to destroy a contained object
  (similar to free())
*/
typedef void (*MagickMapObjectDeallocator)(void *object_);


/*
  MagickExported text map methods.
*/

/*
  Allocate a Magick Map
  All objects contained in the map need to be of the same type.
  Copy specifies a function to copy objects into the map.
  Deallocate specifies a function to destroy a contained object.
*/
extern MagickExport MagickMap
  MagickMapAllocateMap(MagickMapObjectClone clone,
    MagickMapObjectDeallocator deallocate);

/*
  Destroy a Magick Map (and any contained objects)
*/
extern MagickExport void
  MagickMapDeallocateMap(MagickMap map);

/*
  Deallocate (clear) all objects in the map.
*/
extern MagickExport void
  MagickMapClearMap(MagickMap map);

/*
  Deep clone Magick Map (and any contained objects)
*/
extern MagickExport MagickMap
  MagickMapCloneMap(MagickMap map,ExceptionInfo *exception);

/*
  Add an entry to the Magick Map.
  Argument is copied into the map.
*/
extern MagickExport unsigned int
  MagickMapAddEntry(MagickMap map,const char *key, const void *object,
                    const size_t object_size, ExceptionInfo *exception);

/*
  Remove (destroy) an entry from the Magick Map. False is returned if
  the object doesn't exist.
*/
extern MagickExport unsigned int
  MagickMapRemoveEntry(MagickMap map,const char *key);

/*
  Access an entry
  Object_size is updated with the object size.
*/
extern MagickExport const void
  *MagickMapAccessEntry(MagickMap map,const char *key,
    size_t *object_size);

/*
  Allocate an iterator
*/
extern MagickExport MagickMapIterator
  MagickMapAllocateIterator(MagickMap map);

/*
  Deallocate an iterator
*/
extern MagickExport void
  MagickMapDeallocateIterator(MagickMapIterator iterator);

/*
  Position the iterator to one-before the first element (default
  position). The MagickMapIterateNext() function must be executed
  once to access the first element.
*/
extern MagickExport void
  MagickMapIterateToFront(MagickMapIterator iterator);

/*
  Position the iterator to one-beyond the last element
  The MagickMapIteratePrevious() function must be executed once
  to access the last element.
*/
extern MagickExport void
  MagickMapIterateToBack(MagickMapIterator iterator);

/*
  Iterate to next element
  Key is updated with pointer to element key
  True is returned if not pointing to end of list.
*/
extern MagickExport unsigned int
  MagickMapIterateNext(MagickMapIterator iterator,const char **key);

/*
  Iterate to previous element
  Key is updated with pointer to element key
  True is returned if not pointing to beginning of list.
*/
extern MagickExport unsigned int
  MagickMapIteratePrevious(MagickMapIterator iterator,const char **key);

/*
  Access an element via the iterator
  Object_size is updated with the object size.
*/
extern MagickExport const void
  *MagickMapDereferenceIterator(const MagickMapIterator iterator,
    size_t *object_size);

/*
  Function to copy a string
*/
extern MagickExport void *
  MagickMapCopyString(const void *string, const size_t size);

/*
  Function to deallocate a string
*/
extern MagickExport void
  MagickMapDeallocateString(void *string);

/*
  Function to copy a BLOB
*/
extern MagickExport void *
  MagickMapCopyBlob(const void *blob, const size_t size);

/*
  Function to deallocate a BLOB
*/
extern MagickExport void
  MagickMapDeallocateBlob(void *blob);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif /* _MAGICK_MAP_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
