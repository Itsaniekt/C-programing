#include <stdio.h>
int  DisplayFactor(int iNo)
{
    int iCount=0;
    int iCnt=0;
    printf("Factors in Asscending order : \n");
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iNumber=0;
    printf("enter the number :\n");
    scanf("%d",&iNumber);

    int iRet = DisplayFactor(iNumber);
    printf("Total factors of number is :%d\n",iRet);
    return 0;
}