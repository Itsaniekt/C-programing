#include <stdio.h>
#include <stdbool.h>
bool Checkgreater(int iNo)
{
    if(iNo<100)
    {
        return true;
    }
    else{
        return   false;
    }
}

int main()

{
int iValue=0;
printf("enter the number : \n");
scanf("%d",&iValue);
bool bRet = Checkgreater(iValue);
if(bRet==true)
{
    printf("%d the number is smaller than 100",iValue);
}
else{
    printf("%d the number is gretaer than 100",iValue);
}
return 0;

}