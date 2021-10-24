#include <stdio.h>
#include <math.h>
int main()
{
    float a,area;
    printf("enter the number :\n");
    scanf("%f",&a);
    area=sqrt(3)/4*pow(a,2);
    printf("%f",area);
    return 0;
}