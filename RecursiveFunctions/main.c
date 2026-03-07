#include <stdio.h>
#include <stdlib.h>

int factorialFinder(int x){

    if(x==1){
        return 1;
    }else{
        return x*factorialFinder(x-1);
    }

}



int main()
{
    int n = 0;
    printf("Enter the value of n : \n");
    scanf(" %d",&n);
    int fact = factorialFinder(n);
    printf("factorial of the given number is %d \n",fact);
    return 0;


}
