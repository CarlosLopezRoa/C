//
//  e2-8_CLR.c
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
unsigned rightrot(unsigned short,unsigned short);
int main()
{
    unsigned n;
    unsigned d;
    unsigned x;
    printf("Escriba un número\n");
    scanf("%d",&x);
    printf("Cantidad de bits a rotar\n");
    scanf("%d",&n);
    d=rightrot(x, n);
    printf("%d\n",d);
}
unsigned rightrot(unsigned short x,unsigned short n){
    return x>>n;
}
