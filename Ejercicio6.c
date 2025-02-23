#include <stdio.h>

main() 
{
    float costo, impuesto = 0, precioTotal;

    printf("Ingrese el costo del articulo: ");
    scanf("%f", &costo);

    if (costo <= 200)
        impuesto = 0;
    else if (costo <= 400)
        impuesto = costo * 0.30;
    else
	{
        if (costo > 5000)
            impuesto = costo * 0.50;
        else
            impuesto = costo * 0.40;
    }

    precioTotal = costo + impuesto;

    printf("El precio total del articulo es: %.2f\n", precioTotal);
}
