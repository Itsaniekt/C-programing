#include <stdio.h>
void Dispaly(int iNo)
{
    int iCnt=0;
    for(iCnt=10;iCnt>=1;iCnt--)
    {   int iMulti = iNo * iCnt ;
        printf("%d\t",iMulti);
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