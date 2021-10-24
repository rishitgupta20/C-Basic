#include<stdio.h>
int main()
{
    float len,meter,kilometer;
    printf("Enter the length in centimeter :\n");
    scanf("%f",&len);
    meter=len/100;
    kilometer=meter/1000;
    printf("Length in meter : %f\nLength in kilometer : %f\n",meter,kilometer);
    return 0;
}