#include <stdio.h>
void CheckPositiveNegative(int num)
{
    if(num>0)
    {
        printf("  it is positive  number \n");
    }
    else if(num<0)
    {
        printf("it is negative number \n");
    }
    else
    {
        
        printf(" it is neither positve  nor  negative \n");
    }
}
int main()
{
    int number =0;
    printf("enter the number : \n");
    scanf("%d",&number);

    CheckPositiveNegative(number);
    return 0;
}