//Carlos López Roa 
// Ejercicio número 1.6 del libro
// Kernighan, B. W., & Ritchie, D. M. (1991). El Lenguaje de Programacion C. Pearson Education.
// Comprueba que el valor de getchar()!=EOF es 0 ò 1
#include <stdio.h>

int main(){
	int c;
	c=(getchar()!=EOF);
	printf("%d \n",c);
	
}
