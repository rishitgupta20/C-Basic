#include <stdio.h>
int main()
{
    float base,height,area;
    printf("enter the base :\n");
    scanf("%f",&base);
    printf("enter the height :\n");
    scanf("%f",&height);
    area=(1.0/2.0*(base*height));
    printf("area of triangle =%f",area);
    return 0;
}