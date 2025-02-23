#include <stdio.h>
#include <math.h>

main ()
{
	float x1, y1, x2, y2, x3, y3, l1, l2 ,l3;
	
	printf("Ingrese x1: ");
	scanf("%f", &x1);
	printf("Ingrese y1: ");
	scanf("%f", &y1);	
	printf("Ingrese x2: ");	
	scanf("%f", &x2);
	printf("Ingrese y2: ");
	scanf("%f", &y2);
	printf("Ingrese x3: ");
	scanf("%f", &x3);
	printf("Ingrese y3: ");
	scanf("%f", &y3);
	
	l1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	l2 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	l3 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	
	printf("El perimetro es %.2f", l1 + l2 + l3);
}
