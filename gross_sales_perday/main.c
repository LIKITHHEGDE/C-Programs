#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avgsales;
    float price = 20;
    float qty = 50;
    float dayWorked = 5;
    avgsales = (price*qty)/dayWorked;
    printf("Gross sales per day is : $%.2f",avgsales);
    return 0;

}
