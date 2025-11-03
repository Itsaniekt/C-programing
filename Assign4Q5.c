#include <stdio.h>
void SumNonFact(int iNo){
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iFSum=0;
    int iCnt=0;
    int iNfsum=0;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iFSum=iCnt+iFSum;
        }
        else if(iNo%iCnt!=0)
        {
            iNfsum=iCnt+iNfsum;
        }

    }
    printf("summation of factor : %d\n",iFSum);
    printf("summation of nonfactors:%d\n",iNfsum);
    int iDiff = iFSum-iNfsum;
    printf("Differece between number factor and non factor summation is :%d\n",iDiff);
    
}
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    SumNonFact(iValue);
    
    return 0;
}