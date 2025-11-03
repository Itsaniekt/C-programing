#include <stdio.h>
int  DisplayFactorSum(int iNo)
{
    int iSum=0;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum=iCnt+iSum;
        }
    }
    return iSum;
}
int main()
{
    int iNumber=0;
    printf("enter the number :\n");
    scanf("%d",&iNumber);

    int iRet = DisplayFactorSum(iNumber);
    printf("Sum of factors of number is :%d\n",iRet);
    return 0;
}