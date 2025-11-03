#include <stdio.h>
void DisplayConvert(char CValue)
{
    if((CValue>='a')&&(CValue<='z'))
    {
        CValue=CValue-('a'-'A');
        printf("%c",CValue);
    }
    else if((CValue>='A')&&(CValue<='Z'))
    {
        CValue=CValue-('A'-'a');

        printf("%c",CValue);
    }
}

int main()
{
    char cValue ='\0';
    printf("enter the character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);
    return 0;
}