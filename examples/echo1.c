#include<stdio.h>
#include<stdlib.h>

/* echo arguments; 1st version */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s%c", argv[i], (i < argc - 1) ? ' ' : '\n');

	exit(0);
}
