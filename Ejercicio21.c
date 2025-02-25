#include <stdio.h>

main ()
{
	int arreglo[10];
	int i, aBuscar, encontrado = 0;
	
	for (i = 0; i < 10; i++)
	{
		do
		{
			printf("Ingrese el valor %d. Entre 0 y 5000: ", i + 1);
			scanf("%d", &arreglo[i]);
			
			if (arreglo[i] < 0 || arreglo[i] > 5000)
				printf("El numero debe ser entre 0 y 5000\n\n");
		} while (arreglo[i] < 0 || arreglo[i] > 5000);
	}
	
	do
	{
		printf("\nIngrese el valor a buscar: ");
		scanf("%d", &aBuscar);
			
		if (aBuscar < 0 || aBuscar > 5000)
			printf("El numero debe ser entre 0 y 5000");
	} while (aBuscar < 0 || aBuscar > 5000);
	
	i = 0;
	while (!encontrado && i < 10)
	{
		if (aBuscar == arreglo[i])
		{
			encontrado = 1;
			
			printf("\nENCONTRADO\nEl numero %d esta en la posicion %d.", aBuscar, i+1);
		}
		i++;
	}
	
	if (!encontrado)
		printf("\nNO ENCONTRADO\n");
}
