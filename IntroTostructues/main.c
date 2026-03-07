#include <stdio.h>
#include <stdlib.h>

struct user{
  char USN[12];
  int age;
  char name[25];
  float weight;
  char branch[25];

};


int main()
{
    struct user me;
    struct user other;

    puts("Enter User 1 name \n");
    gets(me.name);

    puts("Enter user 2 name \n");
    gets(other.name);

    puts("Enter User 1 age \n");
    gets(me.age);

    puts("Enter user 2 age \n");
    gets(other.age);

    puts("Enter User 1 USN \n");
    gets(me.USN);

    puts("Enter user 2 USN \n");
    gets(other.USN);

    puts("Enter User 1 branch \n");
    gets(me.branch);

    puts("Enter user 2 branch \n");
    gets(other.branch);


    return 0;


}
