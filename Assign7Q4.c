#include <stdio.h>
void ODDispaly(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        {
        printf("%d\t",iCnt);
    }
}

}
// time complexity O(2N)
int main()
{
    int iValue=0;
    printf("enter the number  : \n");
    scanf("%d",&iValue);

    ODDispaly(iValue);

    return 0;
}