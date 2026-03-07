#include <stdio.h>
#include <stdlib.h>

int main()
{
   char grade;
   printf("Enter your grade in last test \n");
   scanf(" %c", &grade);

   switch(grade){
   case 'A' : printf("Well done \n");
            break;
   case 'B' : printf("bit improvement needed \n");
            break;
   case 'C' : printf("not satisfied \n");
            break;
   case 'D' : printf("Dumb? \n");
            break;

   }
   return 0;



}
