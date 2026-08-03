#include <stdio.h>

int main() {

    char nome[7][30];
    float media[7];
    int i, maior = 0;

    for(i = 0; i < 7; i++) {
        printf("Nome: ");
        scanf("%s", nome[i]);

        printf("Media: ");
        scanf("%f", &media[i]);

        if(media[i] > media[maior])
            maior = i;
    }

    printf("\nMaior media: %s\n", nome[maior]);

    for(i = 0; i < 7; i++) {
        if(media[i] < 7) {
            printf("%s precisa tirar %.1f no exame\n",
                   nome[i], 10 - media[i]);
        }
    }

    return 0;
}
