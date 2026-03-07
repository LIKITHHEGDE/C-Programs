#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char oper;
    printf("Enter the values you want to add : \n");
    printf("Value of a : \n");
    scanf(" %d",&a);
    printf("Value of b : \n");
    scanf(" %d",&b);
    printf("Enter the operation you want to try on these numbers \n");
    scanf(" %c",&oper);
    switch(oper){
    case '+': printf("You have chosen addition , answer is %d \n",a+b);
              break;
    case '-' : printf("You have chosen subtraction , answer is %d \n",a-b);
              break;
    case '*' : printf("You have chosen multiplication , answer is %d \n",a*b);
              break;
    case '/' : printf("You have chosen division , answer is %d \n",a/b);
              break;
    }
    return 0;
}
