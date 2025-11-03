#include <stdio.h>

float Percentage(float fSub1,float fSub2)
{
        float fPercent  = ((fSub1/fSub2 )*100);
         return fPercent;
}
int main()
// Time complexity is 
{
    float fNum1=0,fNum2=0;
    printf("enter the marks : \n");
    scanf("%f%f",&fNum1,&fNum2);

    float fRet= Percentage(fNum1,fNum2);
    printf("Percentage of both subjects :%f\n",fRet);

    return 0;
}