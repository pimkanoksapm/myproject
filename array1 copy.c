#include <stdio.h>

int main()
{
	int id[50], score[50], i=0, amt;
	char name[50][6];
	FILE *inf, *out, *out1;
	
	inf = fopen("data.txt", "r");
	out = fopen("out.txt", "w");
	
	fscanf(inf, "%d%s%d", &id[i], &name[i], &score[i]);
	
	while(!feof(inf)) //test
	{
		i++;
		fscanf(inf, "%d%s%d", &id[i], &name[i], &score[i]); //action
	}
	//print all array datas into out.txt
	for(amt=0;amt<i;amt++)
	{
		fprintf(out, "%d %-8s %d\n", id[amt], name[amt], score[amt]);
	}
	
	fclose(inf);
	fclose(out);
	
	out = fopen("out.txt", "r");
	i = 0;
	fscanf(inf, "%d%s%d", &id[i], &name[i], &score[i]);
	
	while(!feof(out)) //test
	{
		i++;
		fscanf(out, "%d%s%d", &id[i], &name[i], &score[i]); //action
	}
	
	out1 = fopen("final.txt","w");
	for(amt=0;amt<i;amt++)
	{
		printf("%d %-8s %d", id[amt], name[amt], score[amt]);
		fprintf(out1, "%d %-8s %d", id[amt], name[amt], score[amt]);
		if(score[amt] > 19)
		{
			printf(" Pass\n");
			fprintf(out1, " Pass\n");
		}
		else
		{
			printf(" Fail\n");
			fprintf(out1, "Fail\n");
		}
	}
	
	fclose(out);
	fclose(out1);
	
	return 0;
}
