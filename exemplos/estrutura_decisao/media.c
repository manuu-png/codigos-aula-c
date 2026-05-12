#include <stdio.h>
int main() {
    float nota = 0;
    int faltas = 0;
    int EAD = 0;

    printf("Qual a nota final do aluno?");
    scanf("%f", &nota);

    printf("Quantas faltas o aluno tem?");
    scanf("%i", &faltas);

    printf("Qual a porcentagem do EAD que foi feita?");
    scanf("%i", &EAD);

    if (nota >= 50 && faltas <= 25 && EAD == 100)
    {
        printf("esta aprovado, ufa passei");
    } else {
        printf("esta reprovado, ai ai lascou");
    }
    


    return 0;

}