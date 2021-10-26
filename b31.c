#include <stdio.h>
#include<math.h>
int main()
{
    float P,T,R,n,CI;
    printf("enter the principal\n");
    scanf("%f",&P);
    printf("enter the time\n");
    scanf("%f",&T);
    printf("enter the  rate\n");
    scanf("%f",&R);
    printf("enter n\n");
    scanf("%f",&n);
    CI=P*pow(( 1 + R/100),(n*T)) - P;
    printf("COMPOUND INTEREST=%.4f",CI);
    return 0;
}
