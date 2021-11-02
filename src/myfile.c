#include "../include/myfile.h"

//function definition 

size_t sgs_clib_strcspn(const char *str1, const char *str2)
{
   for(int i=0; *str1!='\0'; str1++,i++)
   {
      for(int j=0; str2[j]!='\0'; j++)
      {
         if(*str1 == str2[j])
         {
            return i;
         }
      }
   }
}