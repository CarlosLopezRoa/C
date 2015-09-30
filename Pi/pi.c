//
//  pi.c
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
int main(){
    int i,m;
    float pi=0;
    float n=0;
    scanf("%d",&m);
    for (i=0; i<m; ++i) {
        n=n+(pow(-1,(float) i)/(2*(float)i+1));
        printf("%f,",4*n);
    }
    pi=4*n;
}
