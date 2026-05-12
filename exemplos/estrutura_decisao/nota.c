#include <stdio.h>
int main () {
    int nota = 0;

    printf("Qual foi sua nota?");
    scanf("%i", &nota);

    if(nota >= 6.9) {
        printf("voce foi aprovado");

    } else {
        printf("voce foi reprovado");
    }

    return 0;
}