#include <stdio.h>

int main()
{
	int num, total=0, cnt=0;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	while(num != -1 && num != -2)
	{
		total = total + num;
		cnt++;
		
		printf("Enter number: ");
		scanf("%d", &num);	
	}
	
	printf("sum = %d\n", total);
	printf("average = %.2f\n", (float)total/cnt);
	
	return 0;
}
