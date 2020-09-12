#include <stdio.h>

int main()
{
	int num1, num2;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	//printf("Enter two numbers: ");
	//scanf("%d %d", &num1, &num2);
	
	if(num1 > num2)
	{
		printf("Pimkanok\n");
	}
	else
	{
		printf("Num1=%d, Num2=%d\n", num1, num2);
	}
	
	return 0;
}
