#include<stdio.h>
#include "sudeep/include/my_math.h"
#include"my_math.h"

int main(){



    int count,lower,upper;
    scanf("%d", &count);  
    scanf("%d", &lower);  
    scanf("%d", &upper);

    int *p;
    int arr[count];

    p= generate_random_numbers(count,lower,upper,arr);
    for ( int i = 0; i < count; i++ ) {
      printf( "*(p + %d) : %d\n", i, *(p + i));
   }


    return 0;
}
/*
Create a header file named as
my_math.h
which has function as void max_min(int, int) 
that accepts two ints, and print whichever 
is max and min.

*/




