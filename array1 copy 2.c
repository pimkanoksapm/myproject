#include <stdio.h>
#define max 20

int main()
{
	FILE *inf;
	char dept[max][50];
	int i=0, j;
	
	inf = fopen("depart.txt", "r");
	
	fscanf(inf, "%s", &dept[i]);
	while(!feof(inf))
	{
		i++;
		fscanf(inf, "%s", &dept[i]);
	}
	
	//print dept name on screen
	for(j=0;j<i;j++)
	{
		printf("Name = %s\n", dept[j]);
	}
	
	fclose(inf);
	
	return 0;
}
