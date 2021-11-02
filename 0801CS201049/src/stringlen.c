#include<stdio.h>

#include "..\include\stringlen.h"

 size_t sgs_clib_strlen(const char *str)
 {
     size_t ans = 0;
      
     while(str!='\0')
     {
        ans++;

        str+=1;
     }

     return ans;
 }
