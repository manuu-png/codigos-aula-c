#include <stdio.h>

int main()
{
    int dia = 0;

    printf("qual dia da semana? (dom->0, sab->6)");
    scanf("%i", &dia);

    if (dia == 0)
    {
        printf("domingo so alegria, de boa na lagoa");
    }
    else if (dia == 1)
    {
        printf("segundona, bora trabalhar :)");
    }
    else if (dia == 2)
    {
        printf("terca, vamos pra cima");
    }
    else if (dia == 3)
    {
        printf("quarta, sem enrolacao");
    }
    else if (dia == 4)
    {
        printf("quinta, quase laa");
    }
    else if (dia == 5)
    {
        printf("sextou, vamo animarr");
    }
    else if (dia == 6)
    {
        printf("sabadou, agora so descanso");
    }
    else
    {
        printf("dia nao encontrado");
    }

    return 0;
}