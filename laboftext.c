#include <stdio.h>

int main()
{
	FILE *inf, *out;
	int id[50], i=0, amt;
	float score[50];
	char name[50][6];
	
	inf = fopen("list.txt", "r");
	out = fopen("grade.txt", "w");
	
	fscanf(inf, "%d%s%f", &id[i], &name[i], &score[i]);
	
	while(!feof(inf))
	{
		i++;
		fscanf(inf, "%d%s%f", &id[i], &name[i], &score[i]);
	}
	
	for(amt=0;amt<i;amt++)
	{
		fprintf(out, "%d %s %.2f", id[amt], name[amt], score[amt]);
		if(score[amt] > 79 && score[amt] < 101)
		{
			fprintf(out, " A\n");
		}
		else if(score[amt] > 69 && score[amt] < 80)
		{
			fprintf(out, " B\n");
		}
		else if(score[amt] > 59 && score[amt] < 70)
		{
			fprintf(out, " C\n");
		}
		else if(score[amt] > 49 && score[amt] < 60)
		{
			fprintf(out, " D\n");
		}
		else
		{
			fprintf(out, " F\n");
		}
	}
	
	fclose(inf);
	fclose(out);
	return 0;
}
