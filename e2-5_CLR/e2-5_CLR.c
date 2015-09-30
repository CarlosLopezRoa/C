//
//  e2-5_CLR.c
//  
//
//  Created by Carlos López Roa on 01/10/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define LEN 30
int any(char s1[],char s2[]);
int main()
{
    int d;
    int i=0;
    char s1[LEN];
    char s2[LEN];
    printf("Escriba la primer palabra\n");
    while ((s1[i]=getchar())!='\n' && i<LEN) 
        i++;
    s1[i]='\0';
    printf("Escriba la segunda palabra\n");
    i=0;
    while ((s2[i]=getchar())!='\n' && i<LEN)
        i++;
    s2[i]='\0';
    d=any(s1, s2);
    printf("%d\n",d);
}

int any(char s1[],char s2[]){
    int i,j,d;
    d=0;
    for (i=0; i<strlen(s2); ++i) {
        for (j=0; j<strlen(s1); ++j) {
            if (s1[j]==s2[i]) {
                d=j+1;
            }
        }
    }
    if (d==0) {
        d=-1;
    }
    return d;
}