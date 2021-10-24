#include <stdio.h>
int main()
{
    float P,T,R,SI;
    printf("enter the principal\n");
    scanf("%f",&P);
    printf("enter the time\n");
    scanf("%f",&T);
    printf("enter the  rate\n");
    scanf("%f",&R);
    SI=P*T*R/100;
    printf("SIMPLE INTEREST=%.4f",SI);
    return 0;
}