//
//  e.c
//  
//
//  Created by Carlos López Roa on 09/10/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <math.h>
#include <time.h>
float factorial(int n);
int main(){
    int i,m;
    float n=0;
    scanf("%d",&m);
    for (i=0; i<m; ++i) {
        n=n+(pow(1, i)/factorial(i));
        printf("%f,",n);
    }
    printf("\n");
}

float factorial(int n) {
    double long  m;
    int  i;
    m=1;
    for (i=1; i<=n; ++i) {
        m=(double)i * m;    
    }
    return m;
}
