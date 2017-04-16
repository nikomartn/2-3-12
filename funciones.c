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

	do{
		for(i = (grado); i > 1; i--){
			printf("\ncoeficiente de x^%d : \t",i+1);
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
			printf("%dx^%d",ptr[i],i+1);
		}

		printf("%dx",ptr[1]);
		printf("%d",ptr[0]);

		puts("");
		printf("Pulse S/s para continuar, u otra tecla para reescribir\n");


}while(salida != 's' || salida != 'S');
