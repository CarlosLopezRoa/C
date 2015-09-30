//
//  File.c
//  
//
//  Created by Carlos López Roa on 21/08/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include <stdio.h>
int main(){
    int c;
    
    while ((c=getchar())!=EOF) {
        if (c=='\t') {
            printf("\\");
            printf("t");}
        if (c=='\b'){
            printf("\\");
            printf("n");}
        if (c=='\\'){
            printf("\\");
            printf("\\");}        
        if (c!='\t' && c!='\b' && c!='\b') {
            putchar(c);}
                
        
    }
    
    
    
}