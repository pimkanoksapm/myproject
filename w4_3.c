#include <stdio.h>

int main()
{
	char name[30], grade;
	int id;
	float score;
	
	//first student
	printf("Enter name: ");
	scanf("%s", &name);
	
	printf("Enter ID: ");
	scanf("%d", &id);
	
	printf("Enter total score: ");
	scanf("%f", &score);
	
	if(score > 79)
	{
		grade = 'A';
	}
	else if(score > 69 && score < 80)
	{
		grade = 'B';
	}
	else if(score > 59 && score < 70)
	{
		grade = 'C';
	}
	else if(score > 49 && score < 60)
	{
		grade = 'D';	
	}
	else
	{
		grade = 'F';
	}
	
	printf("\n=============================================\n");
	printf("Name :  %s\n", name);
	printf("ID : %d\n", id);
	printf("Grade : %c\n", grade);
	printf("=============================================\n\n");
	
	//second student
	printf("Enter name: ");
	scanf("%s", &name);
	
	printf("Enter ID: ");
	scanf("%d", &id);
	
	printf("Enter total score: ");
	scanf("%f", &score);
	
	if(score > 79)
	{
		grade = 'A';
	}
	else if(score > 69 && score < 80)
	{
		grade = 'B';
	}
	else if(score > 59 && score < 70)
	{
		grade = 'C';
	}
	else if(score > 49 && score < 60)
	{
		grade = 'D';	
	}
	else
	{
		grade = 'F';
	}
	
	printf("\n=============================================\n");
	printf("Name :  %s\n", name);
	printf("ID : %d\n", id);
	printf("Grade : %c\n", grade);
	printf("=============================================\n\n");

	return 0;
}
