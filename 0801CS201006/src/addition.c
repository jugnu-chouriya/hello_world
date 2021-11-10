#include<stdio.h>
#include"my_addition.h"

int main()
{
    int a;
    int b;
    printf("Enter first number\n");
    scanf("%d",&a);
    printf("Enter second number\n");
    scanf("%d",&b);
    printf("%d\n", sgs_clib_addition(a,b));
    return 0;
}