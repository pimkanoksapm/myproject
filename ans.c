#include <stdio.h>

int main()
{
	float ans;
	ans = 8+(7+6/3.00-4)/2.00*5;
	printf("Answer = %.2f\n", ans);
	
	if(ans > 100)
	{
		printf("Greater than 100\n");
	}
	if(ans > 20)
	{
		printf("Greater than 20\n");
	}
	
	return 0;
}
