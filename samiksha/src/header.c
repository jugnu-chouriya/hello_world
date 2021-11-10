#include<stdio.h>
#include"../include/header.h"

double* sgs_clib_1d_double_array(size_t size_of_array){
    double Arr[size_of_array]; 
    double k=1;
    for (int i = 0; i < size_of_array; i++) {
                Arr[i]=k;
                k++;
        }

    double *ptr= &Arr[0];
    for (size_t i = 0; i < size_of_array; i++)
    {
        printf("%u \n",ptr+i);
    }
}