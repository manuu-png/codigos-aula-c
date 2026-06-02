#include <stdio.h>
#include <locale.h>

void ola(){
    printf("seja bem vindo!");
}

void CalcularHorasCurso (int semestres, int horasMes) {
     int totalMeses = semestres * 5;
     int totalHoras = totalMeses * horasMes;

      printf("\nresultado do cálculo");
    printf("o seu curso tem um total de %d meses de aula.\n", totalMeses);
    printf("a duração total do seu curso é de: %d horas.\n", totalHoras);
}


int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    ola();

    int qtdsemestres = 0;
    int horasmensais = 0;

    printf("\nquantos semestres tem o seu curso? ");
    scanf("%d", &qtdsemestres);

    printf("\nquantas horas de aula você tem?");
    scanf("%d", &horasmensais);

    CalcularHorasCurso(qtdsemestres, horasmensais);

   return 0;
}