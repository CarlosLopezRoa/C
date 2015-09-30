//
//  PiRichie.c
//  Render
//
//  Created by Carlos López Roa on 09/10/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <math.h>
#include <time.h>

void progressbar(double x, double piedras);



int main (){
    struct timeval tv;
    gettimeofday(&tv,NULL);
    srand(tv.tv_usec*tv.tv_usec);
    int j;
    float b,piedras;
    float x,y;
    float a,numeropi;
    double circulo;
    
 //   printf("\v\t CÁlCULO DE PI\n");
   // printf("\n\tSmith se encuentra caminando en el parque y se le ocurre calcular el valor de pi, para ello  dibuja un cuadrado de un metro por un metro en el piso.\n Después dentro del cuadrado dibuja un circulo de un metro de díametro de manera que el tanto el centro del circulo como el del  cuadrado coincidan.\n Entonces busca piedras y las comienza a acomodar en el cuadrado. Despues de que cubrir el cuadrado con piedras, cuenta la cantidad de piedras dentro del circulo.\n De sus clases de secundaria recuerda que la probabilidad de encontrar una piedra en el circulo es pi/4, entonces divide la cantidad de piedras dentro del circulo  entre el total y multiplica por cuatro para obtener pi.\n");
    
  //  printf("\n\n¿Cuántas (piedras)^ 2 cree que debería tirar smith?_:");
    scanf("%d",&j);
    
//    printf("\nEspere un momento en lo que smith tira las piedras ....	\n");
    
    circulo=0;
    b=0;
    for (piedras=0; piedras<j; ++piedras) {
        /* for (x=0.0; x<=piedras; x++,b++) 
         {
         for (y=0.0; y<=piedras; y++) {*/
        x=rand()/(float)RAND_MAX;
        y=rand()/(float)RAND_MAX;
        a= (x)*(x) + (y)*(y);
        if (a<=1)
        {
            circulo=circulo+1;
            
        }
        if (j%1000==0) {
            numeropi=(circulo/piedras)*4.0;
            printf("%f,",numeropi);}
    }
    numeropi=(circulo/(piedras*piedras))*4.0;
    
   // printf("\nEl número pi que smith encontró después de contar %.0f piedras es _: %f\n",circulo,numeropi);
    
    return 0; 
}