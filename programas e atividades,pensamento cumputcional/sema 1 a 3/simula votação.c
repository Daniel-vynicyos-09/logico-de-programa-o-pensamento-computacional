#include <stdio.h>
#include <string.h>

int main() {

    char nome1[50], nome2[50], aux[50];
    int codigo1, codigo2, auxCodigo;

    int voto;
    int votos1 = 0, votos2 = 0;
    int branco = 0, nulo = 0;
    int total = 0;

    printf("Digite o nome do primeiro candidato: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite o codigo do primeiro candidato: ");
    scanf("%d", &codigo1);
    getchar();

    printf("Digite o nome do segundo candidato: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite o codigo do segundo candidato: ");
    scanf("%d", &codigo2);

    if (strcmp(nome1, nome2) > 0) {
        strcpy(aux, nome1);
        strcpy(nome1, nome2);
        strcpy(nome2, aux);

        auxCodigo = codigo1;
        codigo1 = codigo2;
        codigo2 = auxCodigo;
    }

    do {

        printf("\n-----------------------------\n");
        printf("Menu:\n");
        printf("Voto em %s: %d\n", nome1, codigo1);
        printf("Voto em %s: %d\n", nome2, codigo2);
        printf("Voto em Branco: 0\n");
        printf("Encerrar votacao: -1\n");
        printf("Digite sua opcao: ");
        scanf("%d", &voto);

        if (voto >= 0) {

            total++;

            if (voto == codigo1) {
                votos1++;
            }
             else if (voto == codigo2) {
                votos2++;
            }
            else if (voto == 0) {
                branco++;
            }
            else {
                nulo++;
            }

        }

    } while (voto >= 0);

    printf("\n========== RESULTADO ==========\n");
    printf("Total de votos: %d\n", total);
    printf("%s: %d votos\n", nome1, votos1);
    printf("%s: %d votos\n", nome2, votos2);
    printf("Votos em branco: %d\n", branco);
    printf("Votos nulos: %d\n", nulo);

    if (total > 0) {
        printf("Percentual de votos em branco: %.2f%%\n", (branco * 100.0) / total);
        printf("Percentual de votos nulos: %.2f%%\n", (nulo * 100.0) / total);
    }
    else {
        printf("Nenhum voto foi registrado.\n");
    }

    return 0;
}
