#include <stdio.h>
int OddFactorials(int iNo)
{
    int iMulti=1;
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++){
        if (iCnt%2==1)
        {
            iMulti=iCnt*iMulti;
        }
        
    }
    return iMulti;
}
// time complexity is O(N)

int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    int iRet= OddFactorials(iValue);
printf("Multiplcation of odd Factorials : %d\n",iRet);
    return 0;
}