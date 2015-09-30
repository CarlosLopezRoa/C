/* Gustavo Andrés Molina Labastida */
/* Carrera entre el conejo y la liebre */

/* Las librerías que vamos a utilizar */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdlibm.h>
#include <string.h>
#include <math.h>
/* Def. de las funciones para mover la tortuga, la liebre y saber sus poscisiones */

void Tortuga(int *TortugaPtr);
void Liebre(int *LiebrePtr);
void Posicion(int *TortuguitaPtr, int *ConejoPtr);


int main() {
    FILE *fp;
    int tg=0;
    int lg=0;
    int tortuga;
    int liebre;
    int tempo;
    struct timeval tv;
    fp=fopen("salida.txt","w");
    int i;
    for (i=0; i<1000; i++) {
        // tg=0;
        // lg=0;
        tortuga=1; /* Posición de la tortuga */
        liebre=1; /* Posición de la liebre */
        tempo=0; /* Temporizador del tiempo que tarda la carrera */
        
        
        gettimeofday(&tv, NULL);
        srand(tv.tv_sec * tv.tv_usec); /* Semilla para la generación de números aleatorios */
        
        // printf("En sus marcas... listos... \n");
        // printf("Suena la pistola... ¡BANG! \n");
        //  printf("¡FUERA! \n");
        
        while(tortuga != 70 & liebre !=70){
            Tortuga(&tortuga);
            Liebre(&liebre);
            Posicion(&tortuga,&liebre);
            //sleep(1);
            //system("clear");
            ++tempo;
        }
        
        if(tortuga >= liebre){
            //     printf("La tortuga ganó!!!! HURRA!!! ^.^ \n");
            tg++;
        }
        else{
            //    printf("La liebre ganó... hurra... T_T \n");
            lg++;
        }
        
        //printf("El tiempo de la carrera fue de %d segundos\n",tempo);
        fprintf(fp,"%d \t %d \t %d \t %d \n", i , tempo , tg, lg);
    }
}

/* Funcion de los movimientos de la tortuga */
void Tortuga(int *TortugaPtr){
	int x; 
	x=rand()%10+1; /* Número aleatorio entre 1 y 10 */
	
	/* Definición de los pasos que tiene que dar la tortuga dependiendo del número */
	
	/* Paso rápido */
	if (x>=1 && x<=5){
		*TortugaPtr+=3;
	}
	
	/* Resbalón */
	else if (x==6||x==7){
		*TortugaPtr-=6;
	}
	
	/* Paso lento */
	else{
		++(*TortugaPtr);
	}
	
	/* Chequeo de los límites */
	if (*TortugaPtr<1){
		*TortugaPtr = 1;
	}
	if (*TortugaPtr>70){
		*TortugaPtr = 70;
	}
}

/* Definición de los movimientos de la liebre */
void Liebre(int *LiebrePtr){
	int y;
	y=rand()%10+1; /* Número aleatorio entre 1 y 10*/
	
	/* Definición de los pasos de la liebre dependiendo del número */
	
	/* Gran brinco */
	if(y==3||y==4){
		*LiebrePtr+=9;
	}
	
	/* Gran Resbalón */
	else if (y==5) {
		*LiebrePtr-=12;
	}
	
	/* Brinquito */
	else if (y>=6 && y<=8) {
		++(*LiebrePtr);
	}
	
	/* Pequeño resbalón */
	else if (y==10) {
		*LiebrePtr-=2;
	}
	
	/* Chequeo de los límites */
	if (*LiebrePtr<1){
		*LiebrePtr = 1;
	}
	if (*LiebrePtr>70){
		*LiebrePtr = 70;
	}
}


/* Función de las posiciones */
void Posicion( int *TortuguitaPtr, int *ConejoPtr ) {
    int count; 
    
    /* Ciclo para la carrera */
    for ( count = 1; count <= 70; count++ )
        
	/* Mordida */
        if ( count == *TortuguitaPtr && count == *ConejoPtr ) {
            printf( "OUCH!!!" );
        }
    
	/* Posición de la liebre */
        else if ( count == *ConejoPtr ) {
            printf( "C" ); 
        }
	
	/* Posición de la tortuga */
        else if ( count == *TortuguitaPtr ) {
            printf( "T" ); 
        } 
	
        else {
            printf( " " );
        } 
	printf( "\n" );
}