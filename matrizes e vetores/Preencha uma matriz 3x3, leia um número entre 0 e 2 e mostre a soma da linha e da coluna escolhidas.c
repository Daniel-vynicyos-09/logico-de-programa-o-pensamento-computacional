#include <stdio.h>

int main() {

    int matriz[3][3];
    int i, j;
    int n;
    int somaLinha = 0;
    int somaColuna = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite um numero entre 0 e 2: ");
    scanf("%d", &n);

    for(i = 0; i < 3; i++) {
        somaLinha += matriz[n][i];
        somaColuna += matriz[i][n];
    }

    printf("Soma linha %d = %d\n", n, somaLinha);
    printf("Soma coluna %d = %d\n", n, somaColuna);

    return 0;
}
