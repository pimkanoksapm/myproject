 #include <stdio.h>

int main()
{
	int id[30], cnt=0, i, code[30];
	char name[30][25];
	FILE *inf, *out1, *out2;
	
	inf = fopen("idtest.txt", "r");
	out1 = fopen("code1.txt", "w");
	out2 = fopen("code2.txt", "w");
	
	fscanf(inf, "%d", &id[cnt]);
	fgets(name[cnt],25,inf);
	fscanf(inf, "%d", &code[cnt]);
	
	while(!feof(inf))
	{
		cnt++;
		fscanf(inf, "%d", &id[cnt]);
		fgets(name[cnt],25,inf);
		fscanf(inf, "%d", &code[cnt]);
	}
	
	for(i=0;i<cnt;i++)
	{
		printf("id = %d, Name = %s, Code = %d\n", id[i], name[i], code[i]);
		
		if(code[i] == 1)
		{
			fprintf(out1, "id = %d, Name = %s, Code = %d\n", id[i], name[i], code[i]);
		}
		else
		{
			fprintf(out2, "id = %d, Name = %s, Code = %d\n", id[i], name[i], code[i]);
		}
	}
	
	fclose(inf);
	fclose(out1);
	fclose(out2);
	
	return 0 ;
}
