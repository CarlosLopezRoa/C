//
//  e2-6_CLR.c
//  Render
//
//  Created by Carlos López Roa on 02/10/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define LEN 10
unsigned setbits(unsigned short,unsigned short,unsigned short,unsigned short);
int main()
{
    unsigned p,n;
    unsigned d;
    unsigned x,y;
    printf("Escriba un número\n");
    scanf("%d",&x);
    printf("Escriba otro número\n");
    scanf("%d",&y);
    printf("Cantidad de bits\n");
    scanf("%d",&n);
    printf("Posición\n");
    scanf("%d",&p);
    d=setbits(x, p, n,y);
    printf("%d\n",d);
}
unsigned setbits(unsigned short x,unsigned short p,unsigned short n,unsigned short y){
    unsigned short mask1,mask2,xp,yp,a,b,c;
    a=~0;
    b=a>>p;
    c=a>>(p+n);
    mask1=~(b-c);
    mask2=(b-c);
    xp=x & mask1;
    yp=y & mask2;
    return xp+yp;
    //return (x & ~(~0>>p-~0>>(p+n)))+(y & (~0>>p-~0>>(p+n)));
}