#include <stdio.h>
 int year;
 //Ejercicio 25
// Escribir un programa que permita saber si un año es bisiesto. Para que un año sea bisiesto debe ser divisible por 4 y no debe ser divisible por 100, excepto que también sea divisible por 400

 int main(){
 	printf("Introduce un año: \n");
 	scanf("%d",&year);
 	
 	if (year%4==0 && (year%100!=0 || year%400==0))
 		printf("Es bisiesto");
	 else
	 	printf("No es bisiesto");

	return 0;
 
 }
