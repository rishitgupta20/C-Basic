#include<stdio.h>
int main()
{
    float Radius,Diameter,Circumference,Area;
    printf("Enter the radius of a circle :\n");
    scanf("%f",&Radius);
    Diameter=2*Radius;
printf("Diameter of a circle = %f\n",Diameter);
Circumference=2*3.14*Radius;
printf("Circumference of a circle = %f\n",Circumference);
Area=3.14*Radius*Radius;
printf("Area of a circle = %f\n",Area);
return 0;
}