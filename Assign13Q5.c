#include <stdio.h>
int PrintEvenNaturalNumberSum(int iNo)
{
    int iSum=0;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {if(iCnt%2==0)
    {
        iSum = iCnt+iSum;
}
}
return iSum;
}
int main()
{
    int iNum=0;
    printf("Enter the number : \n");
    scanf("%d",&iNum);

    int iRet=PrintEvenNaturalNumberSum(iNum);
    printf("Sum of first even natural number is : %d\n",iRet);

    return 0;
}