//
//  1.c
//  
//
//  Created by Carlos López Roa on 19/09/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define max 126
main(){
    int i;
    for (i=32; i<max; ++i) {
        if ((i%16)==0) {
            putchar(i); 
            printf("\n");}
        else 
            putchar(i);
    }
    printf("\n");
}
