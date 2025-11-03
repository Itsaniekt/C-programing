#include <stdio.h>
void CheckLeapYear(int year)
{
    if(year%4==0)
    {
        printf("it is leap year\n");
    }
    else
    {
        printf("it is not a leap year \n");
    }
}
int main()
{
    int Year=0;
    printf("enter the year : \n");
    scanf("%d",&Year);
    CheckLeapYear(Year);
    return 0;
}