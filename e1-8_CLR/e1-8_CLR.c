/*
 *  e1-8_CLR.c
 *  
 *
 *  Created by Carlos on 21/08/11.
 *  Copyright 2011 CFATA-UNAM. All rights reserved.
 *  Este programa cuenta espacio en blanco, tabuladores y nuevas líneas.
 */
#include <stdio.h>

int main (){
	double blanco,tabuladores,lineas;
	int c;
	blanco=0;
	tabuladores=0;
	lineas=0;
	
	while ((c=getchar())!=EOF) {
		if (c==' ') 
			++blanco;
		if (c=='\t') 
			++tabuladores;
		if (c=='\n') 
			++lineas;
		
		
								}
	printf("Espacios en blanco %.0f \n Tabulaciones %.0f \n Lineas %.0f \n",blanco,tabuladores,lineas);

	
}

