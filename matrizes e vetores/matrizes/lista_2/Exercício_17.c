#include <stdio.h>

int main() {

    int matriz[15][15] = {0};

    int i = 0;
    int j = 15 / 2;

    int linha, coluna;
    int numero;

    for(numero = 1; numero <= 225; numero++) {

        matriz[i][j] = numero;

        linha = i - 1;
        coluna = j - 1;

        if(linha < 0)
            linha = 14;

        if(coluna < 0)
            coluna = 14;

        if(matriz[linha][coluna] != 0) {

            i++;

            if(i > 14)
                i = 0;

        } else {

            i = linha;
            j = coluna;

        }

    }

    printf("\nQuadrado Magico 15 x 15\n\n");

    for(i = 0; i < 15; i++) {

        for(j = 0; j < 15; j++) {
            printf("%4d", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
