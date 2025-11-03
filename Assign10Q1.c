#include <stdio.h>
double CalculateAreaCircle(float fradii)
{   float pi = 3.14;
    float Area = pi*fradii*fradii;

    return Area;
}
int main()
{
    float Fradius=0.0f;
    printf("enter the circle radius : \n");
    scanf("%f",&Fradius);
    double dRet = CalculateAreaCircle(Fradius);
    printf("Area of Circle :%lf",dRet);

    return 0;
}