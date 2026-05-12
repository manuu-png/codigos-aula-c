#include <stdio.h>

int main()
{
    int i = 0;
    int res = 0;
    int tabuada = 0;

    do
    {
        printf("digite o numero da tabuada ou 0 para sair");
        scanf("%i", &tabuada);

        while (i <= 10)
            
        {
            res = i * tabuada;
            printf("\n%i x %i = %i", tabuada, i, res);
            i++;
        }
        i = 0;
    } while (tabuada != 0);

    return 0;
}