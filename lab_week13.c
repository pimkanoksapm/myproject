#include <stdio.h>

int main()
{
	FILE *inf, *out1, *out2, *out3;
	int id[30], score[30], i, cnt=0, menu, idsearch, foundindex=-1, total1=0, total2=0;
	char fname[30][25], lname[30][30], sex[30];
	
	inf = fopen("student.txt", "r");
	out1 = fopen("list.txt", "w");
	out2 = fopen("high.txt", "w");
	out3 = fopen("low.txt", "w");
	
	fscanf(inf, "%d%s%s %c%d", &id[cnt], &fname[cnt], &lname[cnt], &sex[cnt], &score[cnt]);
	
	while(!feof(inf))
	{
		cnt++;
		fscanf(inf, "%d%s%s %c%d", &id[cnt], &fname[cnt], &lname[cnt], &sex[cnt], &score[cnt]);
	}
	
	do
	{
	
		printf("Main Menu of Student Management Program (SMP)\n");
		printf("=============================================\n");
		printf("  1. Add a new student into array\n");
		printf("  2. Update score\n");
		printf("  3. List all data of array id, name, sex and score\n");
		printf("  4. Print all array data to output file\n");
		printf("  5. Exit\n");
		printf("Select menu(1-5): ");
		scanf("%d", &menu);
		
		if(menu == 1)
		{
			printf("Add Menu\n");
			printf("=======\n");
			printf("Enter ID: ");
			scanf("%d" ,&idsearch);
				
			for(i=0;i<cnt;i++)
			{
				if(idsearch == id[i])
				{
					foundindex = i;
				}
			}
			
			if(foundindex != -1)
			{
				printf("Duplicated ID!!! %d\n", idsearch);
			}
			else
			{
				printf("Enter Name: ");
				scanf("%s %s", &fname[cnt+1], &lname[cnt+1]);
				printf("Sex: ");
				scanf(" %c", &sex[cnt+1]);
				printf("Score: ");
				scanf("%d", &score[cnt+1]);
				printf("Add Completed!!!\n");
			}
		}
		else if(menu == 2)
		{
			printf("Update Score\n");
			printf("=======\n");
			printf("Enter ID: ");
			scanf("%d" ,&idsearch);
			
			for(i=0;i<cnt;i++)
			{
				if(idsearch == id[i])
				{
					foundindex = i;
				}
			}
			
			if(foundindex != -1)
			{
				printf("ID = %d, Old Score = %d\n", id[foundindex], score[foundindex]);
				printf("Enter new score: ");
				scanf("%d", &score[foundindex]);
				printf("Score is updated.\n");
			}
			else
			{
				printf("Find not found!!!\n");
			}
		}
		if(menu == 3)
		{
			fprintf(out1, "\tList of students are in the class\n");
			fprintf(out1, "\t==============================\n");
			for(i=0;i<cnt;i++)
			{
				fprintf(out1, "%d %-15s %-15s %-5c %d\n", id[i], fname[i], lname[i], sex[i], score[i]);
			}
			fprintf(out1, "\t==============================\n");
		}
		else if(menu == 4)
		{
			fprintf(out2, "ID         Name                    Score    Sex\n");
			fprintf(out2, "**         ****                    *****    ***\n");
			fprintf(out3, "ID         Name                    Score    Sex\n");
			fprintf(out3, "**         ****                    *****    ***\n");
			
			for(i=0;i<cnt;i++)
			{
				if(score[i] > 69)
				{
					fprintf(out2, "%d %-15s %-15s %-5d ", id[i], fname[i], lname[i], score[i]);
					total1++;
					if(sex[i] == 'f')
					{
						fprintf(out2, "female\n");
					}
					else 
					{
						fprintf(out2, "male\n");
					}
				}
				else
				{
					fprintf(out3, "%d %-15s %-15s %-5d ", id[i], fname[i], lname[i], score[i]);
					total2++;
					if(sex[i] == 'f')
					{
						fprintf(out3, "female\n");
					}
					else 
					{
						fprintf(out3, "male\n");
					}
				}
			}
			
			fprintf(out2, "========================================\n");
			fprintf(out2, "Total Student = %d\n", total1);
			
			fprintf(out3, "========================================\n");
			fprintf(out3, "Total Student = %d\n", total2);
			
		}
		printf("\n");
	}while(menu != 5);
	
	printf("Program terminated!...\n");
	
	fclose(inf);
	fclose(out1);
	fclose(out2);
	fclose(out3);
	
	return 0;
}
