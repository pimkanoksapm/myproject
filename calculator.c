#include <stdio.h>

int getmenu()
{
	int menu;
	
	printf("=======================================\n");
	printf("+ List of menu +\n");
	printf("+ 1. Calculator (get integers from keyboard) +\n");
	printf("+ 2. Calculator (get integers from integer file) +\n");
	printf("+ 3. Exit program +\n");
	printf("=======================================\n");
	printf("Select menu: ");
	scanf("%d", &menu);
	return(menu);
}

float calculator1()
{
	float num1, num2, result;
	char oper;
	
	printf("Enter number 1: ");
	scanf("%f", &num1);
	printf("Enter number 2: ");
	scanf("%f", &num2);
	printf("Enter an operator(+,-,*,/,%): ");
	scanf(" %c", &oper);
	
	if(oper == '+')
		result = num1+num2;
	else if(oper == '-')
		result = num1-num2;
	else if(oper == '*')
		result = num1*num2;
	else if(oper == '/')
		result = num1/num2;
	else if(oper == '%')
		result = (int)num1%(int)num2;
	
	return(result);
}

void calculator2(float num1[], float num2[], char oper[], float result[])
{
	FILE *inf, *out;
	int cnt=0, i;
	
	inf = fopen("list.txt", "r");
	out = fopen("result.txt", "w");
	fscanf(inf, "%f %c %f", &num1[cnt], &oper[cnt], &num2[cnt]);
	while(!feof(inf))
	{
		cnt++;
		fscanf(inf, "%f %c %f", &num1[cnt], &oper[cnt], &num2[cnt]);
	}
	for(i=0;i<cnt;i++)
	{
		if(oper[i] == '+')
			result[i] = num1[i]+num2[i];
		else if(oper[i] == '-')
			result[i] = num1[i]-num2[i];
		else if(oper[i] == '*')
			result[i] = num1[i]*num2[i];
		else if(oper[i] == '/')
			result[i] = num1[i]/num2[i];
		else if(oper[i] == '%')
			result[i] = (int)num1[i]%(int)num2[i];
		printf("%.2f %c %.0f = %.2f\n", num1[i], oper[i], num2[i], result[i]);
		fprintf(out, "%.2f %c %.2f = %.2f\n", num1[i], oper[i], num2[i], result[i]);
	}
	fclose(inf);
	fclose(out);
	
}

int main ()
{
	int menu;
	float ans, num1[20], num2[20], result[20];
	char oper[20];
	menu = getmenu();
	printf("User select menu %d\n", menu);
	
	if(menu == 1)
	{
		ans = calculator1();
		printf("The answer is %.2f", ans);
	}
	else if(menu == 2)
	{
		calculator2(num1, num2, oper, result);
	}
	else if(menu == 3)
	{
		printf("Bye bye..\n");
	}
	else
	{
		printf("Menu not found\n");
	}
		
	return 0;
}
