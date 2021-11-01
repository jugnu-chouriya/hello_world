#include<stdio.h>
#include <stdio.h>
#include "../include/28_myfile.h"

int main(){
    int n,ret;
    char str1[100],str2[100];
    printf("enter the value of n");
    scanf("%s",str1);
     scanf("%s",str2);
    scanf("%d",&n);
    ret= sgs_clib_strncmp(str1, str2, n);
   
   
   return(0);
}