#include <stdio.h>
double ConvertSQFintoSQM(float fSqm)
{
        double dArea = fSqm *0.0929;

        return dArea;
}
int main()
{
    float fSQM=0.0f;
    printf("enter the Square Feet : \n");
    scanf("%f",&fSQM);

    double dRet = ConvertSQFintoSQM(fSQM);
    printf("Squarefeet into Sqauare meter : %lf\n",dRet);
    return 0;
}