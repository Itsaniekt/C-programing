#include <stdio.h>
void DisplayStars(int iValue)
{
    int iScnt =0;

    for(iScnt=1;iScnt<=iValue;iScnt++)
    {
        printf("*");
    }
}
int main()
{
    int iNum=0;
    printf("enter the number : \n");
    scanf("%d",&iNum);

    DisplayStars(iNum);
    return 0;
}