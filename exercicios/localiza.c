#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

  int km = 0;
  int dias = 0;
  char nome[30];
  float totalPorKM = 0;
  float totalPorDia = 0;
  const float VALOR_POR_KM = 1.25;
  const float VALOR_POR_DIA = 99.50;

  printf("olá seja bem vindo, qual o seu nome?");
  scanf("%s", nome);

  printf("obrigado por escolher nossa loja, %s", nome);

  printf("\nquantos KMs você vai rodar com o carro?");
  scanf("%i", &km);

  printf("para mostrar um relatório detalhado diga quantos dias vai precisar do carro");
  scanf("%i", &dias);

  totalPorKM = km * VALOR_POR_KM;
  totalPorDia = dias * VALOR_POR_KM;

  printf("%s, segue um relatório detalhado", nome);
  printf("\ntotal por KM: R$ %.2f", totalPorKM);
  printf("\ntotal por dia: R$ %.2f", totalPorDia);

  if (totalPorDia < totalPorKM)
  {
    printf("\nsugerimos usar o plano por dia");
  } else {
    printf("\nsugerimos usar o plano por KM");
  }
  
  printf("\ntenha uma ótima tarde.");



    return 0;
}