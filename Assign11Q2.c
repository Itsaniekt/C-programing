#include <stdio.h>
void DisplayRangeEvennumbers(int iNo1,int iNo2)
{int iCnt=0;
    if(iNo1>iNo2)
    {
        printf("Invalid Range \n");
    }
    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        if(iCnt%2==0)
        {
        printf("%d \t",iCnt);
    }
}

}
int main()
{
    int iNum1=0,iNum2=0;
 printf("enter the range numbers : num1 and num2 : \n");
 scanf("%d%d",&iNum1,&iNum2);
 
 DisplayRangeEvennumbers(iNum1,iNum2);
 return 0;
}