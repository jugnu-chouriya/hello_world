#include<stdio.h>

#include "..\include\stringlen.h"

int main()
{
     char name[] = "keshav";

     int ans =  sgs_clib_strlen(name);

     printf("%d",ans);

     return 0;
}