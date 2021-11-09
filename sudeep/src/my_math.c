#include<stdio.h>
#include "sudeep/include/my_math.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int *generate_random_numbers(int  count, int lower , 
                             int  upper, int arr[])
{
    int i=0;
    int num;
    



    while (i!=count)
    {
        num=rand();
        if(num<=upper && num>=lower){
            arr[i]=num;
           // printf("%d ",num );
                i++;
        }
        
        
    }


    return arr;
    
}

