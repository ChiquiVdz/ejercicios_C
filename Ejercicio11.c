#include <stdio.h>

main ()
{
	int matricula, semestre, carrera;
	float promedio;
	
	printf("Ingrese la matricula del alumno: ");
	scanf("%d", &matricula);
	printf("Ingrese la carrera del alumno(1-4): ");
	scanf("%d", &carrera);
	printf("Ingrese el semestre del alumno: ");
	scanf("%d", &semestre);
	printf("Ingrese el promedio del alumno: ");
	scanf("%f", &promedio);
	
	switch (carrera)
	{
		case 1:
			if (semestre >= 6 && promedio >= 8.8)
				printf("Alumno: %d\n Carrera: %d\n Aceptado", matricula, carrera);
			break;
		case 2:
			if (semestre > 6 && promedio > 8.5)
				printf("Alumno: %d\n Carrera: %d\n Aceptado", matricula, carrera);
			break;
		case 3:
			if (semestre > 5 && promedio > 8.5)
				printf("Alumno: %d\n Carrera: %d\n Aceptado", matricula, carrera);
			break;
		case 4:
			if (semestre > 5 && promedio > 8.5)
				printf("Alumno: %d\n Carrera: %d\n Aceptado", matricula, carrera);
			break;
	}
		
}
