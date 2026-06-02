#include <stdio.h>
#include <locale.h>

void ola(){
    printf("seja bem vindo!");
}

void calcularorcamento() {
    float placavideo = 139.90;
    float caixasom = 99.90;
    float kitmouseetelado = 149.90;
    float monitor = 679.90;

    float totalcomputador = placavideo + caixasom + kitmouseetelado + monitor;

    int totalpessoas = 6; 
    float totalgeral = totalcomputador * totalpessoas;

    float desconto = totalgeral * 0.15; // 15% de desconto
    float avista = totalgeral - desconto;
    float valorparcela = totalgeral / 12;

    printf("\nvalor de um computador completo: R$ %.2f", totalcomputador);
    printf("\nvalor total para o grupo (%d pessoas): R$ %.2f", totalpessoas, totalgeral);

    printf("\nopção de pagamento a vista com um desconto de 15 porcento: R$ %.2f economia de R$ %.2f)", avista, desconto);
    printf("\no total é de R$ %.2f por pessoa.", avista / totalpessoas);

    printf("\nopcao de pagamento parcelado 12x sem juros: 12 parcelas de R$ %.2f", valorparcela);
    printf("\no total é de R$ %.2f por mês para cada pessoa.", valorparcela / totalpessoas);
   }
    int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    ola();

   calcularorcamento();
       
   return 0;
}
