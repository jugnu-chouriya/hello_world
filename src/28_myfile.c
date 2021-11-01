#include <stdio.h>
#include<string.h>
#include "../include/28_myfile.h"

  
int sgs_clib_strncmp(const char *str1, const char *str2, size_t n){
    int ret;
   ret =sgs_clib_strncmp(str1, str2, n);

   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}
    
    