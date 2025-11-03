#include <stdio.h>
void Dispaly(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {   
        printf("*\t");
    }
    int icnt=0;
    for( icnt =1;icnt<=iNo;icnt++)
    {
        printf("#\t");
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