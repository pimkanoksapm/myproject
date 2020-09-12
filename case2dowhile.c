#include <stdio.h>
#include <ctype.h>

int main()
{
	int salary, latebonus, otbonus, net, hours;
	char late, ot, code;
	
	do
	{
		printf("Enter Salary: ");
		scanf("%d", &salary);
		
		printf("Has Late (Y/N): ");
		scanf(" %c", &late);
		if(toupper(late) == 'N')
		{
			latebonus = 1000;
		}
		else
		{
			latebonus = 0;
		}
		
		printf("Has OT Hours (Y/N): ");
		scanf(" %c", &ot);
		if(toupper(ot) == 'Y')
		{
			printf("Enter OT Hours: ");
			scanf("%d", &hours);
			otbonus = hours * 200;
		}
		else
		{
			otbonus = 0;
		}
		
		net = salary + latebonus + otbonus;
		printf("Salary: %d\n", net);
		
		printf("\nEnter e to exit: ");
		scanf(" %c", &code);
	}while(toupper(code) != 'E');
	
	return 0;
}
