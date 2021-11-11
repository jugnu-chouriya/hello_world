#include<stdio.h>
#include"my_strcpy.h"
char* sgs_clib_strcpy(char* destination, const char* source)
{
    if (destination == NULL) {
        return NULL;
    }
 
    char *ptr = destination;
 
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';

    return ptr;
}