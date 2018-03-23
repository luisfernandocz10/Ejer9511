
/* 24-Ejem.c 
	Asigna el dia de la semana en un rango 1-366
	comenzando del domingo.
*/
#include <stdio.h>

#define MSJ_USUARIO "Ingrese un dia del añocomprendido entre 1 y 366"

enum semana {domingo=1,lunes,martes,miercoles,jueves,viernes,sabado};
/* Comienza la ejecucion del programa */
int main (void)
{
	
	int dia;
	
	printf("%s\n",MSJ_USUARIO);
	scanf("%d",&dia);
	
	if((dia%7)==0)
	{
		printf("Domingo\n");
		return 0;

	}
	else
	{
		switch( dia%7 )
			{
				case lunes:
				printf("lunes\n");
				break;

				case martes:
				printf("martes\n");
				break;

				case miercoles:
				printf("miercoles\n");
				break;

				case jueves:
				printf("jueves\n");
				break;

				case viernes:
				printf("viernes\n");
				break;

				case sabado:
				printf("sabado\n");
				break;
			}

	}
	
	return 0;
}

/* 24-Ejer.c  	
ENUCIADO:	 
	Escribir un programa que dado un día del año (1 a 366) ingresado 
	por el usuario, imprima el día de la semana que le corresponde. 
	Debe asumir que el año comenzó, por ejemplo, un domingo. 
	Por ejemplo: si se ingresa '5', imprime 'jueves', si se 
	ingresa '10' imprime 'martes', si se ingresa '294' 
	imprime 'sabado'.

*/