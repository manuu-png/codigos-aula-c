/**
 * Calcule o imc
 * de uma pessoa
 * com valores
 * fixos nas variáveis
 * e mostre o valor
 * ao final
 */

 #include <stdio.h>

 int main() {
    //Declaração de variáveis
    //entrada
    float peso = 70;
    float altura = 1.75;

    printf("ola vamos calcular o IMC /n");

    float resultado = peso/ (altura * altura);

    printf("O IMC e %f", resultado);

    return 0;
 }
