#include <stdio.h>
#include <ctype.h>

int main()
{
	char name[50],exit='n';
	int age;
	FILE *inf, *inf1;
	
	inf = fopen("student.txt", "w");
	inf1 = fopen("backup.txt", "w");
	do
	{
		printf("Enter name: ");
		scanf("%s", &name);
		printf("Enter age: ");
		scanf("%d", &age);
		
		fprintf(inf, "%-20s %4d\n", name, age);
		fprintf(inf1, "%-20s %4d\n", name, age);
		
		printf("\nDo you want to Exit (y/n): ");
		scanf(" %c", &exit);
	}while(toupper(exit) != 'Y');
	fclose(inf);
	fclose(inf1);
	
	return 0;
}

