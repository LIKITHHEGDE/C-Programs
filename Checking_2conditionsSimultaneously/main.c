#include <stdio.h>
#include <stdlib.h>

int main()
{
   int HoursStudied;
   int HoursPlayed;
   printf("Enter the amount of hours you study per day \n");
   scanf(" %d",&HoursStudied);
   printf("Enter the times you get beat up by your teacher \n");
   scanf("%d",&HoursPlayed);
   if( (HoursStudied>=12) && (HoursPlayed<3)    ) {

   printf("You are a Topper \n");
   }
   return 0;

}

