//
//  File.c
//  
//
//  Created by Carlos López Roa on 23/09/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define D   3
void hanoi(int, int, int);
int main(){
    int in=1;
    int fi=3;
    hanoi(D,in,fi);
}
void hanoi(int n, int i, int f)
{
    int a;    
    if (n==1) 
        printf("%d \t %d \n",i,f);
    else {
        a=6-i-f;
        hanoi(n-1, i, a);
        printf("%d \t %d \n",i,f);
        hanoi(n-1, a, f);
        }
}