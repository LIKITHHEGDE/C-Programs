#include <stdio.h>
#include <stdlib.h>
int main()
{

    int age;
    char gender;

    printf("How old are you ?\n");
    scanf(" %d", &age);

    printf("What is your gender ?\n");
    scanf(" %c", &gender);

    if(age>=18){
        printf("You are eligible to cast vote in upcoming elections\n");
        if(gender == 'm'){
            printf("Have a great day dude ");
        }
        if(gender == 'f'){
            printf("Have a good day girl ");
        }
    }
    if(age<18){
        printf("You are not eligible to cast vote ");

    }
    return 0;
}
