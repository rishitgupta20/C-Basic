#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,z;
    printf("enter the number :\n");
    scanf("%d",&x);
    printf("enter the power of number :\n");
    scanf("%d",&y);
    z=pow(x,y);
    printf("%d",z);
    return 0;
}