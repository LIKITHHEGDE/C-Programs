#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[30],n,j,i,k;
    printf("Enter the number of elemets you want to store in the array \n");
    scanf(" %d",&n);
    for(i=0;i<n;i++){
        printf("Enter element number %d : ",i+1);
        scanf(" %d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            j++;
        }
        else{
            k++;
        }
    }
    printf("Total number of odd numbers in the array is %d  \n",k);
    printf("Total number of even numbers in the array is %d  ",j);
    return 0;
}
