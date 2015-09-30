//Carlos López Roa 8/Ago/11
//Ejemplo 1.4 del libro 
//Kernighan, B. W., & Ritchie, D. M. (1991). El Lenguaje de Programacion C. Pearson Education.
//Imprime una tabla de Celcius-Fahrenheit para distintos valores con precisión flotante y encabezados alineados.
#include <stdio.h>
main()
{
float fahr,Celcius;
int lower,upper,step;
lower=0;  //límite inferior de la tabla
upper=300; //límite superior
step=20;  //tamaño de incremento
printf("1-4.Tabla de Celcius a Fahrenheit\n");
	
	Celcius=lower;
	printf("%3s \t %3s\n","ºC","ºF");
	while (Celcius<=upper) {
		fahr=(9.0/5.0)*(Celcius+(160.0/9.0));
		printf("%3.0f \t %3.0f \n",Celcius,fahr);
		Celcius=Celcius+step;
	}		
}