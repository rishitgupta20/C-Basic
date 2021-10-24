#include<stdio.h>
int main()
{
    float eng, phy, chem, math, comp, total, average, percentage;
    printf("Enter marks of english, physics, chemistry, maths, computer respectively: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = average;
    printf("Total marks = %.1f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f", percentage);

    return 0;
}