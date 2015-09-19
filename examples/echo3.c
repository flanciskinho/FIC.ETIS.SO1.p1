#include<stdio.h>
#include<stdlib.h>

/* echo arguments; 3nd version */

int main(int argc, char *argv[])
{

	while (--argc > 0)
		printf("%s%c", *++argv, (argc > 1) ? ' ' : '\n');

	exit(0);
}
