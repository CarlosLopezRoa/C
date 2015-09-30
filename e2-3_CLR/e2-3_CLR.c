//
//  e2-3_CLR.c
//  
//
//  Created by Carlos López Roa on 17/09/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//
/*int main(){
 int n;
 scanf("%x",&n);
 printf("%d\n",n);
 }*/

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#define LEN 5
unsigned htoi(char s[]);
int main()
{
    int c,i,d;
    char s[LEN];
    for (i=0; i<LEN-1 &&(c=getchar())!=EOF; ++i) {
        s[i]=c;
    }
    d=htoi(s);
    printf("%d\n",d);
}

unsigned htoi(char s[]){
    int out,i;
    out=0;
    for (i=2; i<LEN-1; ++i) {
        if (s[i]>='0' && s[i]<='9') 
            s[i]=s[i]-'0';
        if (s[i]>='A' && s[i]<='F') 
            s[i]=tolower(s[i]);
        if (s[i]>='a' && s[i]<='f') 
            s[i]=s[i]-'a'+10;
    }
    for (i=2; i<LEN-1; ++i) {
        out=out+s[i]*pow(16,LEN-i-2);
    }
    return out;
}

