#include<stdio.h>
int main()
{
    float r, volume;
    printf("Enter the radius of sphere :\n");
    scanf("%f",&r);
    volume=4.0/3.0*3.14*r*r*r;
    printf("the volume of the sphere is %f",volume);
    return 0;
}