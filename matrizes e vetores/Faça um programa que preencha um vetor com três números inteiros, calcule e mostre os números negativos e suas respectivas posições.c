#include <stdio.h>

int main() {

    int vetor[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros negativos:\n");

    for(i = 0; i < 3; i++) {
        if(vetor[i] < 0) {
            printf("Num = %d ; Pos = %d\n", vetor[i], i);
        }
    }

    return 0;
}
