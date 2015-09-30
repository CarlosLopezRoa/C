//
//  File.c
//  
//
//  Created by Carlos López Roa on 9/10/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define D 8  
int v1[D];
int v2[D];
int v3[D];
void hanoi(int, int, int);
int main(){
    
    int i;
    for (i=0; i<D;i++) {
        v1[i]=i+1;
        v2[i]=0;
        v3[i]=0;
    }
    int in=1;
    int fi=3;
    hanoi(D,in,fi);
    for (i=0; i<D; i++) {
        printf("%d \t %d \t %d \n",v1[i],v2[i],v3[i]);
    }
}
void hanoi(int n, int i, int f)
{
    int a;
    int *ii, *iif;
    if (n==1) {
        switch (i) {
            case 1:
                ii=&v1[0];
                break;
            case 2:
                ii=&v2[0];
                break;
            case 3:
                ii=&v3[0];             
                break;
            default: printf("ERRORSSS");
                break;
        }
        switch (f) {
            case 1:
                iif=&v1[0];
                break;
            case 2:
                iif=&v2[0];
                break;
            case 3:
                iif=&v3[0];
                break;
            default: printf("ERRORSSS");
                break;
        }
        iif[n-1]=ii[n-1];
        ii[n-1]=0;
        for (i=0; i<D; i++) {
            printf("%d \t %d \t %d \n",v1[i],v2[i],v3[i]);
        }
        printf("\n");
    }
    else {
        a=6-i-f;
        hanoi(n-1, i, a);
        switch (i) {
            case 1:
                ii=&v1[0];
                break;
            case 2:
                ii=&v2[0];
                break;
            case 3:
                ii=&v3[0];
                break;
            default: printf("ERRORSSS");
                break;
        }
        switch (f) {
            case 1:
                iif=&v1[0];
                break;
            case 2:
                iif=&v2[0];
                break;
            case 3:
                iif=&v3[0];
                break;
            default: printf("ERRORSSS");
            break;}
        iif[n-1]=ii[n-1];
        ii[n-1]=0;
        for (i=0; i<D; i++) {
            printf("%d \t %d \t %d \n",v1[i],v2[i],v3[i]);
        }
        printf("\n");
        hanoi(n-1,a,f);
    }
}