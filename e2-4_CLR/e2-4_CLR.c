//
//  e2-4_CLR.c
//  
//
//  Created by Carlos López Roa on 17/09/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define LEN 30
void squeezea(char s1[],char s2[]);
int main()
{
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
    squeezea(s1, s2);
    for (i=0; i<=strlen(s1); ++i) {
        putchar(s1[i]);
    }
    printf("\n");
}

void squeezea(char s1[],char s2[]){
    int i,j,m;
    for (m=0; m<strlen(s2); m++) {
        for (i=j=0; s1[i]!='\0'; i++) {
            if(s1[i]!=s2[m])
                s1[j++]=s1[i];
        }
        s1[j]='\0';
    }
}