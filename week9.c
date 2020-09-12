#include <stdio.h>

int main()
{
	FILE *inf, *out1, *out2;
	char code[10], name[30], cargo;
	int amount, price, total1=0, total2=0;
	
	inf = fopen("item.txt", "r");
	out1 = fopen("itemA.txt", "w");
	out2 = fopen("itemB.txt", "w");
	
	fscanf(inf, "%s", &code);
	fgets(name,30,inf);
	fscanf(inf, "%d", &amount);
	fscanf(inf, "%d", &price); 
	fscanf(inf, " %c", &cargo);
	
	while(!feof(inf))
	{
		if(cargo == 'A')
		{
			fprintf(out1, "%-10s%10s%5d%5d%5c\n", code, name, amount, price, cargo);
			total1++;
		}
		else if(cargo == 'B')
		{
			fprintf(out2, "%-10s%10s%5d%5d%5c\n", code, name, amount, price, cargo);
			total2++;
		}
		
		fscanf(inf, "%s", &code);
		fgets(name,30,inf);
		fscanf(inf, "%d", &amount);
		fscanf(inf, "%d", &price);
		fscanf(inf, " %c", &cargo);
	}
	
	fprintf(out1, "----\n");
	fprintf(out1, "Total list(s) = %d\n", total1);
	
	fprintf(out2, "----\n");
	fprintf(out2, "Total list(s) = %d\n", total2);
	
	fclose(inf);
	fclose(out1);
	fclose(out2);
	
	return 0;
}
