#include <stdio.h>
#include <ctype.h>

int main()
{
	char code, name[50];
	int price, gram;
	
	printf("Enter product code: ");
	scanf(" %c", &code);
	
	while(toupper(code) != 'E')
	{
		if(toupper(code) == 'B')
		{
			printf("Enter author name: ");
			scanf("%s", &name);
			printf("Enter price: ");
			scanf("%d", &price);
		}
		else if(toupper(code) == 'P')
		{
			printf("Enter gram: ");
			scanf("%d", &gram);
		}
		else
		{
			printf("Invalid code. Please Try agian.\n");
		}
		
		printf("Enter product code: ");
		scanf(" %c", &code);
	}
	
	return 0;
}
