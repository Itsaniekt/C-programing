#include <stdio.h>
int EvenFactorials(int iNo)
{
    int iDiff=0;
    int iMulti1=1;
    int iMulti2=1;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++){
        if (iCnt%2==0)
        {
            iMulti1=iCnt*iMulti1;
        }
        else
        {
            iMulti2=iCnt*iMulti2;
        }
        
        
    }
    iDiff = iMulti1 -iMulti2;
    return iDiff;
}
// Time Complexity is O(N).
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    int iRet= EvenFactorials(iValue);
printf("Difference  of even & Odd Factorials : %d\n",iRet);
    return 0;
}