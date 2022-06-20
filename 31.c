/*
Escribir un programa que permita al usuario ingresar 6 números enteros, que
pueden ser positivos o negativos. Al finalizar, mostrar la sumatoria de los
números negativos y el promedio de los positivos. No olvides que no es posible
dividir por cero, por lo que es necesario evitar que el programa arroje un error
si no se ingresaron números positivos.

Christian Vasquez - Sección 2
*/

#include <stdio.h>

int n; //almacen de 6 números enteros
int negatives; //suma de negativos
int plus_average;//promedio de los positivos
int positives; //cantidad de números positivos
int i; //iteración

int main(){
	
		printf("Ingrese 6 n%cmeros enteros\n\n",163);
	do {
		scanf("%i",&n);
		
		if (n < 0)
		{
			negatives += n;
			i++;
		}
		else
		if (n > 0)
		{
			plus_average += n;
			positives++;
			i++;
		}
		else
		if (n == 0)
		{
			printf("No se puede procesar el 0, intente de nuevo\n");
			return 0;
		}
	} while(i < 6);
	
	plus_average /= positives;
	
	printf("\nla sumatoria de los n%cmeros negativos es: %i\n",163,negatives);
	printf("el promedio de los n%cmeros positivos es: %i\n",163,plus_average);
	
	return 0;
}