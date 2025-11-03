#include <stdio.h>
int CovertKmtoM(int iKm)
{
    int iMeter= iKm *1000;
    
    return iMeter;
}
int main()
{
    int iKiloM=0;
    printf("enter the distance in (km) : \n");
    scanf("%d",&iKiloM);

    int iRet=CovertKmtoM(iKiloM);
    printf("Kilometer in meter : %d\n",iRet);

    return 0;
}