#include <stdio.h>
#include <string.h>

int main() {
    int N, i = 0, j = 0;
    int mejorTercerExamen = -1, indiceMejorTercerExamen = -1;
    int mejorPrimerQuinto = -1, indiceMejorPrimerQuinto = -1;
    char nombres[100][100];
    int calificaciones[100][5];
    float promedios[100];
    float promedioExamenes[5] = {0};
    int indiceMejorExamen = 0;
    int alumnoBuscar, examenMenorCalificacion;

	do
	{
		printf("Ingrese el numero de alumnos: ");
    	scanf("%d", &N);
    	
    	if (N <= 0) 
        printf("El número de alumnos debe ser mayor que 0.\n");
	} while (N <= 0);
    
    while (i < N) 
	{
        printf("\nIngrese el nombre completo del alumno %d: ", i + 1);
        fflush(stdin);
        gets(nombres[i]);

        j = 0;
        while (j < 5) 
		{
            printf("Examen %d: ", j + 1);
            scanf("%d", &calificaciones[i][j]);

            if (calificaciones[i][j] < 0 || calificaciones[i][j] > 100)
                printf("La calificación debe estar entre 0 y 100. Intente nuevamente.\n");
            else {
                j++;
            }
        }

        promedios[i] = (calificaciones[i][0] + calificaciones[i][1] + calificaciones[i][2] + calificaciones[i][3] + calificaciones[i][4]) / 5.0;

        if (calificaciones[i][2] > mejorTercerExamen) {
            mejorTercerExamen = calificaciones[i][2];
            indiceMejorTercerExamen = i;
        }

        if (calificaciones[i][0] > mejorPrimerQuinto || calificaciones[i][4] > mejorPrimerQuinto) {
            mejorPrimerQuinto = (calificaciones[i][0] > calificaciones[i][4]) ? calificaciones[i][0] : calificaciones[i][4];
            indiceMejorPrimerQuinto = i;
        }

        for (j = 0; j < 5; j++) {
            promedioExamenes[j] += calificaciones[i][j];
        }

        i++;
    }

    for (j = 0; j < 5; j++) {
        promedioExamenes[j] /= N;
    }

    for (j = 1; j < 5; j++) {
        if (promedioExamenes[j] > promedioExamenes[indiceMejorExamen]) {
            indiceMejorExamen = j;
        }
    }

    printf("\nPromedios de los alumnos:\n");
    i = 0;
    while (i < N) {
        printf("Alumno %s: %.2f\n", nombres[i], promedios[i]);
        i++;
    }

    printf("\nEl alumno con la mejor calificación en el tercer examen es: %s con %d puntos.\n", nombres[indiceMejorTercerExamen], mejorTercerExamen);

    printf("\nEl alumno con la mejor calificación en el primer o quinto examen es: %s con %d puntos.\n", nombres[indiceMejorPrimerQuinto], mejorPrimerQuinto);

    printf("\nEl examen con el mayor promedio es el examen %d con un promedio de %.2f.\n", indiceMejorExamen + 1, promedioExamenes[indiceMejorExamen]);

    printf("\nIngrese el número del alumno para encontrar su menor calificación: ");
    scanf("%d", &alumnoBuscar);

    if (alumnoBuscar < 1 || alumnoBuscar > N) {
        printf("Número de alumno inválido.\n");
    } else {
        examenMenorCalificacion = 0;
        for (j = 1; j < 5; j++) {
            if (calificaciones[alumnoBuscar - 1][j] < calificaciones[alumnoBuscar - 1][examenMenorCalificacion]) {
                examenMenorCalificacion = j;
            }
        }
        printf("El alumno %s tuvo su menor calificación en el examen %d con %d puntos.\n", nombres[alumnoBuscar - 1], examenMenorCalificacion + 1, calificaciones[alumnoBuscar - 1][examenMenorCalificacion]);
    }

    return 0;
}
