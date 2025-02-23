#include <stdio.h>

main ()
{
	float radio, generatriz, altura, areaBase, areaLateral, areaTotal, volumen;
	
	printf("Ingrese el radio del cono: ");
	scanf("%f", &radio);
	printf("Ingrese la generatriz del cono: ");
	scanf("%f", &generatriz);
	printf("Ingrese la altura del cono: ");
	scanf("%f", &altura);
	
	areaBase = 3.1416 * radio * radio;
	areaLateral = 3.1416 * radio * generatriz;
	
	printf("\nEl area base es: %.2f\n", areaBase);
	printf("El area lateral es: %.2f\n", areaLateral);
	printf("El area total es: %.2f\n", areaBase + areaLateral);
	printf("El volumen es: %.2f\n", 1 / 3.0 * areaBase * altura);	
}
