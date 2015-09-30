#include<stdio.h>
/* count characters in input; 2nd version */

main()
{
      long nc;

      for (nc=0; getchar() != EOF; ++nc)
             ;
      printf("\n%ld\n",nc);
}
