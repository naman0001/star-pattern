#include <stdio.h>

int main()
{
    int week;

    /* Input week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &week);
    
    if(week>=1&&week<=7){
	


    if(week == 1)
    {
        printf("Monday");
    }
     if(week == 2)
    {
        printf("Tuesday");
    }
     if(week == 3)
    {
        printf("Wednesday");
    }
     if(week == 4)
    {
        printf("Thursday");
    }
     if(week == 5)
    {
        printf("Friday");
    }
     if(week == 6)
    {
        printf("Saturday");
    }
     if(week == 7)
    {
        printf("Sunday");
    }}
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}