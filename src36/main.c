#include <stdio.h>
#include"../include36/gurdeep.h"

int main()
{

    FILE*pointer=sgs_clib_open_file("test.txt","r");
    printf("teh file pointer is %u",pointer);

    return 0;
}