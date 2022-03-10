#include <stdio.h>
int main()
{

    int n, i, j;
    printf("\n\n");
    printf("enter the number of stars:");
    scanf("%d", &n);
    printf("\n\n");
    // upper part
    for (i = 1; i < n; i++)
    {
        // <-:upper part
        for (j = 1; j <= 2 * i - 2; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= n + 1 - i; j++)
        {
            printf("*");
        }

        // for uppre :->
        for (j = 1; j < 2 * n - 2 * (i - 1); j++)
        {
            printf(" ");
        }

        for (j = 1; j <= n + 1 - i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // lower part

    for (i = 1; i <= n; i++)
    {
        // lower <-
        for (j = 1; j <= 2 * (n - i); j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        // lower part ->
        for (j = 1; j <= 2 * (i - 1) + 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}