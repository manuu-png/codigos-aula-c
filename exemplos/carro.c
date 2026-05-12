/*
Você precisa comprar um carro e pretende realizar o pagamento de forma parcelada.
Crie um algoritimo que calcule o valor das parcelas descontando o valor da entrada de 
30%.
*/
#include <stdio.h>

int main() {
    // Entrada
    float valorCarro = 0;
    int qtdeParcelas = 0;
    const float entrada30 = 0.30;

    printf("Qual o valor do carro?");
    scanf("%f", &valorCarro);

    printf("Quantas parcelas deseja pagar?");
    scanf("%i", &qtdeParcelas);

    // Processamento
    float entrada = (valorCarro*entrada30);
    float totalPagar = (valorCarro - entrada);
    float parcelas = (totalPagar / qtdeParcelas);

    // Saída
    printf("O valor das parcelas e %.2f\n", parcelas);
    printf("O valor da entrada sera de %.2f\n", entrada);

    return 0;
}