#include <stdio.h>
int main()
{
	int num;
	char ch;
	float f;
	printf("Enter Interger,Float and Character Respectively :\n");
	scanf("%d", &num);
	scanf("%f %c",&f,&ch);
	printf("Entered integer is: %d", num);
	printf("\nEntered float is: %f", f);
	printf("\nEntered character is: %c \n", ch);
	return 0;
}
