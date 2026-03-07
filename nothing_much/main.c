#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstname[20];
    char crushname[20];
    int Her_age;

    printf("What is your name ?\n");
    scanf(" %s",firstname);

    printf("what is your crushname ?\n");
    scanf(" %s",crushname);

    printf("what is her age ?\n");
    scanf(" %d", &Her_age);

    printf("my name is %s , my crush name is %s and her age is %d",firstname ,crushname ,Her_age);



    return 0;
}
