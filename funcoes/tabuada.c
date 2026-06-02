#include <stdio.h>
#include <locale.h>


void ola () {
    printf("Seja bem-vindo ao sistema de tabuada!\n");
}

void CalcularTabuada (int numeros, int inicio, int fim) {
   int i;

    printf("\ntabuada do %d (de %d ate %d)", numeros, inicio, fim);
 
    for (i = inicio; i <= fim; i++) {
        int resultado = numeros * i;
        printf("\n%d x %d = %d", numeros, i, resultado);
    }
}


int main(){
  setlocale(LC_ALL, "pt_BR.UTF-8");

  ola();

 int numeros = 0;
 int inicio = 0;
 int fim = 0;

  printf("\nqual tabuada você quer saber?");
    scanf("%d", &numeros);

  printf("\ndeseja começar a tabuada por qual número?");
    scanf("%d", &inicio);

  printf("\na tabuada deve terminar em qual número?");
    scanf("%d", &fim);

    CalcularTabuada(numeros, inicio, fim);

    return 0;
}