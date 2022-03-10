#include <stdio.h>
int main()
{
    int n, j, k, i;
    printf(" enter the numbers of stars u want pyramid pattern:");
    scanf("%d", &n);
    printf("\n\n");
    for (i = 1; i <= n / 2 + 1; i++)
    {

        for (k=1; k <= n / 2 + 1 - i; k++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}