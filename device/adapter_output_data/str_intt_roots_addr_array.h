#pragma once

#include "defines.h"

#if defined(SE_DATA_FROM_CODE_COPY) || defined(SE_DATA_FROM_CODE_DIRECT)

#include <stdint.h>

#ifdef SE_INTT_REG
   #include "str_intt_roots_4096_1071415297.h"
   #include "str_intt_roots_4096_1071513601.h"
   #include "str_intt_roots_4096_1072496641.h"
#elif defined(SE_INTT_FAST)
   #include "str_intt_fast_roots_4096_1071415297.h"
   #include "str_intt_fast_roots_4096_1071513601.h"
   #include "str_intt_fast_roots_4096_1072496641.h"
#endif

ZZ* intt_roots_addr[3] =
{
  &(((ZZ*)(intt_roots_save_prime0))[0]),
  &(((ZZ*)(intt_roots_save_prime1))[0]),
  &(((ZZ*)(intt_roots_save_prime2))[0])
};

#endif
