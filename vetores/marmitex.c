#include <stdio.h>

int main() {
    
    char marmitas[4][30] = {
        "Frango com arroz",
        "Carne com batata",
        "Feijoada",
        "Vegetariana"
    };

    
    float precos[4] = {15.0, 18.0, 20.0, 16.0};

    int opcao;
    float total = 0;
    int continuar;

    do {
        printf("\n--- MENU MARMITEX ---\n");
        for (int i = 0; i < 4; i++) {
            printf("%d - %s (R$ %.2f)\n", i + 1, marmitas[i], precos[i]);
        }

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            total += precos[opcao - 1];
            printf("Item adicionado!\n");
        } else {
            printf("Opcao invalida!\n");
        }

        printf("Deseja pedir mais? (1 = sim / 0 = nao): ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("\nTotal do pedido: R$ %.2f\n", total);
    printf("Obrigado pelo pedido!\n");

    return 0;
}
