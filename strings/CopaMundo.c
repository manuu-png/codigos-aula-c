#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char GrupoBrasil[4][50];
    int resultados[3][2];
    int totalpontosBrasil = 0;

    printf("--Vamos preencher o grupo do Brasil na Copa--");

    for (int i = 0; i < 4; i++)
    {
        printf("\nQual seleção?");
        scanf(" %[^\n]", GrupoBrasil[i]);
    }

    printf("--legal, agora vamos para os resultados dos jogos--");

    for (int i = 0; i < 3; i++)
    {
        printf("\nPartida %i: %s x %s=", i+1, GrupoBrasil[0], GrupoBrasil[i+1]);
       scanf("%i x %i", &resultados[i][0], &resultados[i][1]);
    }

    //imprimindo os resultados
    printf("--Resultados dos jogos---");

    for (int i = 0; i < 3; i++)
    {
        printf("\n %s %i x %i %s", GrupoBrasil[0], resultados[i][0], resultados[i][0], GrupoBrasil[i+1]);
        
        if (resultados[i][0] > resultados[i][1])
        {
            totalpontosBrasil += 3;
        }
         
        if (resultados[i][0] == resultados[i][1])
        {
            totalpontosBrasil += 1;
        } 
    }

    printf("\nO Brasil fez %i pontos", totalpontosBrasil);

    return 0;
}