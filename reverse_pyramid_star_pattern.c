#include <stdio.h>
int main()
{
    int n, j, k, i;
    printf(" enter the numbers of  maximum stars u want pyramid pattern:");
    scanf("%d", &n);
    printf("\n\n");
    for (i = 1; i <= n / 2 + 1; i++)
    {

        for (k = 0; k <= i - 1; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= (n - (2 * i - 2)); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}