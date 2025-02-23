#include <stdio.h>

main ()
{
	float sueldo, aumento, sueldoNuevo;
	
	printf("Ingrese el sueldo del trabajador: ");
	scanf("%f", &sueldo);
	
	if (sueldo < 10000)
		aumento = 0.15;
	else if (sueldo <= 15000)
		aumento = 0.11;
	else
		aumento = 0.08;
		
	sueldoNuevo = sueldo + sueldo * aumento;
	
	printf("\nEl sueldo anterior era de: %.2f\n", sueldo);
	printf("El aumento es de: %.2f\n", aumento);
	printf("El sueldo nuevo es de: %.2f\n", sueldoNuevo);
}
