#include <stdio.h>

int main() {
  printf("imprimindo numeros pares e impares");

   for (int i = 0; i < 100; i++)
   {
      // % operador resto da divisao
      if (i % 2 == 0)
      {
        printf("\n Par: %i", i);
      } else {
        printf("\n Impar: %i", i);
      }
      
   }
   
}