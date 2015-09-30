#include<stdio.h>

/* copy input to output; 2nd version */

main()
{
      int c;

      while ((c=getchar()) != EOF) {

            putchar(c);
      }
      putchar(c);
      printf("\n%d\n",c);
}
