#include <stdio.h>

int main() {
    int opcao;

    printf("===== MENU =====\n");
    printf("1 - Mostrar mensagem 1\n");
    printf("2 - Mostrar mensagem 2\n");
    printf("3 - Mostrar mensagem 3\n");
    printf("0 - Sair\n");

    printf("\nDigite uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nVoce escolheu a opcao 1.\n");
            break;

        case 2:
            printf("\nVoce escolheu a opcao 2.\n");
            break;

        case 3:
            printf("\nVoce escolheu a opcao 3.\n");
            break;

        case 0:
            printf("\nSaindo do programa...\n");
            break;

        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}
