#include <stdio.h>
#include <stdlib.h>

void EurotoUSD(float Euro);
int main()
{
    float Euro1 = 1;
    EurotoUSD(Euro1);
    EurotoUSD(35);
    return 0;

}
// passing arguments into main function

void EurotoUSD(float Euro){
    float USD = Euro*1.37;
    printf("Euro \t \t  USD \n");
    printf("%.3f \t \t  %.3f \n",Euro,USD);
    return;

}
