#include <stdio.h>

main()
{
    int categoria, horasExtras;
    float sueldoBase, pagoHorasExtras = 0, pagoTotal;

    printf("Ingrese el sueldo base del trabajador: ");
    scanf("%f", &sueldoBase);
    printf("Ingrese la categoría del trabajador (1-4): ");
    scanf("%d", &categoria);
    printf("Ingrese las horas extras trabajadas: ");
    scanf("%d", &horasExtras);

    if (horasExtras > 30)
        horasExtras = 30;


    switch (categoria) 
	{
        case 1:
            pagoHorasExtras = horasExtras * 30;
            break;
        case 2:
            pagoHorasExtras = horasExtras * 40;
            break;
        case 3:
            pagoHorasExtras = horasExtras * 50;
            break;
        case 4:
            pagoHorasExtras = horasExtras * 70;
            break;
        default:
            pagoHorasExtras = 0;
            break;
    }

    pagoTotal = sueldoBase + pagoHorasExtras;

    printf("El pago total al trabajador es: $%.2f\n", pagoTotal);
}
