#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>


int main()
{
    int i;
    int players[5] = {45,07,333,18,19};
    int goals[5] = {07,06,01,05,10};
    int matches[5] = {5,6,4,5,5};
    float ppg[5];
    int bestone;
    float n = 0.0;

    for(i=0;i<5;i++){
        ppg[i] = (float)goals[i]/(float)matches[i];
        printf("%d \t %d \t %d \t %d  \n", players[i], matches[i], goals[i], ppg[i]);


    }
    return 0;




}
