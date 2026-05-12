#include <stdio.h>

int main(){

    float valorunha = 0;
    float valorpintar = 0;
    float valorcilios = 0;
    float valorcortarcabelo = 0;
    float valorhidratacao = 0;
    float valorbabyliss = 0;

    int opcao;

    printf("Vai fazer unha? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor da unha? ");
        scanf("%f", &valorunha);
    }

    printf("Vai pintar o cabelo? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor para pintar? ");
        scanf("%f", &valorpintar);
    }

    printf("Vai colocar cilios? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor dos cilios? ");
        scanf("%f", &valorcilios);
    }

    printf("Vai cortar o cabelo? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor do corte de cabelo? ");
        scanf("%f", &valorcortarcabelo);
    }

    printf("Vai fazer hidratacao? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor da hidratacao? ");
        scanf("%f", &valorhidratacao);
    }

    printf("Vai fazer babyliss? (1 -> sim, 0 -> nao): ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Qual o valor do babyliss? ");
        scanf("%f", &valorbabyliss);
    }

    float total = valorunha + valorpintar + valorcilios + valorcortarcabelo + valorhidratacao + valorbabyliss;

    printf("\nTotal sem desconto: R$ %.2f\n", total);

    float desconto = total * 0.05;
    float total_desconto = total - desconto;

    printf("Total com 5%% de desconto (a vista): R$ %.2f\n", total_desconto);

    int parcelas;
    printf("\nEm quantas parcelas deseja pagar? ");
    scanf("%d", &parcelas);

    float valor_parcela = total / parcelas;

    printf("Pagamento parcelado em %d vezes de R$ %.2f\n", parcelas, valor_parcela);

    if (total < 500){
        printf("O valor ficou bom.\n");
    }
    else if (total >= 500 && total <= 1000){
        printf("O valor ficou razoavel.\n");
    }
    else{
        printf("O valor ficou caro.\n");
    }

    return 0;
}