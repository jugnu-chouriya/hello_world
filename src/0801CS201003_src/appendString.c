#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../include/0801CS201003_include/question1.h"
int main()
{
  char* dest = (char*)calloc(100, 1);
  char* src="Abdul";
  sgs_clib_strcat(dest,src);
  puts(dest);

  return 0;
}