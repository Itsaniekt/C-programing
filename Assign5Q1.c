#include <stdio.h>
void CheckEvenOdd(int num)
{
    if(num%2==0)
    {
        printf("%d  it is even  number \n",num);
    }
    else
    {
        printf("%d it is odd number \n",num);
    }
}
int main()
{
    int number =0;
    printf("enter the number : \n");
    scanf("%d",&number);

    CheckEvenOdd(number);
    return 0;
}