#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Grade = 0;
    float MarksScored = 0;
    float TestAttended = 0;
    float avg = 0;

    printf("To stop press 'k' \n\n");
    do{

    printf("Test : %.0f \t Grade : %0.2f \n",TestAttended,Grade);
    printf("\nEnter marks Scored :  \n");
    scanf(" %f \n",&MarksScored);
    Grade += MarksScored;
    TestAttended++;
    avg = Grade/TestAttended;
    }while(MarksScored != 0);
    return 0;





}
