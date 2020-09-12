#include <stdio.h>
void function1()
{
	printf("Hello from function1\n");
}

int function2(int id,float score)
{
	if(score > 50)
	{
		printf("ID = %d -> Pass\n",id);
	}
	printf("Hello from function2\n");
	return(score);
}
char function3(char name[], int score, char sex)
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
	FILE *inf,*out;
	int id,score,cnt=0;
	char name[25],sex;	
	inf = fopen("student.txt","r");
	out = fopen("report.txt","w");
	fscanf(inf,"%d%s%d %c",&id,&name,&score,&sex);
	while(!feof(inf))
	{
		fprintf(out,"id=%d,name=%s,score=%d,sex=%c\n",id,name,score,sex);
		cnt++;
		fscanf(inf,"%d%s%d %c",&id,&name,&score,&sex);
	}
	fprintf(out,"Total student = %d\n",cnt);
	fclose(inf);
	return(cnt);
}
void getandprint1(int *cnt)
{
	FILE *inf,*out;
	int id,score;
	char name[25],sex;	
	inf = fopen("student.txt","r");
	out = fopen("report.txt","w");
	printf("Cnt = %d\n",*cnt);
	fscanf(inf,"%d%s%d %c",&id,&name,&score,&sex);
	while(!feof(inf))
	{
		fprintf(out,"id=%d,name=%s,score=%d,sex=%c\n",id,name,score,sex);
		(*cnt)++;
		fscanf(inf,"%d%s%d %c",&id,&name,&score,&sex);
	}
	fprintf(out,"Total student = %d\n",*cnt);
	fclose(inf);	
}
void getandprint2(int id[],char name[][25],int score[],char sex[],int *cnt)
{
	FILE *inf,*out;
	inf = fopen("student.txt","r");
	out = fopen("report.txt","w");	
	fscanf(inf,"%d%s%d %c",&id[*cnt],&name[*cnt],&score[*cnt],&sex[*cnt]);
	while(!feof(inf))
	{
		fprintf(out,"id=%d,name=%s,score=%d,sex=%c\n",id[*cnt],name[*cnt],score[*cnt],sex[*cnt]);
		(*cnt)++;
		fscanf(inf,"%d%s%d %c",&id[*cnt],&name[*cnt],&score[*cnt],&sex[*cnt]);
	}
	fprintf(out,"Total student = %d\n",*cnt);
	fclose(inf);	
}
int main()
{
	int ans=0,i;
	char grade;
	FILE *out1;
	int id[10],score[10];
	char name[10][25],sex[10];	
	out1 = fopen("list.txt","w");
/*	printf("call function1\n");
	function1();
	printf("call function2\n");
	ans = function2(1101,65.75);
	printf("call function3\n");
	grade = function3("Sirinthorn",68,'f');
	printf("Grade = %c\n",grade);
	printf("call getandprint\n");
	//ans = getandprint();
	getandprint1(&ans);*/
	getandprint2(id,name,score,sex,&ans);
	printf("Total student = %d\n",ans);	
	for(i=0; i<ans; i++)
	{
		fprintf(out1,"id=%d,name=%s,score=%d,sex=%c\n",id[i],name[i],score[i],sex[i]);
	}
	fprintf(out1,"Total student = %d\n",ans);	
	return 0;
}
