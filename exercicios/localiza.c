#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

  int km = 0;
  int dias = 0;
  char nome[30];
  char carro[30];
  float totalPorKM = 0;
  float totalPorDia = 0;
  const float VALOR_POR_KM = 1.25;
  const float VALOR_POR_DIA = 99.50;
  const char cupons[3][30] = {"ECL_10", "ECL_20", "ECL_30"};
  char cupomCliente[30];
  int temCupom = 0;
  float valorDesconto = 0;

  printf("olá seja bem vindo, qual o seu nome?");
  scanf("%s", nome);

  printf("obrigado por escolher nossa loja, %s", nome);

  printf("\n%s, qual carro deseja alugar?", nome);
  scanf("%s", carro);

  printf("\nquantos KMs com o %s você vai rodar com o carro?", carro);
  scanf("%i", &km);

  printf("para mostrar um relatório detalhado diga quantos dias vai precisar do carro");
  scanf("%i", &dias);

  printf("%s, tem cupom de desconto? 1->sim, 0->nao", nome);
  scanf("%i", &temCupom);

  if (temCupom == 1)
  {
    printf("digite o codigo: ");
    scanf("%s", cupomCliente);
    for (int i = 0; i < 3; i++)
    {
        if(strcmp(cupomCliente, "ECL_10") == 0){
            valorDesconto == 10;
        }
        if(strcmp(cupomCliente, "ECL_20") == 0){
            valorDesconto == 20;
        }
        if(strcmp(cupomCliente, "ECL_10") == 0){
            valorDesconto == 30;
        }
        
    }
}
  
  totalPorKM = (km * VALOR_POR_KM) - valorDesconto;
  totalPorDia = (dias * VALOR_POR_DIA) - valorDesconto;

  printf("%s, segue um relatório detalhado", nome);
  printf("\ntotal por KM: R$ %.2f", totalPorKM);
  printf("\ntotal por dia: R$ %.2f", totalPorDia);

  if (temCupom == 1)
  {
    printf("\nvocê teve desconto de R$ %.2f", valorDesconto);
  }
  

  if (totalPorDia < totalPorKM)
  {
    printf("\nsugerimos usar o plano por dia");
  } else {
    printf("\nsugerimos usar o plano por KM");
  }
  
  printf("\ntenha uma ótima tarde.");
  printf("\n desenvolvido por Emanuelle C.L");



    return 0;
}