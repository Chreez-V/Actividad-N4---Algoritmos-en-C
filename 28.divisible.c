#include <stdio.h>

int num;

//Ejercicio 28
//Escribir un programa que, dado un número por el usuario, muestre todos sus divisores positivos. Recordar que un divisor es aquel que divide al número de forma exacta (con resto 0).

int main(){
	printf("Introduce un numero: \n");
	scanf("%d",&num);
	printf("Los numeros divisibles para %d son: \n",num);
	int i;
	for (i=1;i<=num;i++){
		if(num%i==0)
			printf("%d ",i);
	}	
	
	return 0;
}
