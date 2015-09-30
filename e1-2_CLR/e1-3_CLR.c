//Carlos López Roa 8/Ago/11
//Ejemplo 1.3 del libro 
//Kernighan, B. W., & Ritchie, D. M. (1991). El Lenguaje de Programacion C. Pearson Education.
//Imprime una tabla de Fahrenheit-Celcius para distintos valores.
#include <stdio.h>
main()
{
float fahr,Celcius;
int lower,upper,step;
lower=0;  //límite inferior de la tabla
upper=300; //límite superior
step=20;  //tamaño de incremento
printf("1-3.Tabla con encabezado\n");
fahr=lower;
	printf("%4s \t %6s\n","ºF","ºC");
while (fahr<=upper) {
	Celcius=(5.0/9.0)*(fahr-32.0);
	printf("%3.0f\t%6.1f\n",fahr,Celcius);
	fahr=fahr+step;
	}
}