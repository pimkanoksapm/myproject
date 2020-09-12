#include <stdio.h>

int main()
{
	int id[20], dept[20], year[20], i=0, j, cnt1=0, cnt2=0, cnt3=0, cnt4=0, cnt5=0, cnt6=0, cnt7=0;
	int m1[20], m2[20], m3[20], m4[20], m5[20], m6[20], m7[20];
	char name[20][23];
	FILE *inf, *inf1, *out, *mode1, *mode2, *mode3, *mode4, *mode5, *mode6, *mode7, *sum;
	
	inf = fopen("science.txt", "r");
	inf1 = fopen("edimond.txt", "r");
	out = fopen("all.txt", "w");
	
	fscanf(inf, "%d%s%d%d", &id[i], &name[i], &dept[i], &year[i]);
	
	while(!feof(inf))
	{
		i++;
		fscanf(inf, "%d%s%d%d", &id[i], &name[i], &dept[i], &year[i]);
	}
	
	for(j=0;j<i;j++)
	{
		fscanf(inf1, "%d%d%d%d%d%d%d", &m1[j], &m2[j], &m3[j], &m4[j], &m5[j], &m6[j], &m7[j]);
	}
	
	for(j=0;j<i;j++)
	{
		fprintf(out, "%d %-25s %d %d ", id[j], name[j], dept[j], year[j]);
		fprintf(out, "%d %d %d %d %d %d %d\n", m1[j], m2[j], m3[j], m4[j], m5[j], m6[j], m7[j]);
		
		printf("%d %-25s %d %d ", id[j], name[j], dept[j], year[j]);
		printf("%d %d %d %d %d %d %d\n", m1[j], m2[j], m3[j], m4[j], m5[j], m6[j], m7[j]);
	}
	
	fclose(inf);
	fclose(inf1);
	fclose(out);
	
	out = fopen("all.txt", "r");
	mode1 = fopen("mode1.txt", "w");
	mode2 = fopen("mode2.txt", "w");
	mode3 = fopen("mode3.txt", "w");
	mode4 = fopen("mode4.txt", "w");
	mode5 = fopen("mode5.txt", "w");
	mode6 = fopen("mode6.txt", "w");
	mode7 = fopen("mode7.txt", "w");
	sum = fopen("summary.txt", "w");
	
	fprintf(mode1, "========== Mode 1 ==========\n");
	fprintf(mode2, "========== Mode 2 ==========\n");
	fprintf(mode3, "========== Mode 3 ==========\n");
	fprintf(mode4, "========== Mode 4 ==========\n");
	fprintf(mode5, "========== Mode 5 ==========\n");
	fprintf(mode6, "========== Mode 6 ==========\n");
	fprintf(mode7, "========== Mode 7 ==========\n");
	
	for(j=0;j<i;j++)
	{
		if(m1[j] == 1)
		{
			fprintf(mode1, "No.%d %s\n", j+1, name[j]);
			cnt1++;
		}
		if(m2[j] == 1)
		{
			fprintf(mode2, "No.%d %s\n", j+1, name[j]);
			cnt2++;
		}
		if(m3[j] == 1)
		{
			fprintf(mode3, "No.%d %s\n", j+1, name[j]);
			cnt3++;
		}
		if(m4[j] == 1)
		{
			fprintf(mode4, "No.%d %s\n", j+1, name[j]);
			cnt4++;
		}
		if(m5[j] == 1)
		{
			fprintf(mode5, "No.%d %s\n", j+1, name[j]);
			cnt5++;
		}
		if(m6[j] == 1)
		{
			fprintf(mode6, "No.%d %s\n", j+1, name[j]);
			cnt6++;
		}
		if(m7[j] == 1)
		{
			fprintf(mode7, "No.%d %s\n", j+1, name[j]);
			cnt7++;
		}
	}
	fprintf(mode1, "Total = %d\n", cnt1);
	fprintf(mode2, "Total = %d\n", cnt2);
	fprintf(mode3, "Total = %d\n", cnt3);
	fprintf(mode4, "Total = %d\n", cnt4);
	fprintf(mode5, "Total = %d\n", cnt5);
	fprintf(mode6, "Total = %d\n", cnt6);
	fprintf(mode7, "Total = %d\n", cnt7);
	
	fprintf(sum, "ID         Name                     Dept  Year   E1  E2  E3  E4  E5  E6  E7\n");
	fprintf(sum, "-----------------------------------------------------------------------------\n");
	
	for(j=0;j<i;j++)
	{
		fprintf(sum, "%d %-25s %-5d %-5d ", id[j], name[j], dept[j], year[j]);
		if(m1[j] == 1)
		{
			fprintf(sum, "Yes ");
		}
		else
		{
			fprintf(sum, "-   ");
		}
		if(m2[j] == 1)
		{
			fprintf(sum, "Yes ");
		}
		else
		{
			fprintf(sum, "-   ");
		}
		if(m3[j] == 1)
		{
			fprintf(sum, "Yes ");
		}
		else
		{
			fprintf(sum, "-   ");
		}
		if(m4[j] == 1)
		{
			fprintf(sum, "Yes ");
		}
		else
		{
			fprintf(sum, "-   ");
		}
		if(m5[j] == 1)
		{
			fprintf(sum, "Yes ");
		}
		else
		{
			fprintf(sum, "-   ");
		}
		if(m6[j] == 1)
		{
			fprintf(sum, "Yes ");
		}
		else
		{
			fprintf(sum, "-   ");
		}
		if(m7[j] == 1)
		{
			fprintf(sum, "Yes ");
		}
		else
		{
			fprintf(sum, "-   ");
		}
		fprintf(sum, "\n");
	}
	
	fclose(out);
	fclose(mode1);
	fclose(mode2);
	fclose(mode3);
	fclose(mode4);
	fclose(mode5);
	fclose(mode6);
	fclose(mode7);
	fclose(sum);
	
	return 0;
}
