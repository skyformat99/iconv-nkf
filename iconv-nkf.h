/*
  iconv(3)-compatible API and $LD_PRELOAD-able library by NKF
  Copyright (c) 2013 SATOH Fumiyasu @ OSS Technology Corp., Japan

  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
  claim that you wrote the original software. If you use this software
  in a product, an acknowledgment in the product documentation would be
  appreciated but is not required.

  2. Altered source versions must be plainly marked as such, and must not be
  misrepresented as being the original software.

  3. This notice may not be removed or altered from any source distribution.
 */

#ifndef _ICONV_NKF_H
#define _ICONV_NKF_H

#include <sys/types.h>

#ifdef ICONV_NKF_PRELOADLIB
#define iconv_nkf_open		iconv_open
#define iconv_nkf_close		iconv_close
#define iconv_nkf		iconv
#endif /* ICONV_NKF_PRELOADLIB */

typedef void* iconv_real_t;

typedef struct {
  iconv_real_t iconv_cd;
  const char *nkf_in_option;
  const char *nkf_out_option;
} *iconv_nkf_t;

#endif /* _ICONV_NKF_H */
