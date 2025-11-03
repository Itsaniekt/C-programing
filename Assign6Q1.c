#include <stdio.h>
int main()
{
    printf("please enter the full name : \n");
    char cName[30];
    scanf(" %[^\n]s",cName);
    printf("your name is :%s",cName);
    return 0;
}