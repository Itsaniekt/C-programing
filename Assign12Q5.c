#include <stdio.h>
#include <stdbool.h>

bool CheckDivisibility(int iNo)
{
    if(iNo%5==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iNum=0;
    printf("Enter the number:\n");
    scanf("%d",&iNum);
    
    bool bRet = CheckDivisibility(iNum);
    if(bRet==true)
{
    printf("Divisible by 5 \n");
}
else
{
    printf("not divisible by 5 \n");
}
return 0;
}