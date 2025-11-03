#include <stdio.h>
int EvenFactorials(int iNo)
{
    int iMulti=1;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++){
        if (iCnt%2==0)
        {
            iMulti=iCnt*iMulti;
        }
        
    }
    return iMulti;
}
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    int iRet= EvenFactorials(iValue);
printf("Multiplcation of even Factorials : %d\n",iRet);
    return 0;
}