#include <stdio.h>
#include <locale.h>


int main(){
   setlocale(LC_ALL, "pt_BR.UTF-8");


    int inicio = 0;
    int fim = 0;
    int i = 0;
  
    printf("\ndigite o numero inicial:");
    scanf("%d", &inicio);

    printf("digite o numero final: ");
    scanf("%d", &fim);

     printf("\nanalise dos numeros:");
    
       for (i = inicio; i <= fim; i++) {
       
        if (i % 2 == 0) {
            printf("\no número %d é par", i);
        }
         else {
            printf("\no número %d é ímpar", i);
        }
       
    }

      return 0;   
    }

    
