//
//  e2-10_CLR.c
//  
//
//  Created by Carlos López Roa on 02/10/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
int lower(int);
int main()
{
    int c;
    printf("Escriba una palabra\n");
    while ((c=getchar())!='\n') 
        putchar(lower(c));        
    printf("\n");
}
int lower(int c){
    int d;
    d=(c>='A' && c<= 'Z') ? c+'a' - 'A' : c;
    return d;
}