#include <stdio.h>

int main()
{
	float score;
	
	do
	{
		printf("Enter score: ");
		scanf("%f", &score);
	}while(score != -10);
	
	return 0;
}
