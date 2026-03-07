#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char myarray[20];         // Declare an array of 20 characters
    char *pointerArr = myarray; // Declare a pointer and set it to point to the array

    printf("Enter a character array max 20 char \n");
    fgets(pointerArr , 20 , stdin); // Read input into the array using the pointer
    puts(pointerArr);               // Print the content of the array using the pointer

    return 0;
}
