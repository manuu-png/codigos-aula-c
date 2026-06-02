#include <stdio.h>
#include <locale.h>

void ola () {
    printf("Seja bem-vindo a Calculadora!\n");
}

void Calcular (int opcao, float n1, float n2) {
    float resultado = 0;

    if (opcao == 1) {
        resultado = n1 + n2;
        printf("\na soma é: %.2f", resultado);
    }
      else if (opcao == 2) {
        resultado = n1 - n2;
        printf("\na subtração é: %.2f", resultado);
    } 
       else if (opcao == 3) {
        resultado = n1 * n2;
        printf("\na multiplicação é: %.2f", resultado);
    }   
      else if (opcao == 4) {
        if (n2 != 0) {
            resultado = n1 / n2;
            printf("\na divisão é: %.2f", resultado);

            } else {
            printf("\nnão é possível dividir por zero");
          }
        }
    }


int main(){
   setlocale(LC_ALL, "pt_BR.UTF-8");
   
   ola();

    int identificador = 0;
    float n1 = 0;
    float n2 = 0;

    printf("\nescolha a operação que deseja");
    printf("\n1 -> Soma");
    printf("\n2 -> Subtração");
    printf("\n3 -> Multiplicação");
    printf("\n4 -> Divisão");
    printf("\ndigite o número da opção:");
    scanf("%d", &identificador);

    if (identificador < 1 || identificador > 4) {
        printf("\nopção inválida");
        return 0; 
    }

    printf("\ndigite o primeiro número:");
    scanf("%f", &n1);

    printf("\ndigite o segundo número:");
    scanf("%f", &n2);

    Calcular(identificador, n1, n2);

    return 0;
}