#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary;
    printf("What is Ramesh's monthly Salary ?\n");
    scanf("%f",&salary);
    float expense = salary*0.4;
    float rent = salary*0.2;
    float gross_amount =  rent +  expense +  salary;
    printf("Ramesh's gross salary is %f",gross_amount);
    return 0;
}
