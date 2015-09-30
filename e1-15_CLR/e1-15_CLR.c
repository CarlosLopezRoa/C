//
//  e1-15_CLR.c
//  
//
//  Created by Carlos López Roa on 28/08/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
// Imprime una tabla de Celcius-Fahrenheit para distintos valores con precisión flotante y encabezados alineados.

#include <stdio.h>
float calc(float m);

main(){
    float fahr,Celcius;
    int lower,upper,step;

    lower=0;
    upper=300;
    step=20;
    printf("1-15. Tabla de Celcius a Fahrenheit, pero usando funciones\n");
    Celcius=lower;
    while (Celcius<=upper) {
        printf("%3.0f \t %3.0f \n",Celcius,calc(Celcius));
        Celcius=Celcius+step;
    }
}

float calc(float m)
{
    float f;
    f=(9.0/5.0)*(m+(160.0/9.0));
    return f;
    
}