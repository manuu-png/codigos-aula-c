#include <stdio.h>

int main() {
    float valorCorte = 0;
    float valorHitradacao = 0;
    float valorLuzes = 0;
    float valorSobrancelha = 0;

    printf("Qual o valor do corte?");
    scanf("%f", &valorCorte);

    printf("Qual o valor da hitratacao?");
    scanf("%f", &valorHitradacao);

    printf("Qual o valor das luzes?");
    scanf("%f", &valorLuzes);

    printf("Qual o valor da sobrancelha?");
    scanf("%f", &valorSobrancelha);

    float total = valorCorte + valorHitradacao + valorSobrancelha + valorLuzes;

    if (total < 400) {
        printf("O valor ficou barato R$ %.2f", total);
    } else if (total >= 400 && total <=600) {
        printf("O valor ficou razoavel R$ %.2f", total);
    } else if (total > 600) {
        printf("O valor ficou caro R$ %.2f", total);
    }

    return 0;
}