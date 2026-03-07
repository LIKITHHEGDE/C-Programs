#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, v;
    float m, Kenergy, Penergy, g;
    printf("Enter the mass value : \n");
    scanf(" %f",&m);

    printf("Enter the gravitational acc value : \n");
    scanf(" %f",&g);

    printf("Enter the height value : \n");
    scanf(" %d",&h);

    printf("Enter the velocity value : \n");
    scanf(" %d",&v);

    Penergy = m * g * (float)h;
    Kenergy = 0.5*m*(float)pow(v,2);

    printf("kinetic enrgy is %f \n",Kenergy);
    printf("potential enrgy is %f \n",Penergy);
    printf("mecganical enrgy is %f \n",Penergy+Kenergy);
    return 0;

}
