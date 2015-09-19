#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXENTRADA 1024

int palindrono(const char *s1)
{/* mira si una cadena es palindrona
si lo es devuelve 0
si no devueleve -1 */
   int i, len = strlen(s1);
   for (i = 0; i < len/2; i++)
      if (s1[i] != s1[len-i-1])
         return -1;
         
   return 0;
}

void print_reverse(const char *s1)
{/* Imprime la cadena empezando por el final */
   int i, len = strlen(s1);
   
   for (i = 0; i<len; i++)
      printf("%c",s1[len-i-1]);
   printf("\n");
}

int main(void)
{/* funcion main */
   char entrada[MAXENTRADA];
   printf("Introduce cadena: ");
   fgets(entrada, MAXENTRADA,stdin);
   
   char *ptr = index(entrada, '\n');/*le quitamos el \n*/
   if (ptr != NULL)
      *ptr = '\0';
   
   if (palindrono(entrada)==0)
      printf("Es palindrono\n");
   else
      print_reverse(entrada);
   
   exit(EXIT_SUCCESS);

}
