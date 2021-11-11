#include<stdio.h>
#include "../include/strlen.h"

int main()
{
    char str1[20]="ManalChoudhary";
    char str2[20]="Manal\0Choudhary";
    printf("Length of string a = %lu \n",sgs_clib_strlen(str1));
    printf("Length of string b = %lu \n",sgs_clib_strlen(str2));
    return 0;
}