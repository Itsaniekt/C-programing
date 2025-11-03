#include <stdio.h>
void Dispaly(int iNo)
{
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
}
// time complexity O(2N)
int main()
{
    int iValue=0;
    printf("enter the number  : \n");
    scanf("%d",&iValue);

    Dispaly(iValue);

    return 0;
}