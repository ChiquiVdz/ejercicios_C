#include <stdio.h>
#include <string.h>

struct datosProducto
{
	int clave;
	char descripcion[100];
	int existencia;
	int puntoReorden;
	float precio;
}

main ()
{
	struct datosProducto productos[100];
	int N = 0, i, claveVenta, encontrado, cantidadVendida;
	char opcion[3], continuarVenta[3];
	float totalPagar, subtotal;
	
	do {
        printf("\nProducto %d:\n", N + 1);

        do {
            printf("Ingrese la clave (mayor que 0): ");
            scanf("%d", &productos[N].clave);
        } while (productos[N].clave <= 0);

        printf("Ingrese la descripción: ");
        scanf(" %[^\n]", productos[N].descripcion);

        do {
            printf("Ingrese la existencia (mayor que 0): ");
            scanf("%d", &productos[N].existencia);
        } while (productos[N].existencia <= 0);

        do {
            printf("Ingrese el minimo a mantener en existencia (mayor o igual a 0): ");
            scanf("%d", &productos[N].puntoReorden);
        } while (productos[N].puntoReorden < 0);

        do {
            printf("Ingrese el precio unitario (mayor que 0): ");
            scanf("%f", &productos[N].precio);
        } while (productos[N].precio <= 0);

        N++; 

        printf("\nDesea agregar otro producto? (si/no): ");
        scanf(" %s", opcion);

    } while (strcmp(opcion, "si") == 0);
    
    do
    {
    	printf("\nDatos de los productos:\n");
    	for (i = 0; i < N; i++) 
		{
	        printf("\nProducto %d:\n", i + 1);
	        printf("Clave: %d\n", productos[i].clave);
	        printf("Descripcion: %s\n", productos[i].descripcion);
	        printf("Existencia: %d\n", productos[i].existencia);
	        printf("Mínimo a mantener en existencia: %d\n", productos[i].puntoReorden);
	        printf("Precio unitario: %.2f\n", productos[i].precio);
   		}

		printf("\nIngrese la clave del producto a vender: ");
		scanf("%d", &claveVenta);
		
		encontrado = -1;
		
		for (i = 0; i < N; i++) {
            if (productos[i].clave == claveVenta) {
                encontrado = i;
                break;
            }
        }
		
		if (encontrado == -1)
            printf("Producto no encontrado.\n");
        else 
		{
            printf("Producto: %s\n", productos[encontrado].descripcion);
            printf("Existencia actual: %d\n", productos[encontrado].existencia);

            do {
                printf("Ingrese la cantidad a vender: ");
                scanf("%d", &cantidadVendida);

                if (cantidadVendida > productos[encontrado].existencia)
                    printf("No hay suficiente existencia. Existencia actual: %d\n", productos[encontrado].existencia);
            } while (cantidadVendida > productos[encontrado].existencia);

            productos[encontrado].existencia -= cantidadVendida;

            subtotal = cantidadVendida * productos[encontrado].precio;
            totalPagar += subtotal;

            printf("Subtotal: %.2f\n", subtotal);
        }
        
        printf("\n¿Desea vender otro producto? (si/no): ");
        scanf(" %s", continuarVenta);
	} while (strcmp(continuarVenta, "si") == 0);
	
	printf("\nTotal a pagar: %.2f\n", totalPagar);
	
	printf("\nExistencias actualizadas:\n");
    for (i = 0; i < N; i++) 
        printf("Producto %d (%s): %d\n", productos[i].clave, productos[i].descripcion, productos[i].existencia);
        
}

