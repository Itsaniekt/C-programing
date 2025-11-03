#include <stdio.h>
void Dispaly(int iNo)
{
    int iCnt=0;
    int imulti =0;

    for(iCnt=1;iCnt<6;iCnt++)
    { 
        imulti=iNo*iCnt;
        printf("%d\t",imulti);
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