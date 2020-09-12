#include <stdio.h>

int main()
{
	float score;
	char name[30], lname[30], id[15];
	char grade;
	
	printf("Enter name: ");
	scanf("%s", &name);
	
	printf("Enter surname: ");
	scanf("%s", &lname);
	
	printf("Enter ID: ");
	scanf("%s", &id);
	
	printf("Enter total score: ");
	scanf("%f", &score);
	
	//write statemaent for grade calculating
	
	if(score >= 80) //grade A
	{
		grade = 'A';
	}
	
	if(score >= 69 && score < 80) //grade B
	{
		grade = 'B';
	}
	
	if(score >= 59 && score < 70) //grade C
	{
		grade = 'C';
	}
	
	if(score >= 49 && score < 60) //grade D
	{
		grade = 'D';
	}
	
	if(score < 50) //grade F
	{
		grade = 'F';
	}
	
	printf("\n########################################\n");
	printf("Studenr name: %s %s\n", name, lname);
	printf("Studenr ID: %s\n", id);
	printf("You got grade %c\n", grade);
	printf("########################################\n");
	
	if(grade == 'A')
	{
		printf("Congratulation!!!!!\n");
	}
	
	if(grade == 'F')
	{
		printf("Don't worry try agian.\n");
	}
	
	return 0;
}
