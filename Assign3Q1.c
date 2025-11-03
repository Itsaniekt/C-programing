#include <stdio.h>
void DisplayEven(int iNo)
{   if(iNo<0)
{
    return;
}
    int pro=0;
    int iCnt=0;
    printf("even numbers : \n");  
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
            pro=2*iCnt;
            printf("%d \t",pro);
    }
}
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    
    DisplayEven(iValue);
    return  0;
}