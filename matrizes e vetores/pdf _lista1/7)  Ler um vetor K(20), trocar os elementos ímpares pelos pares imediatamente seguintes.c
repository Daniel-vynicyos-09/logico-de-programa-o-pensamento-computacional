#include <stdio.h>

int main() {

    int K[20];
    int i, aux;

    for(i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &K[i]);
    }

    printf("\nVetor original:\n");

    for(i = 0; i < 20; i++) {
        printf("%d ", K[i]);
    }

    for(i = 0; i < 20; i += 2) {
        aux = K[i];
        K[i] = K[i + 1];
        K[i + 1] = aux;
    }

    printf("\n\nVetor modificado:\n");

    for(i = 0; i < 20; i++) {
        printf("%d ", K[i]);
    }

    return 0;
}
