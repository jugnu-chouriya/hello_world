#include<stdio.h>
#include"header.h"
int main()
{
    int arr[3][4] = {
                        {11,22,33,44},
                        {55,66,77,88},
                        {11,66,77,44}
                    };
                    
    sgs_clib_2d_int_array(arr);
    return 0;
}