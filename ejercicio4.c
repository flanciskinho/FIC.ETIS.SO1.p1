#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXENTRADA 1024

char *str_chr(char *s, const char c)
{/* devuelve un puntero a la primera ocurrencia de c en s
en caso de no encontrarla devuelve NULL */
   if (s == NULL)
      return NULL;
      
   char *aux;
   
   for (aux = s; *aux!='\0'; aux++)
      if (*aux == c)
         return aux;
   
   return NULL;
}

int main()
{/* Funcion main */
   char entrada[MAXENTRADA];
   printf("Introduce cadena: ");
   fgets(entrada, MAXENTRADA,stdin);
   char c, *ptr;
   printf("Introduce caracter: ");
   scanf("%c", &c);
   
   if ((ptr = index(entrada, '\n')) != NULL)
      *ptr = '\0';
      
   if ((ptr = str_chr(entrada, c))==NULL)
      printf("%c: not found in: '%s'\n",c, entrada);
   else
      printf("strchr(%s,%c) = %s\n",entrada, c, ptr);
   
   exit(EXIT_SUCCESS);
}
