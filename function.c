#include <stdio.h>

void function1()
{
	printf("Hello from function1\n\n");
}

int function2(int id, float score) // pass by value
{
	if(score > 50)
	{
		printf("ID = %d -> Pass\n", id);
	}
	printf("Hello from function2\n\n");
	
	return(score);
}

char function3(char name[], int score, char sex) // pass by value
{
	char grade;
	if(score > 79)
		grade = 'S';
	else
		grade = 'U';
	printf("Hello from function3\n");

	return(grade);
}

int getandprint()
{
	FILE *inf, *out;
	int id, score, cnt=0;
	char name[25], sex;
	
	inf = fopen("student.txt", "r");
	out = fopen("report.txt", "w");
	
	fscanf(inf, "%d%s%d %c", &id, &name, &score, &sex);
	while(!feof(inf))
	{
		//printf("ID = %d, Name = %s, Score = %d, Sex = %c\n", id, name, score, sex);
		fprintf(out, "ID = %d, Name = %s, Score = %d, Sex = %c\n", id, name, score, sex);
		cnt++;
		fscanf(inf, "%d%s%d %c", &id, &name, &score, &sex);
	}
	fprintf(out, "Total student = %d\n", cnt);
	fclose(inf);
	fclose(out);
	return(cnt);
}

void getandprint1(int *cnt) // pass by reference - sent cnt to main
{
	FILE *inf, *out;
	int id, score;
	char name[25], sex;
	
	inf = fopen("student.txt", "r");
	out = fopen("report.txt", "w");
	printf("cnt = %d\n", *cnt);
	fscanf(inf, "%d%s%d %c", &id, &name, &score, &sex);
	while(!feof(inf))
	{
		//printf("ID = %d, Name = %s, Score = %d, Sex = %c\n", id, name, score, sex);
		fprintf(out, "ID = %d, Name = %s, Score = %d, Sex = %c\n", id, name, score, sex);
		(*cnt)++;
		fscanf(inf, "%d%s%d %c", &id, &name, &score, &sex);
	}
	fprintf(out, "Total student = %d\n", *cnt);
	fclose(inf);
	fclose(out);
}

void getandprint2(int id[], char name[][25], int score[], char sex[], int *cnt) // pass by reference - sent cnt to main
{
	FILE *inf, *out;
	
	inf = fopen("student.txt", "r");
	out = fopen("report.txt", "w");
	
	fscanf(inf, "%d%s%d %c", &id[*cnt], &name[*cnt], &score[*cnt], &sex[*cnt]);
	while(!feof(inf))
	{
		fprintf(out, "ID = %d, Name = %s, Score = %d, Sex = %c\n", id[*cnt], name[*cnt], score[*cnt], sex[*cnt]);
		(*cnt)++;
		fscanf(inf, "%d%s%d %c", &id[*cnt], &name[*cnt], &score[*cnt], &sex[*cnt]);
	}
	fprintf(out, "Total student = %d\n", *cnt);
	fclose(inf);
	fclose(out);
}

int main()
{
	//int ans=0, score;
	//char sex, grade, name[10];
	int id[10], score[10], ans=0, i;
	char name[10][25], sex[10], grade;
	FILE *out1;
	
	out1 = fopen("list.txt", "w");
	/*
	printf("Call function1\n");
	function1();
	
	printf("Call function2\n");
	ans = function2(1101,65.75);
	
	printf("Call function3\n");
	printf("Enter name: ");
	scanf("%s", &name);
	printf("Enter score: ");
	scanf("%d", &score);
	printf("Enter sex: ");
	scanf(" %c", &sex);
	grade = function3(name,score,sex);
	printf("Grade = %c\n", grade);
	grade = function3("Pimkanok",85,'f');
	printf("Grade = %c\n", grade);
	
	printf("Call getandprint\n");
	//ans = getandprint();
	//getandprint(ans);
	
	printf("Call getandprint1\n");
	getandprint1(&ans); 
	printf("Total student = %d\n", ans);
	*/
	
	getandprint2(id,name,score,sex,&ans);
	printf("Total student = %d\n", ans);
	
	for(i=0;i<ans;i++)
	{
		fprintf(out1, "ID = %d, Name = %s, Score = %d, Sex = %c\n", id[i], name[i], score[i], sex[i]);
	}
	fprintf(out1, "Total student = %d\n", ans);
	return 0;

}
