/*
  Copyright (C) 2009, 2014 GraphicsMagick Group
 
  This program is covered by multiple licenses, which are described in
  Copyright.txt. You should have received a copy of Copyright.txt with this
  package; otherwise see http://www.graphicsmagick.org/www/Copyright.html.
 
  Random number generator (private not-installed parts).

  Currently based on George Marsaglia's multiply-with-carry generator.
  This is a k=2 generator with a period >2^60.
*/
#ifndef _MAGICK_RANDOM_PRIVATE_H
#define _MAGICK_RANDOM_PRIVATE_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif /* defined(__cplusplus) || defined(c_plusplus) */

#if defined(MAGICK_IMPLEMENTATION)

#include "magick/random.h"

  /*
    You may replace the following two constants MAGICK_RANDOM_ZC and
    MAGICK_RANDOM_WC by any pair of distinct constants from this list:

    18000 18030 18273 18513 18879 19074 19098 19164 19215 19584
    19599 19950 20088 20508 20544 20664 20814 20970 21153 21243
    21423 21723 21954 22125 22188 22293 22860 22938 22965 22974
    23109 23124 23163 23208 23508 23520 23553 23658 23865 24114
    24219 24660 24699 24864 24948 25023 25308 25443 26004 26088
    26154 26550 26679 26838 27183 27258 27753 27795 27810 27834
    27960 28320 28380 28689 28710 28794 28854 28959 28980 29013
    29379 29889 30135 30345 30459 30714 30903 30963 31059 31083

    (or any other 16-bit constants k for which both k*2^16-1 and
    k*2^15-1 are prime).
   */
#define MAGICK_RANDOM_ZC 36969
#define MAGICK_RANDOM_WC 18000

  /*
    Generate a random integer value
  */
  static inline magick_uint32_t MagickRandomIntegerInlined(MagickRandomKernel *kernel)
  {
    kernel->z = MAGICK_RANDOM_ZC * (kernel->z & 65535U) + (kernel->z >> 16U);
    kernel->w = MAGICK_RANDOM_WC * (kernel->w & 65535U) + (kernel->w >> 16U);
    return (kernel->z << 16U) + (kernel->w & 65535U);
  }

  /*
    Generate a random double value (0.0 to 1.0)
  */
  static inline double MagickRandomRealInlined(MagickRandomKernel *kernel)
  {
    double result = MagickRandomIntegerInlined(kernel) * 2.3283064370807974e-10;
    if (result > 1.0)
      result=1.0;
    return result;
  }

#endif /* defined(MAGICK_IMPLEMENTATION) */

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif /* defined(__cplusplus) || defined(c_plusplus) */

#endif /* ifndef _MAGICK_RANDOM_PRIVATE_H */

/*
 * Local Variables:
 * mode: c
 * c-basic-offset: 2
 * fill-column: 78
 * End:
 */
