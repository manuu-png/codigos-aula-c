#include <stdio.h>

int main(){
    float valorLancheRodeio = 0;
    float valorBatataGrande = 0;
    float valorRefri = 0;
    float valorSobremesa = 0;

    printf("Qual o valor do lanche?");
    scanf("%f", &valorLancheRodeio);

    printf("Qual o valor da batata?");
    scanf("%f", &valorBatataGrande);

    printf("Qual o valor do refri?");
    scanf("%f", &valorRefri);

    printf("Qual o valor da sobremesa?");
    scanf("%f", &valorSobremesa);

    float total = valorLancheRodeio + valorBatataGrande + valorRefri + valorSobremesa;

    if (total < 40)
    {
        printf("O valor ficou barato R$ %.2f", total);
    } else if (total >= 40 && total <= 55) {
        printf("O valor ficou razoavel R$ %.2f", total);
    } else if (total > 55) {
        printf("O valor ficou caro R$ %.2f", total);
    }
    

    return 0;
}