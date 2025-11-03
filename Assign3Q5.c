#include <stdio.h>

typedef int bool;
#define TRUE 1;
#define FALSE 0;
bool CheckVowel(char CValue)
{
if(CValue=='a'||CValue=='i'||CValue=='e'||CValue=='o'||CValue=='u'||CValue=='A'||CValue=='E'||CValue=='I'||CValue=='O'||CValue=='U')
{
    return TRUE;
}
else
{
    return FALSE;
}
}
int main()
{
    char Cvalue='\0';
    printf("enter the alphabet :\n");
    scanf("%c",&Cvalue);

    bool bRet = CheckVowel(Cvalue);
    if(bRet==1)
    {
        printf("it is vowel\n");
    }
    else
    {
        printf("it is consonent\n");
    }

    return 0;
}
                                                                                                                                                           