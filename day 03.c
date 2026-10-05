#include <stdio.h>

int main()
{
    int n, m, i, gcd;
    scanf("%d", &n);
    scanf("%d", &m);
    for (i = 1; i <= m && i <= n; i++)
    {
        if (m % i == 0 && n % i == 0)
            gcd = i;
    }
    printf("%d", gcd);
    return 0;
}