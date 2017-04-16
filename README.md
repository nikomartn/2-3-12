# Plantilla-C
Plantilla predefinida de C con funciones y cabeceras propias que me permiten reutilizar el código
ESTA PLANTILLA ESTÁ EN CONSTRUCCIÓN, ANTES DE
UTILIZARSE NECESITA SER RETOCADA CON SUMA ATENCIÓN.

NICOLÁS G MARTÍN PB2

-> Definición de programa

EJERCICIO 12
Un polinomio, P(x) puede representarse como un array de tantos elementos (coeficientes)
como el grado del polinomio más uno.
Escribir una función que tenga como entrada el grado del polinomio. Reservará memoria
dinámicamente para un array de grado+1 elementos. Leerá de teclado los grado+1
coeficientes del polinomio en orden decreciente y devolverá el array de coeficientes como
valor de retorno.
Escribir una segunda función que reciba un polinomio como un array de coeficientes y el
grado del mismo, y evalúe el polinomio para un valor dado de x, el cual también será recibido
como parámetro. El valor de la evaluación del polinomio será revuelto como valor de retorno
de la función.
Realizar un programa para comprobar el perfecto funcionamiento de las funciones.

-> Definición de código fuente

tipos.h - Contiene tipos definidos, intrinsecos de C o creados para el programa,
	así como uniones, flags.. De éste modo se facilita la transportabilidad
	a nuevas plataformas.

tipos.c - (En caso de existir). Contiene funciones de relacionadas con los tipos definidos
	excusivos para el programa, por ejemplo el modo de tratar a un struct.

main.c - Incluye el módulo llamador al resto de funciones, en caso de haber sentencias que
	resultan triviales para realizarlas en una función propia, es posible que se encuentren
	aquí.

funciones.h/.c/ - Contiene las funciones especificas del programa creado.


