#include <stdio.h>
double CalculateAreaRectangle(float flength,float fbreadth)
{
    float Area = flength*fbreadth;

    return Area;
}
int main()
{
    float FLength=0.0f;
    float FBreadth=0.0f;
    printf("enter the Length and Breadth of Rectangle : \n");
    scanf("%f%f",&FLength,&FBreadth);
    double dRet = CalculateAreaRectangle(FLength,FBreadth);
    printf("Area of Rectangle is  :%lf",dRet);

    return 0;
}