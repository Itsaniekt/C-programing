#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if(iNo %2==0)
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
    int iValue=0;
    
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);
    
   bool bRet=CheckEvenOdd(iValue);
    if(bRet=true)
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }
    return 0;
}