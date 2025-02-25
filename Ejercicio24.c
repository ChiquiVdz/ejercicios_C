#include <stdio.h>
#include <string.h>

int main() {
    int i, j, N, mejorTercerExamen = -1, indiceMejorTercerExamen = -1;
    char nombres[N][100];
    int calificaciones[N][5]; 
    float promedios[N];
    float promedioExamenes[5] = {0};

    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &N);
    
    for (i = 0; i < N; i++) {
        printf("\nIngrese el nombre completo del alumno %d: ", i + 1);
        fflush(stdin);
        gets(nombres[i]);

        printf("Ingrese las 5 calificaciones del alumno %d:\n", i + 1);
        for (j = 0; j < 5; j++) 
		{
            do {
                printf("Examen %d: ", j + 1);
                scanf("%d", &calificaciones[i][j]);

                if (calificaciones[i][j] < 0 || calificaciones[i][j] > 100)
                    printf("La calificación debe estar entre 0 y 100. Intente nuevamente.\n");
            } while (calificaciones[i][j] < 0 || calificaciones[i][j] > 100);
        }

        promedios[i] = (calificaciones[i][0] + calificaciones[i][1] + calificaciones[i][2] + calificaciones[i][3] + calificaciones[i][4]) / 5.0;

        if (calificaciones[i][2] > mejorTercerExamen) 
		{
            mejorTercerExamen = calificaciones[i][2];
            indiceMejorTercerExamen = i;
        }

        for (j = 0; j < 5; j++)
            promedioExamenes[j] += calificaciones[i][j];
    }

    for (j = 0; j < 5; j++)
        promedioExamenes[j] /= N;

    int indiceMejorExamen = 0;
    for (j = 1; j < 5; j++) 
	{
        if (promedioExamenes[j] > promedioExamenes[indiceMejorExamen]) 
            indiceMejorExamen = j;
    }

    printf("\nPromedios de los alumnos:\n");
    for (i = 0; i < N; i++)
        printf("Alumno %s: %.2f\n", nombres[i], promedios[i]);

    printf("\nEl alumno con la mejor calificación en el tercer examen es: %s con %d puntos.\n", nombres[indiceMejorTercerExamen], mejorTercerExamen);

    printf("\nEl examen con el mayor promedio es el examen %d con un promedio de %.2f.\n", indiceMejorExamen + 1, promedioExamenes[indiceMejorExamen]);
}
