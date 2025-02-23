#include <stdio.h>

main ()
{
	float sueldo, aumento;
	
	printf("Ingrese el sueldo: ");
	scanf("%f", &sueldo);
	
	printf("\nEl sueldo era de: %.2f\n", sueldo);
	
	if (sueldo > 10000)
		aumento = sueldo * 0.08;
	else
		aumento = sueldo * 0.15;
	
	printf("El aumento es de: %.2f\n", aumento);
	printf("El sueldo nuevo es de: %.2f\n", sueldo + aumento);
}
