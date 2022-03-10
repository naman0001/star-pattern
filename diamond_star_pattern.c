#include <stdio.h>
int main()
{
    int star, space;
    int i, j, n;
    printf("enter the number of rows:");
    scanf("%d", &n);
    space = n - 1;
    star = 1;
    for (i = 1; i < 2 * n; i++)
    {

        // gap
        for (j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (j = 1; j < star * 2; j++)
        {
            printf("*");
        }
        if (i < n)
        {
            star++;
            space--;
        }
        else
        {
            star--;
            space++;
        }

        printf("\n");
    }

    return 0;
}