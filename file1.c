#include <stdio.h>

int main()
{
	FILE *inf, *out1, *out2;
	char name[20];
	int age;
	
	inf = fopen("student.txt", "r");
	out1 = fopen("no1.txt", "w");
	out2 = fopen("no2.txt", "w");
	fscanf(inf, "%s%d", &name, &age);
	
	while(!feof(inf))
	{
		//printf("Name = %s, Age = %d\n", name, age);
		if(age > 17 && age < 21)
		{
			fprintf(out1,"Name = %s, Age = %d\n", name, age);
		}
		else
		{
			fprintf(out2,"Name = %s, Age = %d\n", name, age);
		}
		fscanf(inf, "%s%d", &name, &age);
	}
	fclose(inf);
	fclose(out1);
	fclose(out2);
	return 0;
}
