#include <stdio.h>

int main() {
    int dia = 0;

    printf("Qual dia da semana? 0->dom, 7->sab");
    scanf("%i", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingou!!!");
        break;
    case 2:
       printf("Segundona, vamos pra cima");
        break;
    case 3: 
      printf("Terca, vamos!!");
      break;
    case 4:
      printf("Quartou, meio da semana");
      break;
    case 5:
      printf("Quintou, quase la");
      break;
    case 6:
      printf("Sextou, ultimo dia!!");
      break;
    case 7:
      printf("Sabadouu, finalmente!!");
      break;
      
      return 0;
    }
} 