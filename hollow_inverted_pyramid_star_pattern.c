#include <stdio.h>
int main()
{

    int row, i, j;
    printf(" enter the value of rows u want:");
    scanf("%d", &row);
    printf("\n");

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= 2 * row - (2 * i - 1); j++)
        {

            if (j == 2 * row - (2 * i - 1) || i == 1 || j == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}