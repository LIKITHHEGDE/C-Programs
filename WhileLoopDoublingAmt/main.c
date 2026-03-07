#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Day = 1;
    float amount = 0.2;
    while(Day<=31){
    printf("Day : %d \t Amount : $%0.2f \n",Day,amount);
    amount *= 2;
    Day++;


    }
    return 0;


}
