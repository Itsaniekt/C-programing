#include <stdio.h>
int Factorials(int iNo)
{   int iMulti=1;
    int iCnt=0;
    
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {   iMulti =iCnt*iMulti;       
}       
return iMulti;
}

//Time complexity is O(N)
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    int iRet = Factorials(iValue);
    printf("Multiplictation of factorials : %d\n",iRet);
    return 0;
}