#include <stdio.h>
int main()
{
    int i, j, n;
    printf(" enter the number of stars:");
    scanf("%d", &n);

    for (i = n / 2; i <= n; i += 2)
    {
        for (j = 1; j < n - i; j += 2)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = 1; i <= n; i++)
    {

        // lower  triangle
        for (j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * n - 2 * (i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}