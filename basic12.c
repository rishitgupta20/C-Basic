#include <stdio.h>
int main()
{
    float a,b,h,area;
    printf("enter the values of a , b and h respectively:\n");
    scanf("%f %f %f",&a,&b,&h);
    area=((a+b)/2)*h;
    printf("area of trapezium = %f",area);
    return 0;
}