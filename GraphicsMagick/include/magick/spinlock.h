/*
  Copyright (C) 2003 GraphicsMagick Group
  Copyright (C) 2002 ImageMagick Studio
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  ImageMagick Spinlock  Methods. These are highly lightweight functions that
  are used to prevent deadlocks on access to global data when the normal
  semaphore system has not yet been initialized. They are intended to only
  be used to protect operations that are very fast - like a flag that tells
  you that something has been inited, or bumping a counter. Do NOT use this
  for protecting an operation that will take any significant amount of time.
*/
#ifndef _SPINLOCKS_H
#define _SPINLOCKS_H

#if defined(MSWINDOWS)

#define SPINLOCK_DELAY_MILLI_SECS 10

static LONG volatile
  spinlock_mutex = 0;

/* Wait for spin lock */
static void _spinlock_wait (LONG volatile *sl)
{
  /*
    LONG InterlockedCompareExchange(LONG volatile* dest, LONG xchg,
    LONG compare)

    Performs an atomic compare-and-exchange operation on the specified
    values. The function compares two specified 32-bit values and
    exchanges with another 32-bit value based on the outcome of the
    comparison.

    If you are exchanging pointer values, this function has been
    superseded by the InterlockedCompareExchangePointer function.

    To operate on 64-bit values, use the InterlockedCompareExchange64
    function.
  */
  while (InterlockedCompareExchange (sl, 1L, 0L) != 0)
  {
    /* slight delay - just in case OS does not giveup CPU */
    Sleep (SPINLOCK_DELAY_MILLI_SECS);
  }
}
/* Release spin lock */
static void _spinlock_release (LONG volatile *sl)
{
  /*
    LONG InterlockedExchange (LONG volatile* dest, LONG val)

    Sets a 32-bit variable to the specified value as an atomic
    operation.

    To operate on a pointer variable, use the
    InterlockedExchangePointer function.
    
    To operate on a 64-bit variable, use the InterlockedExchange64
    function.
  */
  InterlockedExchange (sl, 0L);
}
#define SPINLOCK_WAIT _spinlock_wait(&spinlock_mutex)
#define SPINLOCK_RELEASE _spinlock_release(&spinlock_mutex)

#else /* not MSWINDOWS */

#if defined(HAVE_PTHREAD)

static pthread_mutex_t
  spinlock_mutex = PTHREAD_MUTEX_INITIALIZER;
#define SPINLOCK_WAIT (void) pthread_mutex_lock(&spinlock_mutex)
#define SPINLOCK_RELEASE (void) pthread_mutex_unlock(&spinlock_mutex)

#else /* not HAVE_PTHREAD */

#define SPINLOCK_WAIT
#define SPINLOCK_RELEASE

#endif /* HAVE_PTHREAD */

#endif /* MSWINDOWS */
#endif /* _SPINLOCKS_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
