#include<stdio.h>
#include"header.h"
int ** sgs_clib_2d_int_array(int arr[3][4])
{
 for(int i = 0; i < 3; i++)
    {
        printf("Address of %d th array %u \n",i , *(arr + i));
    }
 return 0;
}