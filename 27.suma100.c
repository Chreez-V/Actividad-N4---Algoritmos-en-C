#include <stdio.h>

int suma=0;
// Ejercicio 27
//Escribir un programa que muestre la sumatoria de todos los números entre el 0 y el 100

int main(){
	int i;
	for (i=1;i<=100;i++)
		suma=suma+i;
	
	printf("la suma de los numeros del 0 al 100 da como resultado: %d \n",suma);
	return 0;
}
