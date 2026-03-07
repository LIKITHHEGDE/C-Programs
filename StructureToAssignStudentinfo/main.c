#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct student{
    char name[20];
    int age;
    int Roll_num;
    char ID[10];
    char DOB[25];
};
int main()
{
    struct student stud1;
    printf("Enter the Student name \n");
    scanf(" %s",&stud1.name);

    printf("Enter the Student age \n");
    scanf(" %d",&stud1.age);

    printf("Enter the Student Roll number \n");
    scanf(" %d",&stud1.Roll_num);

    printf("Enter the DOB \n");
    scanf(" %s",&stud1.DOB);

    printf("    STUDENT INFO    \n");

    printf("Student name : %s \n",stud1.name);
    printf("Student age : %d \n",stud1.age);
    printf("Student Roll number : %d \n",stud1.Roll_num);
    printf("Student DOB : %s \n",stud1.DOB);

    return 0;
}
