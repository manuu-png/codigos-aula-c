#include <stdio.h>
#include <locale.h>

void ola(){
    printf("seja bem vindo!");
}

void academia() {
    int dias;

   float planovida = 39.99;
    float planosaude = 48.99;
    float planofitness = 58.99;

    printf("\nquantos dias por semana você deseja treinar? (1 a 7)");
    scanf("%d", &dias);

    float vidasaude = 12 * planovida;
    float saudeemdia = 12 * planosaude;
    float fitnesspro = 12 * planofitness;

    printf("\norçamento dos planos");
    printf("\nvida Saude: R$ %.2f por ano", vidasaude);
    printf("\nsaude em Dia: R$ %.2f por ano", saudeemdia);
    printf("\nfitness Pro: R$ %.2f por ano", fitnesspro);

  if (dias <= 3) {
        printf("\nse você irá treinar 3 dias, a Vida Saúde é a mais barata");
    } 
    else if (dias <= 5) {
        printf("\nse você irá treinar 5 dias, a Saúde em Dia é a mais barata");
    }
     else if (dias <= 7) {
        printf("\nse você irá treinar todos os dias, a Fitness Pro compensa mais");
    }  
      else {
        printf("\npor favor, digite um valor entre 1 e 7.");
    }
}


int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    ola();

   academia();
       
   return 0;
}