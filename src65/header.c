#include <stdio.h>
#include <string.h> 
#include "../include65/header.h"
char * sgs_clib_strstr(const char *haystack, const char *needle)
{
int X ;
X= strcspn(haystack , needle);
char*result= haystack ;
return result+X;

    
}