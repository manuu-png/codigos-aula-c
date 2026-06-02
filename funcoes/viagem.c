#include <stdio.h>
#include <locale.h>

void ola(){
    printf("seja bem vindo!");
}

void viagem(float distancia, float consumo, float gasolina, float etanol) {
    float litros = distancia / consumo;
  
     printf("\ngasto com gasolina: R$ %.2f", litros * gasolina);
    printf("\ngasto com etanol: R$ %.2f", litros * etanol);

    
    if (etanol <= gasolina * 0.7) {
        printf("\nvale mais a pena usar etanol.");
    } else {
        printf("\nvale mais a pena usar gasolina.");
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    ola();

 float distancia, consumo, gasolina, etanol;
  printf("distancia da viagem:");
    scanf("%f", &distancia);

    printf("\nconsumo do carro:");
    scanf("%f", &consumo);

    printf("\npreco da gasolina: ");
    scanf("%f", &gasolina);

    printf("\npreco do etanol: ");
    scanf("%f", &etanol);

  viagem(distancia, consumo, gasolina, etanol);

    return 0;
}