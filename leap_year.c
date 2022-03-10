# include<stdio.h>
int main(){
int n,y,sum;
printf(" enter the year:");
scanf("%d",&n);
sum=n%4;
sum==0 ? printf(" %d leap years",n) : printf("%d not leap year",n);
return 0;
}