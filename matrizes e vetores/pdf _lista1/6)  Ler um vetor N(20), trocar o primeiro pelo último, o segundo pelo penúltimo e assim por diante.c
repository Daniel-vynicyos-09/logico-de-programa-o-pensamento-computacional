#include <stdio.h>

int main() {

    int N[20];
    int i, aux;

    for(i = 0; i < 20; i++) {
        printf("Digite um numero: ");
        scanf("%d", &N[i]);
    }

    printf("\nVetor original:\n");

    for(i = 0; i < 20; i++) {
        printf("%d ", N[i]);
    }

    for(i = 0; i < 10; i++) {
        aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }

    printf("\n\nVetor modificado:\n");

    for(i = 0; i < 20; i++) {
        printf("%d ", N[i]);
    }

    return 0;
}
