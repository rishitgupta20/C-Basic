#include <stdio.h>
int main()
{
	int length,breath,area;
    printf("Enter the length of rectangle : ");
    scanf("%d", &length);
    printf("Enter the breath of rectangle : ");
	scanf("%d",&breath);
    area=length*breath;
	printf("area of rectangle = %d\n",area);
	return 0;
}
