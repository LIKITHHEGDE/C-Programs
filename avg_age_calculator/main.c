#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age1 , age2 , age3 , average_age;
   age1 = age2 = 12;
   printf("What is you age ? \n");
   scanf("%d",&age3);
   average_age = (age1+age2+age3)/3;
   printf("Average age of the above three girls is %d ",average_age);
   return 0;
}
