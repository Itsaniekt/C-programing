#include <stdio.h>
void DisplayFactor(int iNo)
{
    int iCnt=0;
    printf("Factors in Asscending order : \n");
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo%iCnt==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iNumber=0;
    printf("enter the number :\n");
    scanf("%d",&iNumber);

    DisplayFactor(iNumber);
    return 0;
}