#include <stdio.h>

int main() {
  int inicio = 0;
  int fim = 0;

  printf("Digite um numero inicial maior que 0");
  scanf("%i", &inicio);

  if (inicio < 0)
  {
    printf("Numero invalido, fim");
  } else {
    printf("Qual o numero final maior que %i", inicio);
    scanf("%i", &fim); 
  }
    
if (fim > inicio)
{
   //continuar
   for (int i = inicio; i <= fim; i++)
   {
    printf("numero %i \n", i);
   }
   
} else {
    // numero final menor ou igual ao inicio
    printf("numeros invalidos, fim \n");
    printf("inicio %i, fim %i", inicio, fim);
}


 return 0;
}