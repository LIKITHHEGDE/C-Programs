#include <stdio.h>
#include <stdlib.h>
int recursive(int i);
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf(" %d",&n);

    for(int i=0;i<n;i++){
        printf(" %d \n",recursive(i));

    }

}
int recursive(int k){
   if (k == 0){
      return 0;
   }
   else if(k == 1){
      return 1;
   }
   else{
      return recursive(k-1) + recursive(k-2);
   }
}
