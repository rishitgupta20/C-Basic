#include <stdio.h>
int main()
{
	int length,breath,perimeter;
    printf("Enter the length of rectangle : ");
    scanf("%d", &length);
    printf("Enter the breath of rectangle : ");
	scanf("%d",&breath);
    perimeter=2*(length+breath);
	printf("perimeter of rectangle = %d \n",perimeter);
	return 0;
}
