#include <stdio.h>
void PrintNumber(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }

}
int main()
{
    int iNum=0;
    printf("Enter the number : \n");
    scanf("%d",&iNum);

    PrintNumber(iNum);
    return 0;
}