#include <stdio.h>

int main() {

    int idade;
    int contador = 1;
    int soma_idades = 0;

    int homens = 0;
    int mulheres = 0;

    float peso;
    float media_idade;

    char sexo;

    while (contador <= 30) {

        printf("\n--- Usuario %d ---\n", contador);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o peso: ");
        scanf("%f", &peso);

        soma_idades = soma_idades + idade;

        if (sexo == 'M' || sexo == 'm') {
            homens++;
        } else if (sexo == 'F' || sexo == 'f') {
            mulheres++;
        }

        contador++;
    }

    media_idade = (float)soma_idades / 30;

    printf("\n===== RESULTADO =====\n");

    printf("Media de idade: %.2f\n", media_idade);
    printf("Total de homens: %d\n", homens);
    printf("Total de mulheres: %d\n", mulheres);

    return 0;
}
