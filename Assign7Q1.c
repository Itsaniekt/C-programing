#include <stdio.h>
void Patterns(int iNo1)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        printf("$  \t *\t   ");
    }
}
int main()
{
    int iValue=0;
    printf("enter the number : \n");
    scanf("%d",&iValue);

    Patterns(iValue);

    return 0;
}
//TC is O(N)