#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Myname[35] = "Likith Hegde";
    int i = 0;
    int k = 0;
    while(Myname[i] != '\0'){

        k++;
        i++;
    }
    printf("length of string is %d \n",k);
    return 0;

}
