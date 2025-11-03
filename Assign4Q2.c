#include <stdio.h>
void FactRev(int iNo)
{
    int iCnt=0;
    
    printf("factors of number in reverse order : \n");
    for(iCnt=(iNo-1);iCnt>=1;iCnt--)
    {
            if((iNo%iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }

}
int main()
{
    int iValue =0;
    

    printf("enter the number : \n");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}