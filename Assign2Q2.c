#include <stdio.h>
void DisplayStars(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt =0;
    iCnt=1;
    while(iNo>=iCnt)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue =0;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    DisplayStars(iValue);
    return 0;
}