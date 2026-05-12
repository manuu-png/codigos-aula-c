#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int qtdepessoas = 0;
    float totalfesta = 0;
    float totalpessoa = 0;

    char comes[5][30] = {"Coxinha", "Bolinho de queijo", "Esfirra", "Croquete", "Hamburguinho"};

    float valorComes[5] = {99.90, 82.99, 85.99, 78.99, 107.99};

    char bebes[5][30] = {"Coca cola", "Jaboti", "Guarana", "Suco de laranja", "Suco de uva"};

    float valorBebes[5] = {8.99, 9.99, 12.99, 8.99, 9.99};

    printf("Vamos calcular o valor!");

    printf("\nQuantas pessoas vao participar?");
    scanf("%i", &qtdepessoas);

   printf("\nEscolha os salgados");
   int opcao = 0;
   int qtde = 0;
   int qtdeCentos = 0;

   for (int i = 0; i < 5; i++)
   {
    printf("\nvai querer %s? (1->sim, 0->nao)", comes[i]);
    scanf("%i", &opcao);
   
   
   if (opcao == 1)
   {
    printf("Quantos centos de %s?", comes[i]);
    scanf("%i", &qtde);
    qtdeCentos += qtde;
    totalfesta += qtde * valorComes[i];
   }
  }
   
   printf("\nEscolha os bebes");
   int qtdelitros = 0;
   for (int i = 0; i < 5; i++)
   {
    printf("\nvai querer %s? (1->sim, 0->nao)", bebes[i]);
    scanf("%i", &opcao);
   
   
   if (opcao == 1)
   {
    printf("Quantos de %s?", bebes[i]);
    scanf("%i", &qtde);
    totalfesta += qtde * valorBebes[i];

    // 2 litros refri
    if (i == 0 || i == 1 || i == 2)
    {
        qtdelitros += qtde * 2;
    }
    
    // sucos 1 litros
    if (i == 3 || i == 4)
    {
        qtdelitros += qtde * 1;
    }
    
   }
  }

  printf("\nTotal da festa R$ %.2f", totalfesta);
   printf("\nTotal por pessoas R$ %.2f", totalfesta / qtdepessoas);

   printf("\nQtde salgados por pessoa %i", (qtdeCentos * 100)/ qtdepessoas);
   printf("\nQtde litros por pessoas %.3f",(float) qtdelitros / qtdepessoas);

 return 0;
}