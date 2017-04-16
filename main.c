//NICOLAS GARCIA MARTIN PB2

/*
 */

/*Programa creado para terminal de GNU/Linux*/

#include <stdio.h>
#include <stdlib.h>
#include "tipos.h"
#include "funciones.h"

INT main (void)
{
	/*Se recomienda leer el archivo leeme.txt donde se define el programa y sus diferentes archivos de código fuente*/

	INT *polinomio = NULL;
	INT grado = 0, x = 0;
	CHAR salida = '0';

	printf("Escriba el grado del polinomio:\t");
	scanf("%d",&grado);

	polinomio = lee_polinomio(grado);

	printf("Introduzca el valor de una X\n");
	scanf("%d",&x);

	puts("");

	printf("El resultado es: %d",evalua_polinomio(polinomio,grado,x));

	return 0;
}

