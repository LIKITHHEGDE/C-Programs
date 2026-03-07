#include <stdio.h>

int main() {
    float a, b, c;
    printf("Enter any three numbers separated by commas: \n");
    scanf("%f,%f,%f", &a, &b, &c);

    if ((a >= b) && (a >= c)) {
        printf("%f is the largest number \n", a);
    }
    else if ((b >= a) && (b >= c)) {
        printf("%f is the largest number \n", b);
    }
    else {
        printf("%f is the largest number \n", c);
    }
    return 0;
}
