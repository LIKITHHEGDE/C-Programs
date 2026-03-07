#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[15];
    char DOB[25];
    int Rollnum;
    int ID;
};

int main() {
    struct student stud[20];
    printf("Enter the number of students in your class: \n");
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name of Student %d: \n", i + 1);
        scanf("%14s", stud[i].name); // Use %14s to limit the input size
        printf("Enter ID of Student %d: \n", i + 1);
        scanf("%d", &stud[i].ID);
        printf("Enter DOB of Student %d: \n", i + 1);
        scanf("%24s", stud[i].DOB); // Use %24s to limit the input size
    }

    printf("Your class Student details are here: \n");
    for (i = 0; i < n; i++) {
        printf("Name of Student %d is %s \n", i + 1, stud[i].name);
        printf("ID of Student %d is %d \n", i + 1, stud[i].ID);
        printf("DOB of Student %d is %s \n", i + 1, stud[i].DOB);
    }

    return 0;
}
