#include <stdio.h>
#include <string.h>

struct Trabajador 
{
    int numeroEmpleado;
    char nombre[50];
    float ventas[12];
    float sueldo;
};

int main() 
{
    struct Trabajador trabajadores[100];
    int numTrabajadores, i, j;
    float mayorVenta = -1;
    float totalVentas;

    do
    {
    	printf("Ingrese el numero de trabajadores (maximo 100): ");
    	scanf("%d", &numTrabajadores);

   		if (numTrabajadores <= 0 || numTrabajadores > 100)
        	printf("Numero de trabajadores inválido. Debe ser mayor a 0 y maximo 100.\n");
	} while (numTrabajadores <= 0 || numTrabajadores > 100);

    for (i = 0; i < numTrabajadores; i++) 
	{
        printf("\nIngrese los datos del trabajador %d:\n", i + 1);

        do 
		{
            printf("Numero de empleado: ");
            scanf("%d", &trabajadores[i].numeroEmpleado);
            if (trabajadores[i].numeroEmpleado <= 0)
                printf("El numero de empleado debe ser mayor a 0. Intente nuevamente.\n");
        } while (trabajadores[i].numeroEmpleado <= 0);

        printf("Nombre: ");
        fflush(stdin);
        gets(trabajadores[i].nombre);

        for (j = 0; j < 12; j++) 
		{
            do 
			{
                printf("Ventas del mes %d: ", j + 1);
                scanf("%f", &trabajadores[i].ventas[j]);
                if (trabajadores[i].ventas[j] <= 0)
                    printf("Las ventas deben ser mayores a 0. Intente nuevamente.\n");
            } while (trabajadores[i].ventas[j] <= 0);
        }

        do 
		{
            printf("Sueldo: ");
            scanf("%f", &trabajadores[i].sueldo);
            if (trabajadores[i].sueldo < 0 || trabajadores[i].sueldo > 200000)
                printf("El sueldo debe estar entre 0 y 200,000. Intente nuevamente.\n");
        } while (trabajadores[i].sueldo < 0 || trabajadores[i].sueldo > 200000);
    }

    for (i = 0; i < numTrabajadores; i++) 
	{
        totalVentas = 0;
        for (j = 0; j < 12; j++)
            totalVentas += trabajadores[i].ventas[j];
        if (totalVentas > mayorVenta)
            mayorVenta = totalVentas;
    }

    printf("\nEmpleados con la mayor venta del ano anterior (%.2f):\n", mayorVenta);
    for (i = 0; i < numTrabajadores; i++) 
	{
        totalVentas = 0;
        for (j = 0; j < 12; j++)
            totalVentas += trabajadores[i].ventas[j];
        if (totalVentas == mayorVenta)
            printf("Numero: %d, Nombre: %s\n", trabajadores[i].numeroEmpleado, trabajadores[i].nombre);
    }

    for (i = 0; i < numTrabajadores; i++) 
	{
        totalVentas = 0;
        for (j = 0; j < 12; j++)
            totalVentas += trabajadores[i].ventas[j];
        if (totalVentas > 1000000)
            trabajadores[i].sueldo *= 1.10;
    }

    printf("\nEmpleados con ventas menores a $30,000 en diciembre:\n");
    for (i = 0; i < numTrabajadores; i++) 
	{
        if (trabajadores[i].ventas[11] < 30000)
            printf("Numero: %d, Nombre: %s\n", trabajadores[i].numeroEmpleado, trabajadores[i].nombre);
    }
}
