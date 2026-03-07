#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user{
   int userid;
   char name[20];
   int age ;

};

int main()
{
   struct user user1;
   struct user user2 = {4312632,"Abel",37};
   printf("User ID: %d\n", user2.userid);
   printf("User name: %s\n", user2.name);
   printf("User age: %d\n", user2.age);

   puts("Enter user 1 name \n");
   gets(user1.name);
   user1.age = 21;
   user1.userid = 4123046;
   printf("User 1 name : %s \n",user1.name);
   printf("User 1 age : %d \n",user1.age);
   printf("User 1 ID : %d \n",user1.userid);


   return 0;
}
