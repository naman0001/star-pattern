
// to find alphabet as small or capital and find the gteater of two digits

#include "stdio.h"
#define isupper(x) (x >= 65 && x <= 90 ? 1 : 0)
#define issmaller(x) (x >= 97 && x <= 122 ? 1 : 0)
#define isalphabet(x) (isupper(x) || issmaller(x))
#define isgreater(x, y) (x > y ? x : y)

int main()
{
    printf("\t\t\n\n \26\26\t\2 HI welcome \2\t\26\26\n\n ");
    char ch;
    int a, b, big;
    printf(" enter the alphabet below \31\n");
    scanf("%c", &ch);
    if (isupper(ch) == 1)
        printf("%c is capital latter.\n", ch);
    if (issmaller(ch) == 1)
        printf("%c is lower alphabet.\n", ch);
    if (isalphabet(ch) != 1)
        printf(" your enter element is not a alphabet .\n");
    printf(" enter the numbers below \31\n");
    scanf("%d%d",&a,&b);
    big = isgreater(a, b);
    printf("%d is the greater number.", big);
    return 0;
}