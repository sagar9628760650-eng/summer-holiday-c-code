#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;
    for(int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int a, b;
    printf("Enter base (a): ");
    scanf("%d", &a);
    printf("Enter exponent (b): ");
    scanf("%d", &b);
    int result = power(a, b);
    printf("%d^%d = %d\n", a, b, result);
    return 0;
}