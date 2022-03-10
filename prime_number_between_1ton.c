#include <stdio.h>
int main()
{

    int n, i, sum, j;
    printf(" enter the number till  you want the prime number:");
    scanf("%d", &n);
    printf(" prime numbers are:");
    for (i = 1; i <= n + 1; i++)
    {
        for (j = 2; j <= n; j++)
        {
            sum = i % j;
            if (sum == 0)
                break;
        }
        if (i == j)
            printf("%d\t", i);
    }

    return 0;
}