#include <stdio.h>

//funcao para retornar o valor por KM
float calcularValorKm(int qtdeKmPercorridos) {
    if (qtdeKmPercorridos <= 100)
    {
        return qtdeKmPercorridos * 0.20;
    }
    if (qtdeKmPercorridos > 100 && qtdeKmPercorridos <= 200)
    {
        return qtdeKmPercorridos * 0.80;
    }
    if (qtdeKmPercorridos > 300)
    {
        return qtdeKmPercorridos * 1.05;
    }
    
}

float calcularValorEntrega(int qtdeEntregas){
    if (qtdeEntregas <=10)
    {
        return 7.99;
    }
    if (qtdeEntregas > 10 && qtdeEntregas <=20)
    {
        return 16.99;
    }
    if (qtdeEntregas > 20 && qtdeEntregas <= 30)
    {
        return 28.99;
    }
    if (qtdeEntregas > 30)
    {
        return 41.99;
    }
    
}

int main() {
    //Variaveis
    int trabalhouSegunda = 0;
    int trabalhouTerca = 0;
    int trabalhouQuarta = 0;
    int trabalhouQuinta = 0;
    int trabalhouSexta = 0;
    int trabalhouSabado = 0;
    int trabalhouDomingo = 0;

    int qtdeEntregasSegunda = 0;
    int qtdeEntregasTerca = 0;
    int qtdeEntregasQuarta = 0;
    int qtdeEntregasQuinta = 0;
    int qtdeEntregasSexta= 0;
    int qtdeEntregasSabado = 0;
    int qtdeEntregasDomingo = 0;

    int KmSegunda = 0;
    int KmTerca = 0;
    int KmQuarta = 0;
    int KmQuinta = 0;
    int KmSexta = 0;
    int KmSabado = 0;
    int KmDomingo = 0;

    float totalEntregasSegunda = 0;
    float totalKmSegunda = 0;
    float totalEntregasTerca = 0;
    float totalKmTerca = 0;
    float totalEntregasQuarta = 0;
    float totalKmQuarta = 0;
    float totalEntregasQuinta = 0;
    float totalKmQuinta = 0;
    float totalEntregasSexta = 0;
    float totalKmSexta = 0;
    float totalEntregasSabado = 0;
    float totalKmSabado = 0;
    float totalEntregasDomingo = 0;
    float totalKmDomingo = 0;

    int totalDias = 0;

    printf("sou algoritimo que ajuda o Matias, let's go\n");

    printf("trabalhou segunda-feira? 1(sim), 2(nao)");
    scanf("%i", &trabalhouSegunda);
    if (trabalhouSegunda == 1)
    {
        totalDias++;
        printf("quantas entregas fez na segunda?");
        scanf("%i", &qtdeEntregasSegunda);

        printf("quantos km percorreu?");
        scanf("%i", &KmSegunda);

        totalEntregasSegunda = calcularValorEntrega(qtdeEntregasSegunda);
        totalKmSegunda = calcularValorKm(KmSegunda);
    }
    

    printf("trabalhou terca-feira? 1(sim), 2(nao)");
    scanf("%i", &trabalhouTerca);
    if (trabalhouTerca == 1)
    {
        totalDias++; 
        printf("quantas entregas fez na terca?");
        scanf("%i", &qtdeEntregasTerca);

        printf("quantos km percorreu?");
        scanf("%i", &KmTerca);

        totalEntregasTerca = calcularValorEntrega(qtdeEntregasTerca);
        totalKmTerca = calcularValorKm(KmTerca);
    }

    printf("trabalhou quarta-feira? 1(sim), 2(nao)");
    scanf("%i", &trabalhouQuarta);
    if (trabalhouQuarta == 1)
    {
        totalDias++;
        printf("quantas entregas fez na quarta?");
        scanf("%i", &qtdeEntregasQuarta);

        printf("quantos km percorreu?");
        scanf("%i", &KmQuarta);

        totalEntregasQuarta = calcularValorEntrega(qtdeEntregasQuarta);
        totalKmQuarta = calcularValorKm(KmQuarta);
    }

    printf("trabalhou quinta-feira? 1(sim), 2(nao)");
    scanf("%i", &trabalhouQuinta);
    if (trabalhouQuinta == 1)
    {
        totalDias++;
        printf("quantas entregas fez na quinta?");
        scanf("%i", &qtdeEntregasQuinta);

        printf("quantos km percorreu?");
        scanf("%i", &KmQuinta);

        totalEntregasQuinta = calcularValorEntrega(qtdeEntregasQuinta);
        totalKmQuinta = calcularValorKm(KmQuinta);
    }

    printf("trabalhou sexta-feira? 1(sim), 2(nao)");
    scanf("%i", &trabalhouSexta);
    if (trabalhouSexta == 1)
    {   
        totalDias++;
        printf("quantas entregas fez na sexta?");
        scanf("%i", &qtdeEntregasSexta);

        printf("quantos km percorreu?");
        scanf("%i", &KmSexta);

        totalEntregasSexta = calcularValorEntrega(qtdeEntregasSexta);
        totalKmSexta = calcularValorKm(KmSexta);

    }

    printf("trabalhou sabado? 1(sim), 2(nao)");
    scanf("%i", &trabalhouSabado);
    if (trabalhouSabado == 1)
    {
        totalDias++;
        printf("quantas entregas fez no sabado?");
        scanf("%i", &qtdeEntregasSabado);

        printf("quantos km percorreu?");
        scanf("%i", &KmSabado);

        totalEntregasSabado = calcularValorEntrega(qtdeEntregasSabado);
        totalKmSabado = calcularValorKm(KmSabado);
    }

    printf("trabalhou domingo? 1(sim), 2(nao)");
    scanf("%i", &trabalhouDomingo);
    if (trabalhouDomingo == 1)
    {
        totalDias++;
        printf("quantas entregas fez no domingo?");
        scanf("%i", &qtdeEntregasDomingo);

        printf("quantos km percorreu?");
        scanf("%i", &KmDomingo);

        totalEntregasDomingo = calcularValorEntrega(qtdeEntregasDomingo);
        totalKmDomingo = calcularValorKm(KmDomingo);
    }

    // relatorio da semana completa
   printf("\nsegunda-feira: %s", trabalhouSegunda == 1 ? "sim": "nao");
   printf("\nquantidade entregas: %i", qtdeEntregasSegunda);
   printf("\n km percorridos: %i", KmSegunda);
   printf("\n valor a receber: R$ %.2f", totalEntregasSegunda + totalKmSegunda);

   printf("\nterca-feira: %s", trabalhouTerca == 1 ? "sim": "nao");
   printf("\nquantidade entregas: %i", qtdeEntregasTerca);
   printf("\n km percorridos: %i", KmTerca);
   printf("\n valor a receber: R$ %.2f", totalEntregasTerca + totalKmTerca);
    
   printf("\nsquarta-feira: %s", trabalhouQuarta == 1 ? "sim": "nao");
   printf("\nquantidade entregas: %i", qtdeEntregasQuarta);
   printf("\n km percorridos: %i", KmQuarta);
   printf("\n valor a receber: R$ %.2f", totalEntregasQuarta + totalKmQuarta);

   printf("\nquinta-feira: %s", trabalhouQuinta == 1 ? "sim": "nao");
   printf("\nquantidade entregas: %i", qtdeEntregasQuinta);
   printf("\n km percorridos: %i", KmQuinta);
   printf("\n valor a receber: R$ %.2f", totalEntregasQuinta + totalKmQuinta);
   
   printf("\nsexta-feira: %s", trabalhouSexta == 1 ? "sim": "nao");
   printf("\nquantidade entregas: %i", qtdeEntregasSexta);
   printf("\n km percorridos: %i", KmSexta);
   printf("\n valor a receber: R$ %.2f", totalEntregasSexta + totalKmSexta);

   printf("\nsabado: %s", trabalhouSabado == 1 ? "sim": "nao");
   printf("\nquantidade entregas: %i", qtdeEntregasSabado);
   printf("\n km percorridos: %i", KmSabado);
   printf("\n valor a receber: R$ %.2f", totalEntregasSabado + totalKmSabado);

   printf("\ndomingo: %s", trabalhouSegunda == 1 ? "sim": "nao");
   printf("\nquantidade entregas: %i", qtdeEntregasDomingo);
   printf("\n km percorridos: %i", KmDomingo);
   printf("\n valor a receber: R$ %.2f", totalEntregasDomingo + totalKmDomingo);

   printf("\ntotal semanal");
   printf("\ntotal de dias trabalhados: %i", totalDias);
   int totalEntregas = qtdeEntregasSegunda + qtdeEntregasTerca + qtdeEntregasQuarta + qtdeEntregasQuinta + qtdeEntregasSexta + qtdeEntregasSabado + qtdeEntregasDomingo;
   printf("\ntotal das entregas %i", totalEntregas);
   int totalKms = totalKmSegunda + totalKmTerca + totalKmQuarta + totalEntregasQuinta + totalKmSexta + totalKmSabado + totalKmDomingo;
   printf("\ntotal de KMs %i", totalKms);

   printf("\nmedia entregas por dia %i", totalEntregas / totalDias);

   float totalGeral = totalEntregasSegunda + totalKmSegunda +
   totalEntregasTerca + totalKmTerca +
   totalEntregasQuarta + totalKmQuarta +
   totalEntregasQuinta + totalKmQuinta +
   totalEntregasSexta + totalKmSexta +
   totalEntregasSabado + totalKmSabado +
   totalEntregasDomingo + totalKmDomingo;

   printf("media valor por dia %.2f", totalGeral);

   // ganhou o bonus
   int media = totalEntregas / totalDias;
   if (totalDias == 7 && totalKms >= 200 && media >= 26)
   {
    printf("\nbonus de R$ 178,99");
   }
   
    return 0;
}