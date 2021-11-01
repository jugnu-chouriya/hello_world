#include<stdio.h>
#include "../include/strlen.h"
size_t sgs_clib_strlen(const char *s)
{
    size_t count = 0;
    while(*s!='\0')
    {
        count++;
        s++;
    }
    return count;
}