#include <stdio.h>
int DisplayRangeEvennumbersSum(int iNo1,int iNo2)
{int iCnt=0;
    int iAdd=0;
    if(iNo1>iNo2)
    {
        printf("Invalid Range \n");
    }
    else if(iNo1<0 || iNo2 <0)
    {
        printf("invlid inputs (put only poisitive numbers)\n");
    }
    
    for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
    {   if(iCnt%2==0)
        {
        iAdd = iCnt+iAdd;
        }
    }
    return iAdd;

}
int main()
{
    int iNum1=0,iNum2=0;
 printf("enter the range numbers : num1 and num2 : \n");
 scanf("%d%d",&iNum1,&iNum2);
 
 int iRet = DisplayRangeEvennumbersSum(iNum1,iNum2);
 printf("Addition of Range Even numbers of both numbers is :%d\n",iRet);
 return 0;
}