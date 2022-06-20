#include <stdio.h>

int n1,n2,n3;

//Ejercicio 21
//Escribir un programa que solicite al usuario el ingreso de tres números diferentes y muestre en pantalla al mayor de los tres.

int main(){

    printf("Introduzca el primer numero \n");
    scanf("%d",&n1);
    printf("Introduzca el segundo numero \n");
    scanf("%d",&n2);
    printf("Introduzca el tercer numero \n");
    scanf("%d",&n3);

    if (n1>n2 && n1>n3)
        printf("El numero mayor es: %d \n",n1);

        else{
			if (n2>n1 && n2>n3)
            	printf("El numero mayor es: %d \n",n2);
			else
				printf("El numero mayor es: %d \n",n3);
		}
		
}
