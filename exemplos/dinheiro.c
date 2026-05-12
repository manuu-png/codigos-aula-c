/*
Você esta trabalhando e gostaria de guardar 25% do seu salario todo mes.
O banco esta com um investimento que  rende 6.8% ao mes de juros e você vai 
usar esse formato de investimento. Crie um algoritimo para calcular seu investimento.
*/

#include <stdio.h>
int main() {
    // Entrada
    float salario = 0;
    int tempo = 0;
    const float gurdar25 = 0.25; 
    const float juros = 0.068;

    printf("Qual e o salario?");
    scanf("f%", &salario);

    printf("Qual o tempo deseja investir?");
    scanf("i%", &tempo);

    // Processamento
    float totalJurosPercentual = tempo * juros; // total de juros
    float salario25 = salario * gurdar25; // 25% do salario
    float totalDinheiro = tempo * salario25; // montante guardado
    float totalJurosValor = totalDinheiro * totalJurosPercentual;
    float totalComJuros = totalJurosValor + totalDinheiro;

    // Saída
    printf("Total juros em %.2f\n", totalJurosPercentual);
    printf("Valor guardado sem juros R$ %.2f\n", totalDinheiro);
    printf("Meses %i \n", tempo);
    printf("Valor do juros do banco R$ %.2f\n", totalJurosValor);
    printf("Valor guardado com juros R$ %.2f", totalComJuros);

    return 0;
}