#pragma once

#include "defines.h"

#if defined(SE_DATA_FROM_CODE_COPY) || defined(SE_DATA_FROM_CODE_DIRECT)

   #include "str_pk0_ntt_4096_1071415297.h"
   #include "str_pk1_ntt_4096_1071415297.h"
   #include "str_pk0_ntt_4096_1071513601.h"
   #include "str_pk1_ntt_4096_1071513601.h"
   #include "str_pk0_ntt_4096_1072496641.h"
   #include "str_pk1_ntt_4096_1072496641.h"

ZZ* pk_prime_addr[3][2] = 
{
    {&(pk0_prime0[0]), &(pk1_prime0[0])},
    {&(pk0_prime1[0]), &(pk1_prime1[0])},
    {&(pk0_prime2[0]), &(pk1_prime2[0])}
};
#endif
