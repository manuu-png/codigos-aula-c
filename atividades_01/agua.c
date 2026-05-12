#include <stdio.h>

int main() {
 // Entrada de informações, variáveis e constantes
 const float valorPorLitro = 0.05;
 const int qtdeLitrosMulta = 400;
 const int qtdeLitrosDesconto = 250;
 const float valorMulta = 150;
 const float valorDesconto = 50;
 const int periodo30 = 30;
 const int faixaEconomica = 250;
 const int faixaExcessiva = 400;


 int qtdePessoasResidencia = 0;
 float valorTotalConta = 0;
 int qtdeLitrosConsumida = 0;
 int idade = 0;

 // processando as informações
 printf("ola, vamos calcular sua conta de agua\n");
 printf("para iniciar, quantas pessoas moram na residencia?");
 scanf("%i", &qtdePessoasResidencia);

 for (int i = 0; i < qtdePessoasResidencia; i++)
 {
    printf("legal, agora qual a idade da pessoa %i: ", i);
    scanf("%i", &idade);

     if (idade <= 10) {
       qtdeLitrosConsumida += 18;
     } else if (idade > 10 && idade <=18) {
       qtdeLitrosConsumida += 30;
     } else if (idade > 18 && idade <=25) {
       qtdeLitrosConsumida += 42;
     } else if(idade > 25) {
       qtdeLitrosConsumida += 24;
     }

 }
    // valor total conta
    valorTotalConta = valorPorLitro * qtdeLitrosConsumida * periodo30;
 
    // saida, relatorio
    if (qtdeLitrosConsumida >= faixaExcessiva) 
    {
        // faixa excessiva
        printf("faixa de consumo: execessiva\n");
        printf("total de pessoas na residencia: %i\n", qtdePessoasResidencia);
        printf("quantidade consumo em litros: %i\n", qtdeLitrosConsumida);
        printf("valor da conta mensal: R$ %.2f\n", valorTotalConta);
        printf("multa aplicada: R$ %.2f\n", valorMulta);
    } else if (qtdeLitrosConsumida <= faixaEconomica)   
    {
        //faixa economica
        printf("faixa de consumo: economica\n");
        printf("total de pessoas na residencia: %i\n", qtdePessoasResidencia);
        printf("quantidade consumo em litros: %i\n", qtdeLitrosConsumida);
        printf("valor da conta mensal: R$ %.2f\n", valorTotalConta);
        printf("desconto na proxima conta: R$ %.2f\n", valorDesconto);
    } else {
     // faixa normal
      printf("faixa de consumo: normal\n");
      printf("total de pessoas na residencia: %i\n", qtdePessoasResidencia);
      printf("quantidade consumo em litros: %i\n", qtdeLitrosConsumida);
      printf("valor da conta mensal: R$ %.2f\n", valorTotalConta);

    }
    
    
    return 0;
}