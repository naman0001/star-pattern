#include <stdio.h>
int main()
{

    int i, j, n;
    printf("enter the number of rows:");
    scanf("%d", &n);

    for (i = 1; i < 2 * n; i++)
    {

        for (j = 1; j <= n; j++)
        {

            if (i == 1 && (j == 1 || j == n) ||

                i == n && (j == 1 || j == n) ||
                i == 2 * n - 1 && (j == 1 || j == n))
                printf(" ");
            else if (i == 1 || i == n || i == 2 * n - 1 || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}