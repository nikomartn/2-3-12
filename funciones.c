#include "funciones.h"

/*La siguiente función tiene que leer los coeficientes del polinomio
 *y almacenarlos en un ector generado dinámicamente. Devuelve un puntero
 *a dicho vector
 */

INT *lee_polinomio (INT grado)
{
	INT i = 0; 		//Índice
	INT *ptr = NULL;//Puntero para el vector
	CHAR salida = '0';

	/*Se solicita la memoria para el vector*/
	if (( ptr = calloc ((grado+1),sizeof(INT))) == NULL){
		exit (0);
	}

	/*Se solicitan los coeficientes*/
	printf("Introduzca los polinomios, en caso de que\n");
	printf("el valor sea negativo, introduzca el coeficiente\n");
	printf("de manera explicita, (-4)\n");


		for(i = (grado); i > 1; i--){
			printf("\ncoeficiente de x^%d : \t",i);
			scanf("%d",&ptr[i]);
			/*Si el polinomio por ejemplo es de grado 3, será un
			 *vector de (3+1) = 4 elementos. Por lo que hay que acceder desde
			 *ptr [grado]. Ésto da una ventaja, que siempre se
			 *conocerá el coeficiente independiente, grado[0].
			 */
		}
		printf("\ncoeficiente de x : \t");
		scanf("%d",&ptr[1]);

		printf("\ncoeficiente de 1 : \t");
		scanf("%d",&ptr[0]);

		/*Se le pide al usuario que compruebe los datos*/
		printf("\n¿Está bien así?:");

		for(i = (grado); i > 1; i--){
			printf(" %dx^%d *",ptr[i],i+1);
		}

		printf("%dx",ptr[1]);
		printf("%d\n",ptr[0]);


	return (ptr);
}

/*Función que calcula el resultado de un polinomio para un determinado
 *valor de X.
 */

INT evalua_polinomio (INT* polinomio, INT grado, INT x)
{
	INT i = 0, j = 0; 						//Índices
	LONG suma = 0, producto = 1; 			//Valor de retorno y variable para hallar potencias

	for (i = (grado); i > 0; i--){			//Se lleva la cuenta de en qué elemento del vector se encuentra
		for (j = i; j > 0; j--){			//Acceso a elemento del vector
			producto *= x;					//Se calcula x elevado a su potencia
		}
		producto *= polinomio[i];			//Se multiplica por el coeficiente de polinomio[]
		suma += producto;					//Se almacena en suma
		producto = 1;						//Se retorna a producto a 1 para futuros cálculos.
	}

	suma += polinomio[0];

	return (suma);
}

	
