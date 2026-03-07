#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10 , b = 10 , answer = 0;
    answer = ++a * b;
    printf("Answer : %d \n",answer);

    a = 10 , b = 10 , answer = 0;
    answer = a++ * b;
    printf("a = %d \n",a);
    printf("Answer : %d \n",answer);

    return 0;



}
