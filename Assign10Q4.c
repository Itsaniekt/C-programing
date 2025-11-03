#include <stdio.h>
double ConvertCelsius(float fFarhenit)
{
        double dCelsius = (fFarhenit -32)*5/9;

        return dCelsius;
}
int main()
{
    float ffarhenit=0.0f;
    printf("enter the temprature in Farehint : \n");
    scanf("%f",&ffarhenit);

    double dRet = ConvertCelsius(ffarhenit);
    printf("Temprature into Celsius : %lf\n",dRet);
    return 0;
}