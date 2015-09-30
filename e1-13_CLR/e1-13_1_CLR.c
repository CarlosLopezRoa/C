//
//  e1-13_1_CLR.c
//  
//
//  Created by Carlos López Roa on 24/08/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
// Este programa hace un histograma del tamaño de palabra en la entrada

#include <stdio.h>
#define MAXLENGTH 23
#define IN 1
#define OUT 0 
main()
{
    int c, nl, nw, nc, state,i,j;
    int frec[MAXLENGTH];
    for (i=0; i<MAXLENGTH; ++i) 
        frec[i]=0;
    
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
            while ((c=getchar())!=EOF && (c=getchar())!= '\n' && (c=getchar())!=' ') {
                ++i;
            }
            frec[i]=frec[i]+1;
            i=0;
        }
    }
    printf("líneas[%d], palabras[%d],caracteres[%d]\n", nl, nw, nc); 
    for (i=0; i<MAXLENGTH; ++i) {
        printf("%d",i+1 );
        for (j=0; j<frec[i]; ++j) {
            printf(".");
        }
        printf("\n");
    }
}
