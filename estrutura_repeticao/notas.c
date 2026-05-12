#include <stdio.h>

int main()
{
    printf("Vamos calcular as notas do aluno");

    int qtdeNotas = 0;
    double nota = 0;
    double totalNotas = 0;
    double mediaFinal = 0;

    printf("\n Quantas notas deseja calcular?");
    scanf("%i", &qtdeNotas);

    for (int i = 0; i < qtdeNotas; i++)
    {
        printf("Qual a nota do aluno?");
        scanf("%lf", &nota);

        totalNotas = totalNotas + nota;
    }
    mediaFinal = totalNotas / qtdeNotas;

    printf("\n A media final e %.2f", mediaFinal);

    if (mediaFinal >= 6)
    {
        printf("\n Aprovado");
    }
    else
    {
        printf("\n Reprovado");
    }

    return 0;
}