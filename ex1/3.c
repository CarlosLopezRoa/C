//
//  3.c
//  
//
//  Created by Carlos López Roa on 19/09/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int power2a(int,int);
void displayBits(unsigned);
main() {
    unsigned x,b;
    printf("Enter an unsigned integer\n");
    scanf("%u",&x);
    printf("Enter a integer power to raise \n");
    scanf("%u",&b);
    printf("Resultado %d\n", power2a(x,b));
    printf("En binario \n");
    displayBits(power2a(x,b));
    return 0;
}
int power2a(int number,int pow){
    int r;
    r=number<<(pow-1);
    return r;
}
void displayBits(unsigned value)
{
    unsigned c, displayMask = 1 << 15;
    printf("%10u = ",value);
    for (c=1; c <= 16; c++)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<=1;
        if (c%8 == 0)
            putchar(' ');
    }
    putchar('\n');
}
