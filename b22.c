#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius=(fahrenheit-32)*5.0/9.0;
    printf("\n%.2f Fahrenheit = %.2f celsius", fahrenheit, celsius);
    return 0;
}