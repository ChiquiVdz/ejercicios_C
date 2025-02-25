#include <stdio.h>

main() 
{
    int N, i;
    int numHombres = 0, numMujeres = 0, mujeresMas30000 = 0, hombresMenores40Menos40000 = 0, mayores50 = 0;
    char clave, sexo;
    int edad;
    float sueldo;

    printf("Ingrese el numero de empleados: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
	{
        printf("\nEmpleado %d:\n", i + 1);

        printf("Ingrese la clave (A o B): ");
        scanf(" %c", &clave);

        printf("Ingrese la edad (0-65): ");
        scanf("%d", &edad);

        printf("Ingrese el sexo (F, f, M, m): ");
        scanf(" %c", &sexo);

        printf("Ingrese el sueldo (>0): ");
        scanf("%f", &sueldo);

        if (sexo == 'M' || sexo == 'm')
            numHombres++;
        else if (sexo == 'F' || sexo == 'f')
            numMujeres++;

        if ((sexo == 'F' || sexo == 'f') && sueldo > 30000)
            mujeresMas30000++;

        if ((sexo == 'M' || sexo == 'm') && edad < 40 && sueldo < 40000)
            hombresMenores40Menos40000++;

        if (edad > 50)
            mayores50++;
    }

    printf("\nResultados:\n");
    printf("a) Numero de hombres: %d\n", numHombres);
    printf("b) Numero de mujeres: %d\n", numMujeres);
    printf("c) Numero de mujeres que ganan mas de $30,000: %d\n", mujeresMas30000);
    printf("d) Numero de hombres menores de 40 anos que ganan menos de $40,000: %d\n", hombresMenores40Menos40000);
    printf("e) Numero de empleados mayores de 50 anos: %d\n", mayores50);
}
