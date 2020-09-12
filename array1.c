#include <stdio.h>

int main()
{
	int num1, num2, num3, num[3];
	FILE *inf;
	
	inf = fopen("output.txt", "w");
	
	num1 = 10;
	num2 = 20;
	num3 = 30;
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;

	fprintf(inf,"num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
	fprintf(inf,"Num[0] = %d\n", num[0]);
	fprintf(inf,"Num[1] = %d\n", num[1]);
	fprintf(inf,"Num[2] = %d\n", num[2]);
	
	fclose(inf);
	return 0;
}
