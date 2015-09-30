#include <stdio.h>

main ()
{
	float fahr;
	scanf("%f",&fahr);
	printf("%3.2f \t %6.1f \n",fahr,(5.0/9.0)*(fahr-32));
	
}
