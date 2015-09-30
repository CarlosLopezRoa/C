/*
 *  e1-9_CLR.c
 *  
 *
 *  Created by Carlos on 21/08/11.
 *  Copyright 2011 CFATA-UNAM. All rights reserved.
 * 
 */
#include<stdio.h>
int main(){
    double nc;
    int c,espacios;
    espacios=0;
    for (nc=0; (c=getchar())!=EOF; ++nc) {
        if (c==' ') 
            if (espacios==1) 
                putchar(c), putchar('\b');
            else putchar(c), espacios=1;
            else putchar(c), espacios=0;
            
    }
    
    
    
    
}

