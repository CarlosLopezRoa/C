//
//  e2-1.c
//  
//
//  Created by Carlos López Roa on 10/09/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//  Escriba un programa para determinar los rangos de variables char, short, int y long, tanto signed como unsigned. 

#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main(){
    printf("Desde la biblioteca <limits.h>\n");
    printf("Tipo \t\t signed \t\t\t\t\t\t\t\t\t\t\t\t unsigned \n char  \t\t %d,%d     \t\t\t\t\t\t\t\t\t\t\t\t %d \n short \t\t %d,%d \t\t\t\t\t\t\t\t\t\t\t\t %d \n int   \t\t %d,%d     \t\t\t\t\t\t\t\t %u \n long  \t\t %ld,%ld     \t\t\t\t %lu \n", SCHAR_MIN, SCHAR_MAX, UCHAR_MAX,SHRT_MIN, SHRT_MAX, USHRT_MAX ,INT_MIN,INT_MAX, UINT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX);
    printf("Calculados\n");
    printf("Tipo \t\t signed \t\t\t\t\t\t\t\t\t\t\t\t unsigned \n char  \t\t %.0f,%.0f     \t\t\t\t\t\t\t\t\t\t\t\t %.0f \n short \t\t %.0f,%.0f \t\t\t\t\t\t\t\t\t\t\t\t %.0f \n int   \t\t %.0f,%.0f     \t\t\t\t\t\t\t\t %.0f \n long  \t\t %.0f,%.0f     \t\t\t\t %.0f \n",-pow(2,8-1),pow(2, 8-1)-1,pow(2, 8)-1,-pow(2, 16-1),pow(2, 16-1)-1 ,pow(2, 16)-1,-pow(2, 32-1),pow(2, 32-1)-1,pow(2, 32)-1,-pow(2, 64-1),pow(2, 64-1)-1 , pow(2, 64)-1);
}
