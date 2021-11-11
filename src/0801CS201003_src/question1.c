#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../include/0801CS201003_include/question1.h"

 char *sgs_clib_strcat(char *dest, const char *src)
  {
    char *ptr=dest+ strlen(dest);
    while(*src!='\0')
    {
      *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
  }