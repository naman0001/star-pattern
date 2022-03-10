# include <stdio.h>
int main()
{
char g;
int yos,qual;
printf("enter your gender( press m=male and f=female) : \n your year of service: \n enter your qualification (for qualification press 0 =graduate and 1 = post-graduate) : \n");
scanf("%c",&g);
scanf("%d",&yos);
scanf("%d",&qual);

if( g=='m'&& yos>=10 && qual==1 )
printf(" your salery is : 11,000");
else
if( g=='m'&& yos>=10 && qual==0||g=='m'&& yos < 10 && qual==1 )
printf(" your salery is : 10,000");
else
if( g=='m'&& yos<10 && qual==0 )
printf(" your salery is : 7,000");
else
if( g=='f'&& yos>=10 && qual==1 )
printf(" your salery is : 12,000");
else
if( g=='f'&& yos>=10 && qual==0 )
printf(" your salery is : 9,000");
else
if( g=='f'&& yos<10 && qual==1 )
printf(" your salery is : 10,000");
else
if( g=='f'&& yos<10 && qual==0 )
printf(" your salery is : 6,000");
else
printf(" Enter the valid information!");
return 0 ;

}