#include <stdio.h>
int main()
{

    int n, i, j;
    printf("enter the number of stars:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {

        for (j = 1; j <= 2 * i - 2; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= n + 1 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= 2 * (n - i); j++)
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