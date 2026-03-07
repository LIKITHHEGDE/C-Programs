#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,even=0,odd=0,total=0;
    for(i=0;i<=10;i++){




        if(i%2==0){
            even += i;
        }

        if(i%2!=0){
            odd += i;
        }
        total += i;
    }
    printf("Sum of all 10 numbers is %d \n",total);
    printf("Sum of all even numbers is %d \n",even);
    printf("Sum of all odd numbers is %d \n",odd);


}
