#include <stdio.h>

int max(int num1, int num2)
{
	int result;
	
	if(num1 > num2)
		result = num1;
	else
		result = num2;
		
	return(result);
}

int findmax(int num1, int num2, int num3)
{
	int result;
	if(num1 > num2 && num1 > num3)
		result = num1;
	else if(num2 > num1 && num2 > num3)
		result = num2;
	else if(num3 > num1 && num3 > num2)
		result = num3;
	
	return(result); 
}

void printHello()
{
	printf("Hello my name is Pimkanok\n");
}

float average(int mid, int fi, int lab)
{
	float avg;
	avg = (mid+fi+lab)/3.0;
	return(avg);
}

int main()
{
	int data, mid, fi, lab;
	float ans;
	//data = max(100,20);
	//data = findmax(20,60,10);
	//printf("Data = %d\n", data);
	//printHello();
	//printHello();
	printf("Enter mid score: ");
	scanf("%d", &mid);
	printf("Enter final score: ");
	scanf("%d", &fi);
	printf("Enter lab score: ");
	scanf("%d", &lab);
	ans = average(mid,fi,lab);
	printf("Avg = %.2f\n", ans);

	return 0;
}
