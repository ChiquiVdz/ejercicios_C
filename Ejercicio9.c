#include <stdio.h>
#include <math.h>

main()
{
    float Y, resultado;

    printf("Ingrese el valor de Y: ");
    scanf("%f", &Y);

    if (Y <= 11)
        resultado = Y + 50;
    else if (Y <= 33)
        resultado = pow(Y, 2) - 10;
    else if (Y <= 64)
        resultado = pow(Y, 3) + pow(Y, 2) - 10;
    else
        resultado = 0;

    printf("El resultado de la funcion es: %.2f\n", resultado);
}
