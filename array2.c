#include <stdio.h>

int main()
{
	int num1, num2, num3, num[3], i, sum1=0, sum2=0;
	FILE *inf;
	
	inf = fopen("output.txt", "w");
	
	num1 = 10;
	num2 = 20;
	num3 = 30;
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;

	fprintf(inf,"num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
	
	for(i=0;i<3;i++)
	{
		fprintf(inf,"Num[%d] = %d\n", i, num[i]);
		sum2 = sum2 + num[i];
	}
	
	sum1 = num1 + num2 + num3;
	//sum2 = num[0] + num[1] + num[2];
	printf("Sum1 = %d\n", sum1);
	printf("Sum2 = %d\n", sum2);
	
	fclose(inf);
	return 0;
}
