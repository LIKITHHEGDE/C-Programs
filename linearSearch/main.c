#include <stdio.h>
#include <stdlib.h>

int LinearSearch(int myArray[]   , int x , int n);

int main(){
   int myArray[] = {1,2,3,10,18,17,85};
   int x = 17 ;
   int n = sizeof(myArray)/sizeof(myArray[0]);
   int result = LinearSearch(myArray,x,n);
   if( result!=-1){
        printf("the element is present at index %d \n",result);
   }else{
        printf("the element is not present in the array \n");
   }
   return 0;
}


int LinearSearch(int myArray[] , int x , int n){
    for(int i=0;i<n;i++){
        if(myArray[i]== x){
            return i;
        }
    }

    return -1;

}
