#include <stdio.h>
int PrintNaturalNumber(int iNo)
{
    int iSum=0;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        iSum = iCnt+iSum;
}
return iSum;
}
int main()
{
    int iNum=0;
    printf("Enter the number : \n");
    scanf("%d",&iNum);

    int iRet=PrintNaturalNumber(iNum);
    printf("Sum of natural number is : %d\n",iRet);

    return 0;
}