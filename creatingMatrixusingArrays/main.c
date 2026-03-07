#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int main()
{
   int rows , cols ;
   int matrix[3][3];
   for(rows=0;rows<3;rows++){
       for(cols=0;cols<3;cols++){
        printf("value of [%d][%d] \n",rows+1,cols+1);
        scanf("%d",&matrix[rows][cols]);
       }
   }

   for(rows=0;rows<3;rows++){
       for(cols=0;cols<3;cols++){
        printf("%d ",matrix[rows][cols]);
    }
    printf("\n");
    }

   return 0;

}
