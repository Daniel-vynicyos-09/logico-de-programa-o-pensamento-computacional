#include <stdio.h>
#include <string.h>

int main() {
    char nome1[50], nome2[50];
    int codigo1, codigo2;
    int votos1 = 0, votos2 = 0, brancos = 0, nulos = 0;
    int voto;

    // Cadastro dos candidatos
    printf("Digite o nome do primeiro candidato: ");
    scanf(" %49[^\n]", nome1);

    printf("Digite o numero de %s: ", nome1);
    scanf("%d", &codigo1);

    printf("Digite o nome do segundo candidato: ");
    scanf(" %49[^\n]", nome2);

    printf("Digite o numero de %s: ", nome2);
    scanf("%d", &codigo2);

    // Votação
    do {
        printf("\n-----------------------------\n");

        // Menu em ordem alfabética
        if (strcmp(nome1, nome2) < 0) {
            printf("Voto em %s: %d\n", nome1, codigo1);
            printf("Voto em %s: %d\n", nome2, codigo2);
        } else {
            printf("Voto em %s: %d\n", nome2, codigo2);
            printf("Voto em %s: %d\n", nome1, codigo1);
        }

        printf("Voto em Branco: 0\n");
        printf("Encerrar votacao: -1 (ou qualquer valor negativo)\n");
        printf("Digite sua opcao: ");
        scanf("%d", &voto);

        if (voto < 0)
            break;
        else if (voto == 0)
            brancos++;
        else if (voto == codigo1)
            votos1++;
        else if (voto == codigo2)
            votos2++;
        else
            nulos++;

    } while (1);

    int total = votos1 + votos2 + brancos + nulos;

    float percBrancos = 0;
    float percNulos = 0;

    if (total > 0) {
        percBrancos = (float) brancos * 100 / total;
        percNulos = (float) nulos * 100 / total;
    }

    printf("\n========== RESULTADO ==========\n");
    printf("Total geral de votos: %d\n", total);

    // Resultado em ordem alfabética
    if (strcmp(nome1, nome2) < 0) {
        printf("%s: %d votos\n", nome1, votos1);
        printf("%s: %d votos\n", nome2, votos2);
    } else {
        printf("%s: %d votos\n", nome2, votos2);
        printf("%s: %d votos\n", nome1, votos1);
    }

    printf("Votos em branco: %d\n", brancos);
    printf("Votos nulos: %d\n", nulos);
    printf("Percentual de votos em branco: %.2f%%\n", percBrancos);
    printf("Percentual de votos nulos: %.2f%%\n", percNulos);

    return 0;
}
