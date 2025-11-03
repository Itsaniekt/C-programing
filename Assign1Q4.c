#include <stdio.h>
#include <stdbool.h>
bool CheckDivisibleby5(int iNo)
{
    if(iNo%5==0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iValue=0;
    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bool bRet = CheckDivisibleby5(iValue);

    if(bRet == true)
    {
        printf("\nthe number is divisible by 5 ");
    }
    else
    {
        printf("\n the number is not divisible by 5 ");
    }
    return 0;
}