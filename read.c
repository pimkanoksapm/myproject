#include <stdio.h>

int main()
{
	int num1, MHR;
	float num2;
	char fname[30], lname[30], sex;
	
	printf("Enter your firstname: ");
	scanf("%s", &fname);
	printf("Enter your lastname: ");
	scanf("%s", &lname);
	printf("Enter your age: ");
	scanf("%d", &num1);
	printf("Enter your GPA: ");
	scanf("%f", &num2);
	
	MHR = 206.9-(0.67*num1);
	printf("Full name = %s %s\n", fname, lname);
	printf("Age = %d\n", num1);
	printf("GPA = %.2f\n", num2);
	printf("Maximum Heart Rate(MHR) = %d\n", MHR);
	
		
	return 0;
}
