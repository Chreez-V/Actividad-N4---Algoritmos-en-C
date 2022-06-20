/*

Escribir un programa que pregunte al usuario si desea analizar calificaciones
de alumnos y, sólo si responde “S” comenzará el procesamiento de los datos,
hasta que el usuario ingrese algo diferente de “S”. Por cada alumno, permitir
ingresar su calificación. Si es mayor a 4 el alumno está aprobado. Finalmente,
mostrar “Porcentaje de alumnos aprobados: x %” (donde x es el porcentaje de
aprobados sobre el total de calificaciones procesadas). También se debe
imprimir “Promedio de los aprobados: y” (donde y es la calificación promedio,
sólo de los alumnos aprobados).

Christian Vasquez - Sección 2.
*/

#include <stdio.h>

char auth_ratings; //Autorización del análisis de calificaciones
int students_A; //estudiantes aprobados.
int rating; //calificaciones del estudiante actual
int ratings_A; //Acumulador de las calificaciones de estudiantes aprobados
int y; //calificación promedio de los aprobados
int x;// Porcentaje de estudiantes aprobados
int students = 1;

int main (){
	
	printf("Si desea analizar califaciones de alumnos ingrese la letra S.\nIngrese cualquier letra para omitir o detenerse.\n");
	scanf(" %c",&auth_ratings);
	
	if (auth_ratings == 'S')
	{
		do
		{
			printf("\ningrese la calificaci%cn del alumno n%cmero %i\n",162,163,students);
			scanf("%d",&rating);
			
			if (rating < 0)
			{
				printf ("\nIngrese datos positivos, vuelva a intentar");
				break; 
			}
			else
			{
				if (rating > 4)
				{
					ratings_A += rating;
					students_A++;
				}
			}
			
			printf("\nSi desea continuar el análisis presione S\nDe lo contrario cualquier otra letra\n");	
			scanf(" %c",&auth_ratings);
			
			if (auth_ratings == 'S')
			{
				students = students + 1;
			}
			else
			{
				break;
			}
		}while (auth_ratings == 'S');
	}
	else
	if (auth_ratings != 'S')
	{
		printf("\nse ha detenido el an%clisis de calificaciones",160);
	}
	
	x = (students_A * 100) / students; //se multiplican los aprobados por 100 y se dividen por la cantidad total de estudiantes.
	
	y = ratings_A / students_A; //se divide la acumulación de todas las calificaciones aprobadas por todos los estudiantes aprobados.
	
	printf("\nEl porcentaje de alumnos aprobados es: %i%%\n",x);
	
	printf("El promedio de los aprobados es de: %i\n",y);
	
	return 0;
}


