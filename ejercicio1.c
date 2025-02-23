#include <stdio.h>

main ()
{
	float radio, area, circunferencia;
	
	printf("Ingrese radio del circulo: ");
	scanf("%f", &radio);
	
	area = radio * radio * 3.1416;
	circunferencia = 2 * 3.1416 * radio;
	
	printf("\nEl area es: %.2f\n", area);
	printf("La circunferencia es: %.2f", circunferencia);
}
