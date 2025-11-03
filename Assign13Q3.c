#include <stdio.h>
void PrintOddNumber(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==1)
        {
        printf("%d\t",iCnt);
    }
}
}
int main()
{
    int iNum=0;
    printf("Enter the number : \n");
    scanf("%d",&iNum);

    PrintOddNumber(iNum);
    return 0;
}