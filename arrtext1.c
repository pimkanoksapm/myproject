#include <stdio.h>

int main()
{
	int id[30], cnt=0, i, j, Last, Temp;
	FILE *inf;
	
	inf = fopen("id.txt", "r");
	
	fscanf(inf, "%d", &id[cnt]);
	while(!feof(inf))
	{
		cnt++;
		fscanf(inf, "%d", &id[cnt]);
	}
	
	for(i=0;i<cnt;i++)
	{
		printf("id = %d\n", id[i]);
	}
	//insert bubble algorithm here
	
	for(Last=cnt-1; Last>=0; Last--) 
	{
   		for(j=0; j<=Last-1; j++) 
   		{ 
       		if(id[j] > id[j+1]) 
	   		{ 
			   Temp = id[j]; 
			   id[j] = id[j+1]; 
			   id[j+1] = Temp; 
	   		}
		}
	}
	
	printf("========== After Sorting ==========\n");
	for(i=0;i<cnt;i++)
	{
		printf("id = %d\n", id[i]);
	}
	
	fclose(inf);
	
	return 0 ;
}

