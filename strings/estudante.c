#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[20]; 
    char escola[20]; 
    char curso[20];

    printf("\n-- olá, vamos preencher seu cadastro ---");
    
    printf("Qual o seu nome?");
    scanf(" %[^\n]", nome);

    printf("Qual o nome da sua escola?");
    scanf(" %[^\n]", escola);

    printf("Qual o nome do seu curso técnico?");
    scanf(" %[^\n]", curso);

    printf("\n--Suas informações acadêmicas são--");
    printf("\nEscola: %s", escola);
    printf("\nCurso Técnico: %s", curso);

    return 0;
}