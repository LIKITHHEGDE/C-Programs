#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void swappingNum(int *a,int *b,int temp);
int main()
{
    int a = 10 , b = 20;
    int temp = 0;
    printf("Before swapping : a = %d , b = %d \n",a,b);
    swappingNum(&a,&b,temp);
    printf("After swapping : a = %d , b = %d \n",a,b);
    return 0;


}

void swappingNum(int *a,int *b,int temp){

    temp = *a;
    *a = *b;
    *b = temp;
    return;


}
