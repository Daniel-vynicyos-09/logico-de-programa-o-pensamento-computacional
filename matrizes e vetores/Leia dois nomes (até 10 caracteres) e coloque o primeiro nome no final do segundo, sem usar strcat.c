#include <stdio.h>
#include <string.h>

int main() {

    char nome1[11];
    char nome2[11];
    char nome3[22];

    int i, j;

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    i = 0;

    while(nome2[i] != '\0') {
        nome3[i] = nome2[i];
        i++;
    }

    j = 0;

    while(nome1[j] != '\0') {
        nome3[i] = nome1[j];
        i++;
        j++;
    }

    nome3[i] = '\0';

    printf("\nResultado: %s\n", nome3);

    return 0;
}
