#include <stdio.h>

int main()
{
	char ch;
	
	printf("Enter a character: ");
	scanf(" %c", &ch);
	
	if(ch == 'A' || ch == 'a')
	{
		printf("It is a vowel.\n");
	}
	else if(ch >= '0' && ch <= '9')
	{
		printf("It is a number 0-9.\n");
	}
	else
	{
		printf("It is not a vowel/number.\n");	
	}
	
	return 0;
}
