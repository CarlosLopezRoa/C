//
//  2.c
//  
//
//  Created by Carlos López Roa on 19/09/11.
//  Copyright 2011 CFATA-UNAM. All rights reserved.
//

/* Printing an unsigned integer in bits */
#include <stdio.h>
#include <math.h>

main() {
    unsigned x;
    void displayBits(unsigned);
    printf("Enter an unsigned integer\n");
    scanf("%u",&x);
    displayBits(x);
    return 0;
}
void displayBits(unsigned value)
{
    unsigned c, displayMask = 1 << 31;
    printf("%10u = ",value);
    for(c=1; c <= 32; c++)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<=1;
        if(c%16 == 0)
            putchar(' ');
    }
    putchar('\n');
}
