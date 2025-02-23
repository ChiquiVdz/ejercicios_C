/* 	CATEGORIA A: Gerentes. Reciben un sueldo semanal fijo.
	CATEGORIA B: Trabajadores por Hora. Reciben un pago fijo por hora 
		por las primeras 40 horas de trabajo (pueden ser menos de 40 horas),
		mas tiempo extra (arriba de 40) que se paga como el 
		50% extra de lo que recibe ppr hora.
	CATEGORIA C: Trabajadores Comision. Reciben $3,000 mas el 5.7 de sus ventas semanales.
	CATEGORIA D: Trabajadores Destajo. Reciben una cantidad fija de dinero por cada una de 
		las piezas que produce el trabajador. */

#include <stdio.h>

main()
{
	int i, horasTrabajadas, piezasProducidas;
	char op;
	float sueldo, pagoHora, ventasSemanales, pagoPieza, pagoTotal = 0;
	
	for (i = 0; i < 5; i++)
	{
		printf("\nA: Gerentes\n");
		printf("B: Trabajadores por Hora\n");
		printf("C: Trabajadores Comision\n");
		printf("D: Trabajadores Destajo\n");
		
		do
		{
			printf("\nIngrese la categoria del trabajador (A - B - C - D): ");
			scanf(" %c", &op);
			
			if (op != 'A' && op != 'a' && op != 'B' && op != 'b' && op != 'C' && op != 'c' && op != 'D' && op != 'd')
				printf("\nERROR: Elija una opcion valida (A - a - B - b - C - c - D - d)\n");
				
		} while (op != 'A' && op != 'a' && op != 'B' && op != 'b' && op != 'C' && op != 'c' && op != 'D' && op != 'd');
		
		switch (op)
		{
			case 'A': case 'a':
				printf("\nGERENTES:\n");
				printf("Ingrese el sueldo semanal fijo: ");
				scanf("%f", &sueldo);
			break;
			
			case 'B': case 'b':
				printf("\nTRABAJADORES POR HORA:\n");
				printf("Ingrese el pago por hora: ");
				scanf("%f", &pagoHora);
				printf("Ingrese las horas trabajadas: ");
				scanf("%d", &horasTrabajadas);
				
				if (horasTrabajadas > 40)
					sueldo = 40 * pagoHora + (horasTrabajadas - 40) * pagoHora * 1.5;
				else
					sueldo = horasTrabajadas * pagoHora;
			break;
			
			case 'C': case 'c':
				printf("\nTRABAJADORES COMISION:\n");
				printf("Ingrese las ventas semanales: ");
				scanf("%f", &ventasSemanales);
				sueldo = 3000 + ventasSemanales * 0.057;
			break;
			
			case 'D': case 'd':
				printf("\nTRABAJADORES DESTAJO:\n");
				printf("Ingrese el pago por pieza: ");
				scanf("%f", &pagoPieza);
				printf("Ingrese las piezas producidas: ");
				scanf("%d", &piezasProducidas);
				sueldo = piezasProducidas * pagoPieza;				
		}
		
		printf("El sueldo del trabajador es: %.2f\n", sueldo);
		
		pagoTotal = pagoTotal + sueldo;	
	}
	
	printf("\nEl pago total de los trabajadores es: %.2f", pagoTotal);
}
