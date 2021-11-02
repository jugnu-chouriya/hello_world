#include <stdio.h>
#include"p.h" 
int main()
{
  const char *str="hello how are you?"; 
  int c='o';
  char *ptr = sgs_clib_strrchr(str,c);
  printf( "The last occurrence of %c in '%s' is '%s'\n",c,str,ptr);
  
  
  return 0;
}
