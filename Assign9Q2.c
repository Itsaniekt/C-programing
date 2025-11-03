#include <stdio.h>

int DollarToInr(int iNo)
{
    int iConverter = iNo*70;

    return iConverter;
}
//time complexity O(N)
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);
    int iRet = DollarToInr(iValue);
    printf("the total is  %d\n",iRet);
    return 0;
}