//
//  e1-12_CLR.c
//  
//
//  Created by Carlos López Roa on 21/08/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include <stdio.h>
#define IN 1
#define OUT 0
int main (){
    int c, nl, nw, nc, state;
    state=OUT;
    nl=nw=nc=0;
    while ((c=getchar())!=EOF) {
        ++nc;
        putchar(c);
        if (c=='\n') {
            ++nl;
        }
        if (c==' ' || c=='\n' || c=='\t') 
            state=OUT, putchar('\n');
        else if (state==OUT){
            state=IN;
            ++nw;
        }
    
    }
}
