#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[30];
    const float jurosVeiculos = 0.015;
    const float jurosImoveis = 0.005;
    int meses = 0;
    int opcao = 0;
    int subOpcao = 0;
    float rendaMensal = 0;
    float renda30 = 0;
    float valorVeiculo = 0;
    float valorImoveis = 0;
    int qtdeParcelas = 0;
    float total$ = 0;
    float totaljuros = 0;
    float totalImovelJuros = 0;
    float valorParcelaImovel = 0;
    float total$veiculo = 0;
    float totalVeiculosjuros = 0;
    float totalJuros2 = 0;
    float valorParcelaveiculo = 0;

    char veiculos[3][30] = {"Caminhão", "Carros", "Motos"};
    char imoveis[2][30] = {"Casas", "Apartamentos"};

    printf("olá seja bem vindo, qual o seu nome?");
    scanf("%s", nome);

    printf("obrigado por escolher nossa loja de financiamentos, %s", nome);

    printf("\ndiga quantos meses vai precisar do financiamento?");
    scanf("%d", &meses);

    printf("\nqual é sua renda mensal?");
    scanf("%f", &rendaMensal);

    printf("\ndeseja parcelar em quantas vezes?");
    scanf("%d", &qtdeParcelas);

    printf("\ne o que deseja financiar? (1->imoveis, 0->veiculos)");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("\no que deseja financiar? (1->apartamento, 2->casa)");
        scanf("%d", &subOpcao);
        printf("\nqual é o valor do imóvel?");
        scanf("%f", &valorImoveis);

        int entrada = 0;
        float valorEntrada = 0;
        printf("voce vai dar entrada no valor? (1->sim, 2->nao)");
        scanf("%i", &entrada);
        if (entrada == 1)
        {
            printf("qual o valor da entrada?");
            scanf("%f", &valorEntrada);

            valorImoveis = valorImoveis - entrada;
        }

        totaljuros = qtdeParcelas * jurosImoveis;
        total$ = valorImoveis * totaljuros;
        totalImovelJuros = valorImoveis + total$;
        valorParcelaImovel = totalImovelJuros / qtdeParcelas;

        printf("\nTotal da parcela é de R$ %.2f", valorParcelaImovel);
        renda30 = rendaMensal * 0.30;

        if (valorParcelaImovel > renda30)
        {

            printf("\nseu financiamento não foi aprovado");
        }
        else
        {
            printf("\nparabéns! seu financiamento foi aprovado!");
        }
    }
    else
    {

        printf("\no que deseja financiar? (1->caminhão, 2->carro, 3->motos)");
        scanf("%d", &subOpcao);
        printf("\nqual é o valor do veículo?");
        scanf("%f", &valorVeiculo);

        int entrada = 0;
        float valorEntrada = 0;
        printf("voce vai dar entrada no valor? (1->sim, 2->nao)");
        scanf("%i", &entrada);
        if (entrada == 1)
        {
            printf("qual o valor da entrada?");
            scanf("%f", &valorEntrada);

            valorVeiculo = valorVeiculo - entrada;
        }
        

        totalJuros2 = qtdeParcelas * jurosVeiculos;
        total$veiculo = valorVeiculo * totalJuros2;
        totalVeiculosjuros = valorVeiculo + total$veiculo;
        valorParcelaveiculo = totalVeiculosjuros / qtdeParcelas;

        printf("\nTotal da parcela é de R$ %.2f", valorParcelaveiculo);

        renda30 = rendaMensal * 0.30;
        if (valorParcelaveiculo > renda30)
        {

            printf("\nseu financiamento não foi aprovado");
        }
        else
        {

            printf("\nparabéns! seu financiamento foi aprovado!");
        }
    }

    printf("\n desenvolvido por Emanuelle C.L");
    return 0;
}