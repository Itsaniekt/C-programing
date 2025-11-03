#include <stdio.h>
int MultiFactors(int iNo)
{
    int iCnt=0;
    int iMulti=1;
    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMulti = iCnt*iMulti;
            
        }
    }
    return iMulti;
}
int main()
{
    int iValue =0;
    int iRet =0;

    printf("enter the number : \n");
    scanf("%d",&iValue);

    iRet=MultiFactors(iValue);
    printf("multiplication of factors are :%d\n",iRet);
    return 0;
}