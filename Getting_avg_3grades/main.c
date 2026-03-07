#include <stdio.h>
#include <stdlib.h>

int main()
{
   float avg;
   float grade1;
   float grade2;
   float grade3;
   printf("Enter the grade recieved in 3 subjects \n");
   scanf(" %f",&grade1);
   scanf(" %f",&grade2);
   scanf(" %f",&grade3);
   avg = (grade1+grade2+grade3)/3;
   if(avg>90){
    printf("Grade : A");
   }else if(avg>80){
    printf("Grade : B");
   }else if(avg>70){
    printf("Grade : C");
   }else if(avg>50){
    printf("Grade : D");
   }else{
    printf("Just pass");
   }
    return 0;
}
