#include <stdio.h>
#include <stdlib.h>

int main()
{
    int LikithBonus = calculateBonus(12);
    int AnirudhBonus = calculateBonus(8);
    printf("Christmas Bonus for LikithHegde is %d\n",LikithBonus);
    printf("Christmas Bonus for AnirudhRavichander is %d\n",AnirudhBonus);
}

int calculateBonus(int yearsWorked){
    int Bonus = 250*yearsWorked;
    if(yearsWorked>10){
        Bonus += 1000;
    }

    return Bonus;
}
