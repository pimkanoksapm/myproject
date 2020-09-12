#include <stdio.h>
#include <ctype.h>

int main()
{
	char code, name[50];
	int price, gram;
	
	do
	{
		printf("Enter product code: ");
		scanf(" %c", &code);
		
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
	}while(toupper(code) != 'E');
	
	return 0;
}
