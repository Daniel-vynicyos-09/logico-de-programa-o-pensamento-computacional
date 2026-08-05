#include <stdio.h>

void somar() {
    float a, b;
    printf("\n--- Modo Soma ---\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);
}

void subtrair() {
    float a, b;
    printf("\n--- Modo Subtracao ---\n");
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a - b);
}

void menuUsuario() {
    int opcao;
    do {
        printf("\n=== MENU USUARIO ===\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            somar();
        } else if (opcao == 2) {
            subtrair();
        }
    } while (opcao != 0);
}

void menuAdmin() {
    int opcao;
    do {
        printf("\n=== MENU ADMINISTRADOR ===\n");
        printf("1. Ver logs do sistema (Simulado)\n");
        printf("2. Limpar historico (Simulado)\n");
        printf("0. Voltar ao menu principal\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n[ADM] Nenhuma operacao suspeita registrada.\n");
        } else if (opcao == 2) {
            printf("\n[ADM] Historico limpo com sucesso!\n");
        }
    } while (opcao != 0);
}

int main() {
    int modo;
    do {
        printf("\n=== ESCOLHA O PERFIL ===\n");
        printf("1. Entrar como Usuario\n");
        printf("2. Entrar como Administrador\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &modo);

        if (modo == 1) {
            menuUsuario();
        } else if (modo == 2) {
            menuAdmin();
        }
    } while (modo != 0);

    printf("\nSistema encerrado.\n");
    return 0;
}
    