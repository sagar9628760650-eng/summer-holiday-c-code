#include <stdio.h>

int main() {
    int i, j, n, l, k;
    scanf("%d", &n);
    l = n;
    for (i = 1; i <= n; i++) {
        for (k = 1; k <= i - 1; k++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("%d", l);
        }
        printf("\n");
        --l;
    }

    for (i = 2; i <= n; i++) {
        for (k = 1; k <= n - i; k++) {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}