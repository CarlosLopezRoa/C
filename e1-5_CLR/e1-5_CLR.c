//Carlos López Roa
//Ejercicio 1-5 del libro
//Kernighan, B. W., & Ritchie, D. M. (1991). El Lenguaje de Programacion C. Pearson Education.
//Imprime la conocida lista de Fahrenheit-Celcius en orden inverso con un ciclo for
#include <stdio.h>

int main () 
{
	int fahr;
	
	for (fahr=300; fahr>=0; fahr=fahr-20) {
		printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
	}
}
