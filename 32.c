/*
Escribir un programa que permita al usuario ingresar una cantidad de números
positivos indefinida (la cantidad que ingresará no se conoce y puede cambiar
en cada ejecución), finalizando cuando ingresa el número 0 (que no se tendrá
en cuenta). Una vez terminada la lectura de números, informar cuál fue el
mayor de los números ingresados.

Christian Vasquez - Sección 2
*/

#include <stdio.h>

int n, biggest;

int main(){
	
	do
	{	
	printf("ingrese un n%cmero\n",163);
	scanf("%i",&n);
		if (n < 0)
		{
			printf("ingrese solo n%cmeros positivos, vuelva a intentarlo\n",163);
			return 0;
		}
		else
		if (n > biggest)
		{
			biggest = n;
		}
			
	}while (n != 0);
	
	printf("\nel n%cmero mayor de los ingresados es el: %i",163,biggest);
	
	return 0;
}