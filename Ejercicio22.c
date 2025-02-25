#include <stdio.h>

main ()
{
	int calificaciones[7][3];
	int i, j;
	
	for (i = 0; i < 7; i++) 
	{
        printf("Ingrese las calificaciones del alumno %d:\n", i + 1);
        for (j = 0; j < 3; j++) 
		{
            do 
			{
                printf("Parcial %d: ", j + 1);
                scanf("%d", &calificaciones[i][j]);

                if (calificaciones[i][j] < 0 || calificaciones[i][j] > 100)
                    printf("La calificación debe estar entre 0 y 100. Intente nuevamente.\n");
            } while (calificaciones[i][j] < 0 || calificaciones[i][j] > 100); // Validar el rango
        }
    }

    printf("\nCalificaciones del segundo parcial:\n");
    
    for (i = 0; i < 7; i++) 
        printf("Alumno %d: %d\n", i + 1, calificaciones[i][1]);
}
