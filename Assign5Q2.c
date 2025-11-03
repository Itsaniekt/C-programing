#include <stdio.h>
int FindLarge(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }
}
int main()
{
    int num1=0,num2=0,result=0;
    printf("enter the two numbers : \n");
    scanf("%d%d",&num1,&num2);

    result=FindLarge(num1,num2);
    printf("the larger number in both number is : %d\n",result);

    return 0;

}