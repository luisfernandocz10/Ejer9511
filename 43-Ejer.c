/* 43-Ejer.c 
Programa que calcula el rendimiento de un auto.  
*/
#include <stdio.h>

#define MSJ_KILOMETROS "Ingrese los kilometros recorridos (-1 para terminar):"
#define MSJ_PREC_COMB "Ingrese el precio del combustible por litro:"
#define MSJ_MONTO_TOTAL "Ingrese el monto total utilizado en este compra: "
#define MSJ_RENDIM "Rendimiento (l/100km) de este tanque >> "

#define MSJ_RENDIM_PROMEDIO "Rendimiento promedio (l/100km) >>"
#define MSJ_PEOR_RENDIM "Peor rendimiento (l/100km) >> "
#define MSJ_MEJOR_RENDIM "Mejor rendimiento (l/100km) >> "
#define MSJ_DIST_RECORRIDA "Distancia total recorrida (km) >>"
#define MSJ_COMB_TOTAL "Combustible total consumidos (l) >>"
#define MSJ_COSTO_TOTAL "Costo total de su vehiculo ($) >>"

int main (void )
{
	/* Defino varibles */
	int contador=1;
	/* varibles princiles */
	float kilometros,pre_comb,monto_total,rendimiento;
	/* varibles asecundarias conteo */
	float rendim_total=0,dist_total=0,comb_total=0,costo_total=0,peor_rend,mejor_rend;
	
	printf("%s",MSJ_KILOMETROS);
	scanf("%f",&kilometros);
	
	if(kilometros!=-1)
	{
		printf("%s",MSJ_PREC_COMB);
		scanf("%f",&pre_comb);

		printf("%s",MSJ_MONTO_TOTAL);
		scanf("%f",&monto_total);

		rendimiento=(monto_total/pre_comb)*(100.0/kilometros);
		peor_rend=rendimiento;
		mejor_rend=rendimiento;
		
		printf("%s %.2f\n\n",MSJ_RENDIM,rendimiento);
	}
	while( kilometros != -1 )
	{
		dist_total = dist_total + kilometros;
		comb_total = comb_total + (monto_total/pre_comb);
		costo_total = costo_total + monto_total;
		
		printf("%s",MSJ_KILOMETROS);
		scanf("%f",&kilometros);

		rendim_total = rendim_total+rendimiento;
		

		if( kilometros != -1 )
		{	
			printf("%s",MSJ_PREC_COMB);
			scanf("%f",&pre_comb);

			printf("%s",MSJ_MONTO_TOTAL);
			scanf("%f",&monto_total);

			
			rendimiento=(monto_total/pre_comb)*(100.0/kilometros);
			contador=contador + 1;

			printf("%s %.2f\n\n",MSJ_RENDIM,rendimiento);	
		}	
		if( peor_rend > rendimiento)
		{
			peor_rend=rendimiento;
		}
		if( mejor_rend < rendimiento)
		{
			mejor_rend=rendimiento;
		}
	}

	printf("\n%s %.2f\n",MSJ_RENDIM_PROMEDIO,rendim_total/contador);
	printf("%s %.2f\n",MSJ_PEOR_RENDIM,peor_rend);
	printf("%s %.2f\n",MSJ_MEJOR_RENDIM,mejor_rend );
	printf("%s %.2f\n",MSJ_DIST_RECORRIDA,dist_total);
	printf("%s %.2f\n",MSJ_COMB_TOTAL,comb_total);
	printf("%s %.2f\n",MSJ_COSTO_TOTAL,costo_total);
	
	return 0;
}