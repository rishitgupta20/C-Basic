#include<stdio.h>
int main()
{
    float SPI;
    int g1,g2,g3,g4,g5,c1,c2,c3,c4,c5;
    printf("enter the g1,g2,g3,g4,g5 :\n");
    scanf("%d%d%d%d%d",&g1,&g2,&g3,&g4,&g5);
    printf("enter the c1,c2,c3,c4,c5 :\n");
    scanf("%d%d%d%d%d",&c1,&c2,&c3,&c4,&c5);
    SPI=(c1*g1+c2*g2+c3*g3+c4*g4+c5*g5/(c1+c2+c3+c4+c5));
    printf("the value of SPI is : %2f",SPI);
    return 0;
}
