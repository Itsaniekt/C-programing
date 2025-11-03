#include<stdio.h>
void FindLargest(int iNo1,int iNo2,int iNo3)
{
        if(iNo1>iNo2&&iNo1>iNo3)
        {
            printf("%d is largest \n",iNo1);
        }
        else if(iNo2>iNo3&&iNo2>iNo1)
        {
            printf("%d is largest \n",iNo2);
        }
        else{
            printf("%d is largest \n",iNo3);
        }
}
int main(){
    int iNum1=0,iNum2=0,iNum3=0;
    printf("Enter the three numbers :\n");
    scanf("%d%d",&iNum1,&iNum2);
    scanf("%d",&iNum3);

    FindLargest(iNum1,iNum2,iNum3);
    return 0;
}