#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows for the diamond (odd number recommended): ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        printf("#");
        for(j=1;j<=2*i-3;j++)
        {
            printf(" ");
        }
        if (i>1)
            printf("#");
        printf("\n");
    }
    for (i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        printf("#");
        for(j=1;j<=2*(n-i-1)-1;j++)
        {
            printf(" ");
        }
        if (i<n-1)
            printf("#");
        printf("\n");
    }
    return 0;
}