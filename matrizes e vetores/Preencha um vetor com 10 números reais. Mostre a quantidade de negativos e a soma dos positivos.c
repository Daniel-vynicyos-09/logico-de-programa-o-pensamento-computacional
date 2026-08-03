#include <stdio.h>

int main() {

    float vetor[10];
    int i;
    int negativos = 0;
    float soma = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &vetor[i]);

        if(vetor[i] < 0)
            negativos++;
        else
            soma = soma + vetor[i];
    }

    printf("\nQuantidade de negativos = %d\n", negativos);
    printf("Soma dos positivos = %.2f\n", soma);

    return 0;
}
