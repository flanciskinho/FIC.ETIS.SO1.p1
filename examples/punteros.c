#include <stdio.h>
#include <stdlib.h>

void cambiar(int *a, int *b)
{
    int aux = *a;
	*a = *b;
	*b = aux;
}

int main(void)
{
	int x = 3;
	int y = 5;

	printf("Antes de llamar a cambia: x = %d y = %d\n", x, y);
	cambiar(&x, &y);
	printf("Despues de llamar a cambia: x = %d y = %d\n", x, y);
	exit(0);
}
