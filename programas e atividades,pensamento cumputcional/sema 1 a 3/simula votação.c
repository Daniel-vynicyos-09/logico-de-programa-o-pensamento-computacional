#include <stdio.h>
#include <string.h>

int main() {
    // Cadastro dos candidatos
    char nome1[50];
    char nome2[50];

    int codigo1;
    int codigo2;

    printf("Digite o nome do primeiro candidato: ");
    fgets(nome1, 50, stdin);

    // Remove o ENTER (\n) que o fgets guarda
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite o número de %s: ", nome1);
    scanf("%d", &codigo1);

    // Limpa o ENTER que ficou no teclado
    getchar();

    printf("\nDigite o nome do segundo candidato: ");
    fgets(nome2, 50, stdin);

    // Remove o ENTER
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite o número de %s: ", nome2);
    scanf("%d", &codigo2);


    // Contadores de votos
    int votos1 = 0;
    int votos2 = 0;
    int brancos = 0;
    int nulos = 0;

    int voto;


    // Votação
    while (1) {

        printf("\n------------------------------\n");
        printf("MENU:\n");

        printf("Voto em %s: %d\n", nome1, codigo1);
        printf("Voto em %s: %d\n", nome2, codigo2);

        printf("Voto em Branco: 0\n");
        printf("Encerrar votação: -1 ou qualquer valor negativo\n");

        printf("\nDigite sua opção: ");
        scanf("%d", &voto);


        // Encerra a votação
        if (voto < 0) {
            break;
        }

        // Voto em branco
        else if (voto == 0) {
            brancos++;
        }

        // Voto no candidato 1
        else if (voto == codigo1) {
            votos1++;
        }

        // Voto no candidato 2
        else if (voto == codigo2) {
            votos2++;
        }

        // Qualquer outro número é voto nulo
        else {
            nulos++;
        }
    }


    // Total de votos
    int total = votos1 + votos2 + brancos + nulos;


    // Percentuais
    float perc_brancos;
    float perc_nulos;

    if (total > 0) {
        perc_brancos = ((float) brancos / total) * 100;
        perc_nulos = ((float) nulos / total) * 100;
    }
    else {
        perc_brancos = 0;
        perc_nulos = 0;
    }


    // Resultado
    printf("\n========== RESULTADO ==========\n");

    printf("Total geral de votos: %d\n", total);

    printf("Votos para %s: %d\n", nome1, votos1);
    printf("Votos para %s: %d\n", nome2, votos2);

    printf("Votos em branco: %d\n", brancos);
    printf("Votos nulos: %d\n", nulos);

    printf("Percentual de votos em branco: %.2f%%\n", perc_brancos);
    printf("Percentual de votos nulos: %.2f%%\n", perc_nulos);


    return 0;
}