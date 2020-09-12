#include <stdio.h>
#include <ctype.h>

int main()
{
	int score, max, percent;
	char code;
	
	do
	{
		printf("Enter student score: ");
		scanf("%d", &score);
		printf("Enter max score: ");
		scanf("%d", &max);
	
		percent = (score*100)/max;
		printf("You got %d percent\n", percent);
	
		if(percent > 49)
		{
			printf("You Pass!\n");
		}
		else
		{
			printf("You Fail\n");
		}
		
		printf("\nEnter e to exit: ");
		scanf(" %c", &code);
	}while(toupper(code) != 'E');
	
	
	return 0;
}
