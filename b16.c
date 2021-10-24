#include<stdio.h>
int main()
{
    int a,b,sum,subtract,multiply,divide,modulus;
    printf("enter the number a :\n");
    scanf("%d",&a);
    printf("enter the number b :\n");
    scanf("%d",&b);
    sum=a+b;
    subtract=a-b;
    multiply=a*b;
    divide=a/b;
    modulus=a%b;
    printf("\naddition of a and b = %d\nsubtraction of a and b = %d\nmultiplication of a and b = %d\ndivision of a and b = %d\nmodulus of a and b = %d",sum,subtract,multiply,divide,modulus);
return 0;
}