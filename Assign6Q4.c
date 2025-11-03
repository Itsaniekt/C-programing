#include <stdio.h>
int MuitiplyThree(int iNo1,int iNo2,int  iNo3)
{
    int iMulti = iNo1*iNo2*iNo3;
   
    return iMulti;

}
int main()
{
    int iNum1=0,iNum2=0,iNum3=0;
    printf("enter the three numbers : \n");
    scanf("%d%d",&iNum1,&iNum2);
    scanf("%d",&iNum3);

    int iRet = MuitiplyThree(iNum1,iNum2,iNum3);

    printf("Multiplication  of three number : %d\n",iRet);
    return 0;
}