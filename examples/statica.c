#include<stdio.h>
#include<stdlib.h>

void ejstat(void)
{
	int auto_var = 1;
	static int static_var = 1;

	printf("auto_var = %d static_var = %d\n", auto_var++, static_var++);
}

int main(void)
{
	int i;

	for (i = 1; i <= 3; i++)
		ejstat();

	exit(0);
}
