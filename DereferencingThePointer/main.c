#include <stdio.h>
#include <stdlib.h>

int main()
{
     int tuna = 24;
     int *ptuna = &tuna;

     printf("Name \t Adress \t \t Value \n");
     printf("%s \t %p \t %d \n","tuna",&tuna,tuna);
     printf("%s \t %p \t %d \n","tuna",ptuna,tuna);
     printf("%s \t %p \t %d \n","tuna",ptuna,*ptuna);

     *ptuna = 84;
     printf("%s \t %p \t %d \n","tuna",&tuna,tuna);
     printf("%s \t %p \t %d \n","tuna",ptuna,*ptuna);
     return 0;




}
