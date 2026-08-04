#include <stdio.h>

int main() {

    int A[8][8];
    int i, j;
    int x;
    int encontrou;
    int linha, coluna;

    // Leitura da matriz
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            printf("Digite A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    do {

        printf("\nDigite um valor para procurar (-1 para sair): ");
        scanf("%d", &x);

        if(x == -1)
            break;

        encontrou = 0;

        for(i = 0; i < 8; i++) {
            for(j = 0; j < 8; j++) {

                if(A[i][j] == x) {
                    encontrou = 1;
                    linha = i;
                    coluna = j;
                }

            }
        }

        if(encontrou == 1)
            printf("%d foi encontrado na posicao [%d][%d]\n", x, linha, coluna);
        else
            printf("O valor %d nao esta na matriz A\n", x);

    } while(1);

    return 0;
}
