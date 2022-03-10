# include<stdio.h>
int main(){
int n,i,j;
printf("enter the nummber of rows you want.");
scanf("%d",&n);
    for(i=1;i<=n;i++)
{


for(j=1;j<=n;j++)
{

    printf(" ");
    for(j=0;j<i;j++)
{
printf(" * ");
}
}

}
return 0;
}