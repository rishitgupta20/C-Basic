#include<stdio.h>
int main()
{
    int angle_a,angle_b,angle_c;
    printf("enter the angle a\n");
    scanf("%d",&angle_a);
    printf("enter the angle b\n");
    scanf("%d",&angle_b);
    angle_c=(180-(angle_a+angle_b));
    printf("angle c= %d",angle_c);
    return 0;
}
