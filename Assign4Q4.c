#include <stdio.h>
int SumNonFact(int iNo){
    int iSum=0;
    int iCnt=0;
    
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSum=iCnt+iSum;
        }
    }
    return iSum;
}
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    int iRet=SumNonFact(iValue);
    printf("multiplicattion of non  factors is : %d\n",iRet);
    return 0;
}