#include <stdio.h>

int main()
{
    int i, j, k, n, a;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (a = 1; a <= 2 * n - 3; a++)
    {
        printf("*");
    }
    for (i = 1; i <= n; i++)
    {
        if (i > 1)
            for (j = 1; j <= i - 1; j++)
            {
                printf(" ");
            }
        printf("*");
        if (i > 1)
            for (k = 1; k <= 2 * (n - i) - 1; k++)
            {
                printf(" ");
            }
        if (i < n)
            printf("*");
        printf("\n");
    }
    return 0;
}