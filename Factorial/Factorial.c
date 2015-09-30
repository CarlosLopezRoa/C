//
//  main.c
//  Render
//
//  Created by Carlos López Roa on 01/10/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//
#include <stdio.h>
#include <math.h>
int main(){
    int  n;
    double long  m;
    int  i;
    printf("Ingrese el número\n");
    scanf("%d",&n);
    m=1;
    for (i=1; i<=n; ++i) {
        m=(double)i * m;    
    }
    printf("%Lf\n",m);
}