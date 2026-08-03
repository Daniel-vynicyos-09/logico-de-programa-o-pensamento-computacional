#include <stdio.h>

int main() {

    float matriz[3][2];
    int i, j;
    int quantidade = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("Digite um numero: ");
            scanf("%f", &matriz[i][j]);

            if(matriz[i][j] == (int)matriz[i][j])
                quantidade++;
        }
    }

    printf("\nQuantidade = %d\n", quantidade);

    return 0;
}
