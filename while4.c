#include <stdio.h>

int main()
{
	int code, cnt=0;
	char name[30];
	float gpa;
	
	printf("Enter dept. code: "); //start loop
	scanf("%d", &code);
	
	while(code != -1) //test loop
	{
		printf("Enter name: ");
		scanf("%s", &name);
		printf("Enter GPA: ");
		scanf("%f", &gpa);
		
		if(code == 1) //count it student here
		{
			cnt++;
		}
		
		printf("\nEnter dept. code: "); //action
		scanf("%d", &code);
	}
	
	printf("Total IT student = %d\n", cnt);
	
	return 0;
}
