#include <stdio.h>

struct datosAlumno
{
	int matricula;
	float calificaciones[5];
	float promedio;
}

main ()
{
	struct datosAlumno alumno[3];
	int i, j;
	float sumaCalificaciones;
	
	for (i = 0; i < 3; i++)
	{
		printf("\nIngrese la matricula del alumno %d: ", i+1);
		scanf("%d", &alumno[i].matricula);
		
		sumaCalificaciones = 0;	
		
		for (j = 0; j < 5; j++)
		{
			do
			{
				printf("Ingrese la calificacion %d del alumno %d: ", j + 1, i+1);
				scanf("%f", &alumno[j].calificaciones);
			}while (alumno[i].calificaciones[j] > 100 || alumno[i].calificaciones[j] < 0);
			
			sumaCalificaciones =  sumaCalificaciones + alumno[i].calificaciones[j];
		}
		
		alumno[i].promedio = sumaCalificaciones / 5.0;
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("\nAlumno %d: %d\n", i+1, alumno[i].matricula);
		
		for (j = 0; j < 5; j++)
		{
			printf("Calificacion %d: %.2f\n", j+1, alumno[j].calificaciones);
		}
		
		printf("Promedio: %.2f\n", i+1, alumno[i].promedio);
	}
}



















