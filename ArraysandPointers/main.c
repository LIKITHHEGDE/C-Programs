#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   int meatballs[5] = {10,20,30,40,50};
   printf("Element \t Address \t\t Value \n");
   for(i=0; i<5 ;i++){
       printf("meatballs[%d] \t %p \t %d \n",i,&meatballs[i],meatballs[i]);

   }


   printf("meatballs memory id : %p \n",meatballs);
   printf("meatballs 1st value : %d \n",*meatballs);
   printf("meatballs 2nd value : %d \n",*(meatballs+2));
   printf("meatballs 3rd value : %d \n",*(meatballs+3));




   return 0;






}
