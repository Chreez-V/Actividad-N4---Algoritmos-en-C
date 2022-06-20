#include <stdio.h>

int fact=1,n;

//Ejercicio 30
//Escribir un programa que, dado un número entero positivo, calcule y muestre su factorial. El factorial de un número se obtiene multiplicando todos los números enteros positivos que hay entre el 1 y ese número. El factorial de 0 es 1.


int main(){
	
	printf("Introduzca un numero \n");
	scanf("%d",&n);
	int i;
	if (n==0)
		printf("El factorial es: %d ",fact);
	else{
			for (i=n;i>0;i--){
				fact=fact*i;		
			}
			printf("El factorial es: %d ",fact );
	}
	return 0;
}
