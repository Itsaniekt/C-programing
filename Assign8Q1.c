#include <stdio.h>
void DisplayNumber(int iNo)
{
    if(iNo<50)
    {
        printf("Small\n");
    }
    else if (iNo>50 && iNo <100)
    {
        printf("medium ");
    }
    else{
        printf("larger \n");
    }
}
int main()
{
int iValue =0;
printf("enter the number : \n");
scanf("%d",&iValue);
DisplayNumber(iValue);
return 0;
}