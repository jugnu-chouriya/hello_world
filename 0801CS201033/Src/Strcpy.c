#include<stdio.h>
#include"my_strcpy.h"

int main()
{
    char source[] = "Gaurav Gupta \n0801CS201033 \nPP Assignment-3";
    char destination[25];
    
    printf("%s\n", sgs_clib_strcpy(destination, source));
 
    return 0;
}