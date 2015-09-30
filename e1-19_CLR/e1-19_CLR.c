//
//  e1-19_CLR.c
//  
//
//  Created by Carlos López Roa on 05/09/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//  Este programa copia su entrada en su salida volteando línea por línea usando funciones, cabe resaltar que las proposiciones WHILE llevan llaves y por eso he demorado 2 horas más de lo previsto para encontrar el error.

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int getlinea(char line[]);
void copia(char to[], char from[]);
int len;
main()
{
    char line[MAXLINE]; char longest[MAXLINE];
    while ((len = getlinea(line)) > 0){
        copia(longest,line);
        printf("%s", longest);}
    return 0; 
}

int getlinea(char s[])
{
    int c, i;
    for (i=0; i<MAXLINE; ++i) 
        s[i]=0;
    for (i=0; i < MAXLINE-1 && (c=getchar())!=EOF && c!='\n'; ++i) 
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i; }
    s[i] = '\0';
    return i; }

void copia(char to[], char from[])
{
    int i;
    for (i=0; i<MAXLINE; ++i) 
        to[i]=0;
    i = 0;
    while ((to[len-1-i] = from[i]) != '\0')
        ++i; }