#include <stdio.h>

main() 
{
    float distanciaIda, tiempoEstancia, precioBoleto, descuento = 0;

    printf("Ingrese la distancia de ida (en km): ");
    scanf("%f", &distanciaIda);
    printf("Ingrese el tiempo de estancia (en dias): ");
    scanf("%f", &tiempoEstancia);

    precioBoleto = distanciaIda * 2 * 0.23;

    if (tiempoEstancia > 7 && distanciaIda * 2 > 800) {
        descuento = precioBoleto * 0.30;
        precioBoleto -= descuento;
    }

    printf("\nEl precio total del boleto es: $%.2f\n", precioBoleto);

}
