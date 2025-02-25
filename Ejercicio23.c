#include <stdio.h>
#include <string.h>

int main() {
    char nombres[7][100];
    int calificaciones[7][3];
    float promedios[7];
    int i, j;

    for (i = 0; i < 7; i++) 
	{
        printf("\nIngrese el nombre completo del alumno %d: ", i + 1);
        fflush(stdin);
        gets(nombres[i]);

        printf("Ingrese las calificaciones del alumno %d:\n", i + 1);
        for (j = 0; j < 3; j++) 
		{
            do 
			{
                printf("Parcial %d: ", j + 1);
                scanf("%d", &calificaciones[i][j]);

                if (calificaciones[i][j] < 0 || calificaciones[i][j] > 100)
                    printf("La calificación debe estar entre 0 y 100. Intente nuevamente.\n");
            } while (calificaciones[i][j] < 0 || calificaciones[i][j] > 100);
        }

        promedios[i] = (calificaciones[i][0] + calificaciones[i][1] + calificaciones[i][2]) / 3.0;
    }

    printf("\nTabla de nombres y promedios:\n");
    printf("+----------------------------+-----------+\n");
    printf("| Nombre completo            | Promedio  |\n");
    printf("+----------------------------+-----------+\n");

    for (i = 0; i < 7; i++)
        printf("| %-26s | %-9.2f |\n", nombres[i], promedios[i]);

    printf("+----------------------------+-----------+\n");
}
