//
//  e1-14_CLR.c
//  
//
//  Created by Carlos López Roa on 28/08/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
// Este programa imprime un histograma con las frecuencias de los diferentes caracteres a la entrada

#include <stdio.h>
#define MAXCHAR 127
/* count lines, words, and characters in input */
main()
{
    int c, nl, nw, nc, state,i,j,de;
    int frec[MAXCHAR];
    for (i=0; i<MAXCHAR; ++i) {
        frec[i]=0;
    }
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        ++frec[c];
    }
    printf("caracteres[%d]\n", nc); 
    for (i=0; i<MAXCHAR; ++i) {
        printf("%d",putchar(i));
        for (j=0; j<frec[i]; ++j) {
            printf(".");
        }
        printf("\n");
    }
}
