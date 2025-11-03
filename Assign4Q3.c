#include <stdio.h>
void NonFact(int iNo)
{
    int iCnt=0;
    printf("non facotr of a number : \n");
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;
}