#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int is_primo(const int number)
{/*
Mira si un numero es primo
devuelve true si lo es
no en caso contrario
*/
   int i, aux = (number>=0)?number:-1*number;

   for (i = aux-1; i>1; i--)
      if ((aux%i)==0)
         return -1;
      
   return 0;
}

void print_factores(const int number)
{/*
Imprime los factores en los que se descompone el numero
*/
   int i = 2, aux = (number>=0)?number:-1*number;
   
  /* Mira si un primo mas pequeño que si mismo es divisor si lo es lo imprime
   y sigue mirando si sigue siendo ese valor divisor, si no prueba con el siguiente */
   while (i <= aux) {
      if (is_primo(i)==0) {
         if ((aux % i) == 0) {
            printf("%d ", i);
            aux = aux / i;
            continue;
         }
      }
      i++;
   }
   
   printf("\n");
}

int main()
{/* funcion main */
   int number;

   printf("Numero: ");
   scanf("%d",&number);
   
   int primo = is_primo(number);
   
   if (primo==0)
      printf("%d: es primo\n",number);
   else {
      printf("%d: no es primo\n",number);
      printf("factores de %d: ", number);
      print_factores(number);
   }
      
   exit(EXIT_SUCCESS);
}
