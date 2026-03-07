#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int rnumber;
    int mynum;
    srand(time(NULL));
    rnumber = rand() % 10  +1;
    while(1){
        printf("\nEnter any random number between 1 to 100 \n");
        scanf(" %d",&mynum);

        if(rnumber==mynum){
            printf("\nyou have guessed the correct number \n");
            break;
        }
        else if(mynum<rnumber){
            printf("\nyou have guessed smaller number try bigger one\n");
        }
        else
        {
            printf("\nyou have guessed the bigger number try smaller one \n");
        }


    }


    return 0;




}
