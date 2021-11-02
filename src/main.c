#include <stdio.h>
#include "../include/myfile.h"

//implementation 
int main(){

    char *c ="12345678d my name is Jugnu Chouriya";
    char *c1="sdkdjdJ";

    printf("length of the initial segment of str1 which consists entirely of characters not in str2 is : ");
    printf("%ld",sgs_clib_strcspn(c,c1));

    //Output is 8

}