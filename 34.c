/*
Escribir un programa que, dado un número entero por el usuario (guardado
como int), muestre la suma de todos sus dígitos.

Christian Vasquez - Sección 2
*/

#include <stdio.h>

int n;
int sum;

int main(){
	
	printf("Ingrese un número entero\n");
	scanf("%i",&n);
	
	do
	{
		int last_digit = n % 10;
		n = n / 10;
		sum += last_digit;
		
	} while(n != 0);
	
	printf ("la suma de todos sus dígitos es: %i", sum);
		return 0;
}