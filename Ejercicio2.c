#include <stdio.h>

main ()
{
	float costo, enganche, costoRestante, total;
	
	printf("Ingrese el costo del carro: ");
	scanf("%f", &costo);
	
	enganche = costo * 0.35;
	costoRestante = costo - enganche;
	total = costoRestante * 0.12 + costoRestante;
	
	printf("El costo es: %.2f\n", costo);
	printf("El monto del enganche es: %.2f\n", enganche);
	printf("El monto de cada mensualidad es: %.2f\n", total / 36);
}
