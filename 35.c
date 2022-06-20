#include <stdio.h>

/*
Escribir un programa para solicitar al usuario que ingrese números enteros positivos
(la cantidad que ingresará no se conoce y la decide el usuario). La lectura de números
finalizará cuando el usuario ingrese el número -1. Por cada número ingresado, mostrar
la cantidad de dígitos pares y la cantidad de dígitos impares que tiene. Al finalizar,
mostrar cuántos números múltiplos de 3 ingresó el usuario.

Christian Vasquez - Sección 2
*/

int main(){
	int n = 0; //número que ingresará el usuario
	int counter_P = 0; //contador de dígitos pares
	int counter_O = 0; // contador de dígitos impares
	int mult_3 = 0; //contador de multiplos de 3
while (n != -1){ //Comienza el bucle de lectura de números hasta que el usuario ingrese -1

	printf("ingrese el número a consultar\n"); 
	scanf("%i",&n); //se lee el número entero que ingresó el usuario
		
	if (n < -1){
		printf ("Ingrese números positivos, vuelva a intentarlo\n");
		break;
		}
	else	
	if (n > 0){
	
	if (n % 3 == 0){ //condición para saber y almacenar si el número ingresado es múltiplo de 3
		mult_3++; 
		}
	
	
		while (n > 0){ //Ciclo para verificar cuáles dígitos son impares o pares del número ingresado
			int digit = n;
			if (digit % 2 == 0){
				counter_P++;
				}
				else{
				counter_O++;
				}
			n = n / 10;
			}
			
		printf ("digitos pares: %i\n",counter_P); //se muestran los dígitos pares e impares al usuario
		printf ("digitos impares: %i\n\n",counter_O);
		counter_P = 0; //se reinician los contadores de dígitos para evaluar el número nuevo
		counter_O = 0;
				}
			}
		printf ("la cantidad de números múltiplos de 3 que ingresó el usuario es: %i",mult_3); //mostrar los múltiplos de 3
		return 0;			
	}
	
