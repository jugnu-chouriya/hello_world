#include<stdio.h>
#include "../include/2darray.h"

int** sgs_clib_2d_int_array(int size_of_array){
    int arr[size_of_array][size_of_array];
    return &arr;
}