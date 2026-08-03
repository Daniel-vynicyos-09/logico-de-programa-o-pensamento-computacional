#include <stdio.h>

int main() {

    int vet1[5], vet2[5];
    int i;

    printf("Primeiro vetor:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &vet1[i]);
    }

    printf("Segundo vetor:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &vet2[i]);
    }

    printf("\nPosicoes iguais:\n");

    for(i = 0; i < 5; i++) {
        if(vet1[i] == vet2[i]) {
            printf("Posicao %d possui o mesmo valor\n", i);
        }
    }

    return 0;
}
