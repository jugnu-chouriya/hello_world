#include<stdio.h>
#include "../include/strlen.h"
size_t sgs_clib_strlen(const char *str)
{
    size_t count = 0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}