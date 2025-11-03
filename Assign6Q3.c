#include <stdio.h>
#include <stdbool.h>
bool CheckEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter the numbers : \n");
    scanf("%d%d",&iValue1,&iValue2);

    bool bRet=CheckEqual(iValue1,iValue2);
    if(bRet==true)
    {
        printf("it is Equal \n");
    }
    else{
        printf("it is not  equal\n");
    }

    return 0;
}