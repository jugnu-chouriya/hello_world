#include <stdio.h>
#include "../include105/yash.h"

void sgs_clib_convert_to_lower(char *message)
{
    while(*message!='\0')
    {
        if(*message>=65 && *message<=90)
           *message=*message + 32;
        message++;
    }
}



