#include <stdio.h>

int main()
{
	char code[10], fname[30], lname[30];
	int student, mid, fin, sum, i;
	
	printf("Enter your subject: ");
	scanf("%s", &code);
	printf("Enter student amount: ");
	scanf("%d", &student);
	
	printf("*--------------------------------------------------*\n");
	printf("*--------------------------------------------------*\n");
	
	for(i=1;i<=student;i++)
	{
		printf("Enter your full name: ");
		scanf("%s %s", &fname, &lname);
		printf("Enter midterm score: ");
		scanf("%d", &mid);
		printf("Enter final score: ");
		scanf("%d", &fin);
		
		sum = mid + fin;
		
		if(sum > 79 && sum < 101)
		{
			printf("Name = %s %s, Grade = A, Excellent!!!\n", fname, lname);
			printf("*--------------------------------------------------*\n");
			printf("*--------------------------------------------------*\n");
		}
		else if(sum > 69 && sum < 80)
		{
			printf("Name = %s %s, Grade = B, Very Good\n", fname, lname);
			printf("*--------------------------------------------------*\n");
			printf("*--------------------------------------------------*\n");
		}
		else if(sum > 59 && sum < 70)
		{
			printf("Name = %s %s, Grade = C, Normal\n", fname, lname);
			printf("*--------------------------------------------------*\n");
			printf("*--------------------------------------------------*\n");
		}
		else if(sum > 49 && sum < 60)
		{
			printf("Name = %s %s, Grade = D, Fair\n", fname, lname);
			printf("*--------------------------------------------------*\n");
			printf("*--------------------------------------------------*\n");
		}
		else if(sum < 50)
		{
			printf("Name = %s %s, Grade = F, Not worry...try agian\n", fname, lname);
		}
		else
		{
			printf("Invalid, Please try agian.\n");
		}
	}
	
	printf("*--------------------------------------------------*\n");
	printf("*---------------Program terminated-----------------*\n");
	
	return 0;
}
