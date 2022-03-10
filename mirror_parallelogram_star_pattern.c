#include <stdio.h>
int main()
{

    int n, i, j;
    printf(" enter the number of rows:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (j = 0; j < i - 1; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}