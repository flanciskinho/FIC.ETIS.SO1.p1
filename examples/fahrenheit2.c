#include <stdio.h>
#include <stdlib.h>

/*
   Print Fahrenheit-Celsius table
   for f = 0, 20, ..., 300
*/

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
	float fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
		printf("%4.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

	exit(0);
}
