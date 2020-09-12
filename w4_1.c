#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num > 79 && num < 101) //num 80-100
	{
		printf("Grade A\n");
	}
	else
	{
		printf("Try agian\n");
	}
	
	return 0;
}
