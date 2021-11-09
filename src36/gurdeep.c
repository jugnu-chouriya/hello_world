#include<stdio.h>
#include"../include36/gurdeep.h"
FILE * sgs_clib_open_file(char *filename, char *mode){
    FILE*ptr;
    ptr=fopen(filename,mode);
    return ptr;
}