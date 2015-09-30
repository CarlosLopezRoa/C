//
//  e2-2.c
//  
//
//  Created by Carlos López Roa on 10/09/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include <stdio.h>
#define MAXLINE 1000
int main()
{
    int c;
    int i=0;
    int lim=MAXLINE;
    char s[lim];
    
    for (i=0; (i<lim-1); ++i) {
        if ((c=getchar())!='\n')
            if (c!=(EOF)){
                s[i]=c; 
            }
    }
}