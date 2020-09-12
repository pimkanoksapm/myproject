#include <stdio.h>

int main()
{
	FILE *inf;
	int id[20], i=0, j;
	char subject[20][6];
	float score[20];
	
	inf = fopen("student.txt", "r");
	
	fscanf(inf, "%d%s%f", &id[i], &subject[i], &score[i]);
	
	while(!feof(inf))
	{
		i++;
		fscanf(inf, "%d%s%f", &id[i], &subject[i], &score[i]);
	}
	
	for(j=0;j<i;j++)
	{
		printf("%d %s %.2f\n", id[j], subject[j], score[j]);
	}
	
	fclose(inf);
	
	return 0;
}
