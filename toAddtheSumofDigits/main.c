#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Include math library for pow function

int main()
{
    int n = 0, arr[10], numofdigits, i;

    printf("Enter the number of digits you want: \n");
    scanf("%d", &numofdigits); // Remove extra spaces in the format string

    printf("\nEnter the values to store in the array: \n");
    for(i = 0; i < numofdigits; i++){
        printf("Enter the digit of your number: \n");
        scanf("%d", &arr[i]); // Remove extra spaces in the format string
    }

    for(i = 0; i < numofdigits; i++){
        printf("Digit number %d: %d \n", i+1, arr[i]);
    }

    for(i = 0; i < numofdigits; i++){
        n = n + arr[i] * pow(10, i);
    }

    printf("%d\n", n);

    return 0;
}
