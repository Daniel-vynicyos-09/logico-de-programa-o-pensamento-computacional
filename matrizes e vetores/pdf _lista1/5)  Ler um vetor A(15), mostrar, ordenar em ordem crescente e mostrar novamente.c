#include <stdio.h>

int main() {

    int A[15];
    int i, j, aux;

    for(i = 0; i < 15; i++) {
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
    }

    printf("\nVetor original:\n");

    for(i = 0; i < 15; i++) {
        printf("%d ", A[i]);
    }

    // Ordenação crescente
    for(i = 0; i < 14; i++) {
        for(j = i + 1; j < 15; j++) {
            if(A[i] > A[j]) {
                aux = A[i];
                A[i] = A[j];
                A[j] = aux;
            }
        }
    }

    printf("\n\nVetor ordenado:\n");

    for(i = 0; i < 15; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
