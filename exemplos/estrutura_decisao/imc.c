#include <stdio.h>
int main()
{

    int peso = 0;
    float altura = 0;

    printf("Qual o seu peso?");
    scanf("%i", &peso);

    printf("Qual a sua altura?");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    if (imc < 18.5)
    {
        printf("Classificacao: Abaixo do peso, IMC %.2f", imc);
    }
    else if (imc >= 18.5 && imc < 24.9)
    {
        printf("\n Classificacao: Peso normal, IMC %.2f", imc);
    }
    else if (imc >= 25.0 && imc < 29.9)
    {
        printf("\n Classificacao: Sobrepeso, IMC %.2f", imc);
    }
    else if (imc >= 30.0 && imc < 34.9)
    {
        printf("\n Classificacao: Obesidade grau 1, IMC %.2f", imc);
    }
    else if (imc >= 35.0 && imc < 39.9)
    {
        printf("\n Classificacao: Obesidade grau 2, IMC %.2f", imc);
    }
    else
    {
        printf("\n Classificacao: Obesidade grau 3, IMC %.2f", imc);
    }

    return 0;
}