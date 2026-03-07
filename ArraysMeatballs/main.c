#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main()
{
  int i,meatballs[5],totalballs=0;
  for(i=0;i<=4;i++){
        printf("How many Meatballs did you ate on day %d \n",i+1);
        scanf(" %d",&meatballs[i]);

  }

  for(i=0;i<=4;i++){
       totalballs += meatballs[i];


  }
  int avg = totalballs/5;
  printf("You have eaten %d meatballs that is an average %d perday \n",totalballs , avg);
  return 0;

}
