#include <stdio.h>
int facto(int n);
int main()
{

    int n, pro;
    printf(" enter the number:");
scanf("%d",&n);
pro=facto(n);
printf(" factorial of %d=%d",n,pro);

return 0;
}

int facto(int n)
{
    int i, pro = 1;
    for (i = 1; i <= n; i++)
    {
        pro = pro * i;
    }
    return pro;
}