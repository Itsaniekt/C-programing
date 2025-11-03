#include <stdio.h>
void DisplayRnumbers(int iNo1,int iNo2)
{int iCnt=0;
    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {
        printf("%d \t",iCnt);
    }

}
int main()
{
    int iNum1=0,iNum2=0;
 printf("enter the range numbers : num1 and num2 : \n");
 scanf("%d%d",&iNum1,&iNum2);
 
 DisplayRnumbers(iNum1,iNum2);
 return 0;
}