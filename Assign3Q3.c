#include <stdio.h>
void DisplayEvenFactors(int iNo)
{
    if (iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    printf("Even factor of a number :\n");
    for(int iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==0&&(iCnt>0))
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    
    DisplayEvenFactors(iValue);
    return 0;
}