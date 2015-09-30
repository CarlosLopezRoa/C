//
//  e2-9_CLR.c
//  
//
//  Created by Carlos López Roa on 02/10/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define LEN 10
int bitcount(unsigned);
int main()
{
    unsigned d;
    unsigned x;
    printf("Escriba un número\n");
    scanf("%d",&x);
    d=bitcount(x);
    printf("%d\n",d);
}
int bitcount(unsigned x){
    int b;
    for (b=0;  x!=0 ; ++b) 
        x&=(x-1);
    
