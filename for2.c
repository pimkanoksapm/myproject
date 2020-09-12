#include  <stdio.h>

int main()
{
	int i, dept, cnt1=0, cnt2=0, cnt3=0, cnt4=0;
	char id[5];
	
	for(i=1;i<11;i++)
	{
		printf("Employee #%d id: ", i);
		scanf(" %s", &id);
		printf("Department: ");
		scanf("%d", &dept);
		
		if(dept == 1)
		{
			cnt1++;
		}
		else if(dept == 2)
		{
			cnt2++;
		}
		else if(dept == 3)
		{
			cnt3++;
		}
		else if(dept == 4)
		{
			cnt4++;
		}
	}
	
	printf("\nAccounting = %d, ", cnt1);
	printf("IT = %d, ", cnt2);
	printf("Engineering = %d, ", cnt3);
	printf("Marketing = %d\n", cnt4);
	
	return 0;
}
