#include <stdio.h>
#include <string.h>

struct datosDeportista 
{
    char nombre[50];
    int edad;
    float peso;
    float altura;
};

int main() 
{
    struct datosDeportista deportistas[5];
    int i;

    for (i = 0; i < 5; i++) 
	{
        printf("\nIngrese los datos del deportista %d:\n", i + 1);

        printf("Nombre: ");
        fflush(stdin);
        gets(deportistas[i].nombre); 
        
        printf("Edad: ");
        scanf("%d", &deportistas[i].edad);

        printf("Peso (kg): ");
        scanf("%f", &deportistas[i].peso);

        printf("Altura (m): ");
        scanf("%f", &deportistas[i].altura);
    }

    printf("\nDatos de los deportistas:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("\nDeportista %d:\n", i + 1);
        printf("Nombre: %s\n", deportistas[i].nombre);
        printf("Edad: %d años\n", deportistas[i].edad);
        printf("Peso: %.2f kg\n", deportistas[i].peso);
        printf("Altura: %.2f m\n", deportistas[i].altura);
    }
}
