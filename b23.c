#include <stdio.h>
int main()
{
    int days,years,weeks;
    printf("Enter Days: ");
    scanf("%d",&days);
    years=days/365;
    weeks=(days-years*365)/7;
    days=(days-years*365-weeks*7);
    printf("%d Year %d Week %d Day\n",years,weeks,days);
    return 0;
}