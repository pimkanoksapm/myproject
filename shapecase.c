#include <stdio.h>

int main()
{
	char code;
	int base, height, lenght, sky, night, shine;
	float areatri, areasq, areapa, areastar;
	
	printf("Enter shape code (T,S,P,R): ");
	scanf(" %c", &code);
	printf("-------------------------\n");
	
	switch(code)
	{
		case 'T' :
		case 't' :	printf("Shape is Triangle\n");
					printf("Enter base: ");
					scanf("%d", &base);
					printf("Enter height: ");
					scanf("%d", &height);
					
					areatri = 0.5*base*height;
					printf("-------------------------\n");
					printf("Area  of Triangle = %.2f\n", areatri);
					printf("-------------------------\n");
					break;
		
		case 'S' :
		case 's' :	printf("Shape is Square\n");
					printf("Enter lenght: ");
					scanf("%d", &lenght);
					
					areasq = lenght*lenght;
					printf("-------------------------\n");
					printf("Area of Square = %.2f\n", areasq);
					printf("-------------------------\n");
					break;
		
		case 'P' :
		case 'p' :	printf("Shape is Parallelogram\n");
					printf("Enter base: ");
					scanf("%d", &base);
					printf("Enter height: ");
					scanf("%d", &height);
					
					areapa = base*height;
					printf("-------------------------\n");
					printf("Area of Parallelogram = %.2f\n", areapa);
					printf("-------------------------\n");
					break;
					
		case 'R' :
		case 'r' :	printf("Shape is Star\n");
					printf("Enter sky: ");
					scanf("%d", &sky);
					printf("Enter night: ");
					scanf("%d", &night);
					printf("Enter shine: ");
					scanf("%d", &shine);
					
					areastar = sky+night+(shine*shine);
					printf("-------------------------\n");
					printf("Area of Star = %.2f\n", areastar);
					printf("-------------------------\n");
					break;
		
		default :	printf("This code not found!\n");
					printf("Please enter code (T,S,P,R) only\n");
	}
	
	return 0;
}
