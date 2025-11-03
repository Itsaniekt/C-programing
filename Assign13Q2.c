#include <stdio.h>
void PrintEvenNumber(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
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

    PrintEvenNumber(iNum);
    return 0;
}