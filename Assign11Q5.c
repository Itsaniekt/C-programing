#include <stdio.h>
void DisplayReverseRangenumbers(int iNo1,int iNo2)
{int iCnt=0;
    for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
    {
        printf("%d \t",iCnt);
    }

}
int main()
{
    int iNum1=0,iNum2=0;
 printf("enter the range numbers : num1 and num2 : \n");
 scanf("%d%d",&iNum1,&iNum2);
 
 DisplayReverseRangenumbers(iNum1,iNum2);
 return 0;
}