#include <stdio.h>

int main()
{
	float score;
	
	printf("Enter score: ");
	scanf("%f", &score);
	
	while(score != -10)
	{
		printf("Enter score: ");
		scanf("%f", &score);
	}
	
	return 0;
}
