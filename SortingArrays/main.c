#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){

   int i , howmany = 10 , goals[howmany] ;

   printf("My random original list : \n");
   for(i=0;i<howmany;i++){
      goals[i] = rand()%25+1;

   }
   for(i=0;i<howmany;i++){
      printf("%d \n",goals[i]);

   }

   while(1){
       int swapped = 0;
          for(i=0;i<howmany-1;i++){
               if(goals[i]>goals[i+1]){
               int temp = goals[i];
               goals[i] = goals[i+1];
               goals[i+1] = temp;
               swapped = 1;
               }
   }
   if(swapped == 0){
       break;
   }

   }
   printf("Sorted list of mine : \n");
   for(i=0;i<howmany;i++){
      printf("%d \n",goals[i]);

   }




   return 0;
}
