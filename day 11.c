#include <stdio.h>

int main() {9
    int n, i, j;
    scanf("%d", &n);  // size of the X (odd number recommended)

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j || i + j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}