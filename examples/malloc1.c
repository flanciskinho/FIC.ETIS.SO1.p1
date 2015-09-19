#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int *buf = malloc(6 * sizeof(int));
	int i;

	if (buf == NULL) {
		printf("no queda memoria\n");
		exit(1);
	}
	for (i = 0; i <= 5; i ++) {
		buf[i] = i * 10;
	}
	for (i = 0; i <= 5; i ++) {
		printf("La posición %d tiene valor %d\n", i, buf[i]);
	}
	free(buf);
	exit(0);
}
