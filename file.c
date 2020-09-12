#include <stdio.h>

int main()
{
	FILE *data1, *data2, *out1, *out2, *out3;
	char name[30];
	int age;
	
	data1 = fopen("data1.txt", "r");
	data2 = fopen("data2.txt", "r");
	out1 = fopen("out1.txt", "w");
	out2 = fopen("out2.txt", "w");
	out3 = fopen("out3.txt", "w");
	
	/*fprintf(out1, "Name: Pimkanok Sapmoon");
	fprintf(out2, "Height: 162 cm");
	fprintf(out3, "Age: 21");*/
	
	//fscanf(data1, "%s", &name);
	fgets(name,30,data1);
	fscanf(data2, "%d", &age);
	
	fprintf(out2, "Name = %s", name);
	fprintf(out1, "Age = %d", age);
	
	fclose(data1);
	fclose(data2);
	fclose(out1);
	fclose(out2);
	fclose(out3);
	
	return 0;
}
