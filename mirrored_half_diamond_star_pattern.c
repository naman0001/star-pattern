#include <stdio.h>
int main()
{

    int n, i, j, star, space;
    printf(" enter the number of stars u want:");
    scanf("%d", &n);
    space = n - 1;
    star = 1;
    for (i = 1; i <= 2 * n; i++)
    {

        for (j = 1; j <= space; j++)

            printf(" ");

        for (j = 1; j <= star; j++)

            printf("*");
        printf("\n");
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
    }
    return 0;
}