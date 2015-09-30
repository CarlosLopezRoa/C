//
//  e2-7_CLR.c
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
unsigned invert(unsigned short,unsigned short,unsigned short);
int main()
{
    unsigned p,n;
    unsigned d;
    unsigned x;
    printf("Escriba un número\n");
    scanf("%d",&x);
    printf("Cantidad de bits\n");
    scanf("%d",&n);
    printf("Posición\n");
    scanf("%d",&p);
    d=invert(x, p, n);
    printf("%d\n",d);
}
unsigned invert(unsigned short x,unsigned short p,unsigned short n){
    unsigned short mask1,mask2,xp,xpp,a,b,c;
    a=~0;
    b=a>>p;
    c=a>>(p+n);
    mask1=~(b-c);
    mask2=(b-c);
    xp=x & mask1;
    xpp=x & mask2;
    return xp+~xpp;
    //return (x & ~(~0>>p-~0>>(p+n)))+(y & (~0>>p-~0>>(p+n)));
}
