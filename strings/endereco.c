#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[12] = "Emanuelle";
    char logradouro[20] = "Rua Altino Arantes";
    char bairro[10] = "Vila Sonia";
    char cidade[11] = "Piracicaba";
    char uf[3] = "SP";

    printf("---Minhas informações residencias---");
    printf("\nLogradouro: %s", logradouro);
    printf("\nBairro: %s", bairro);
    printf("\n Cidade: %s", cidade);
    printf("\n UF: %s", uf);

    return 0;
}