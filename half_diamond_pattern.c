#include <stdio.h>
int main()
{
    int n, i, j, coloum;
    printf("enter the nummber of rows you want:");
    scanf("%d", &n);
    coloum = 1;
    for (i = 1; i < 2 * n; i++)
    {
        for (j = 1; j <= coloum; j++)
        {
            printf("*");
        }

        if (i < n)
        {
            coloum++;
        }
        else
        {
            coloum--;
        }
        printf("\n");
    }
    
    return 0;
}