#include <stdio.h>

main ()
{
	int opcion1, opcion2, opcion3;
	float valor;
	
	printf("1 - MEDIDAS DE LONGITUD\n");
	printf("2 - MEDIDAS DE VOLUMEN\n");
	printf("3 - MEDIDAS DE PESO\n");
		
	printf("Ingrese la opcion que desea: ");
	scanf("%d", &opcion1);
		
	switch (opcion1)
	{
		case 1:
			printf("1.- Convertir de pulgadas a milímetros\n");
		    printf("2.- Convertir de yardas a metros\n");
		    printf("3.- Convertir de millas a kilómetros\n");
		    printf("4.- Convertir de acres a hectáreas\n");
			printf("Seleccione una opción: ");
			scanf("%d", &opcion2);
			
			printf("Ingrese el valor a convertir: ");
			scanf("%f", &valor);
			
			switch (opcion2) 
			{
			    case 1:
			        printf("%.2f pulgadas son %.2f milímetros\n", valor, valor * 25.4);
			        break;
	  		    case 2:
		            printf("%.2f yardas son %.2f metros\n", valor, valor * 0.9144);
		            break;
		        case 3:
		            printf("%.2f millas son %.2f kilómetros\n", valor, valor * 1.60934);
		            break;
		        case 4:
		            printf("%.2f acres son %.2f hectáreas\n", valor, valor * 0.404686);
		            break;	
			}
}
