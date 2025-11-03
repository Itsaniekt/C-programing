#include <stdio.h>
void DisplayNumber(int iNo,int iFrequency)
{
    int iCnt =0;
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue=0;
    int iCount=0;
    
    printf("Enter the number :\n");
    scanf("%d%d",&iValue,&iCount);
    
    DisplayNumber(iValue,iCount);
    
    return 0;
}