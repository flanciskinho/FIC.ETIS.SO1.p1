#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
	char *cadena;

	cadena=malloc(10*sizeof(char));

	strcat(strcpy(cadena, "hola"), "adios");
	
	printf("%s\n",cadena);
	
	free(cadena);
	
	exit(0);
}
