#include <stdio.h>
int main()
{

    int row, i, j;
    printf(" enter the value of rows u want:");
    scanf("%d", &row);
     printf("\n");

    for (i = 1; i <= row; i++)
    {

        for (j = 1; j <= row - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
             if(i==row || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}