#include <stdio.h>
int  DisplayEvenFactorSum(int iNo)
{
    int iSum=0;
    int iCnt=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            if(iCnt%2==0)
            {
            iSum=iCnt+iSum;
        }
    }
    }
    return iSum;
}
int main()
{
    int iNumber=0;
    printf("enter the number :\n");
    scanf("%d",&iNumber);

    int iRet = DisplayEvenFactorSum(iNumber);
    printf("Sum of Even factors of number is :%d\n",iRet);
    return 0;
}