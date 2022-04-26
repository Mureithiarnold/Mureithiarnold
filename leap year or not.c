// program to find if a year is leap or not
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d" &year);
    if(year%4==0)
    {
        printf("the year is a leap year," year);
    }
    else
    {
        printf("the yaer is not a leap year." year)
    }
    return 0;
}
