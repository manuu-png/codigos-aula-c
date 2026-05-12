#include <stdio.h>
int main() {
//varíaveis
int peso = 0;
int altura = 0;

printf("Qual o seu peso?");
scanf("i%", &peso);

printf("Qual a sua altura?");
scanf("i%", &altura);

//processamento
int IMC = peso/ (altura * altura);

//saída
printf("Seu IMC e de %i", IMC);
return 0;
}


