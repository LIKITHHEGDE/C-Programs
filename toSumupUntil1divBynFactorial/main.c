#include <stdio.h>

int tofinddenom(int n);

int main() {
    int n;
    float result = 0.0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int factorial = tofinddenom(i);
        result += 1.0 / factorial;
    }

    printf("Result: %.2f\n", result);
    return 0;
}

int tofinddenom(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}
