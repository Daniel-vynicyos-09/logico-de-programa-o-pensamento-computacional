#include <stdio.h>

int main() {

    char vendedor1[30];
    char vendedor2[30];

    int vendas[2][3];
    int i, j;
    int total1 = 0;
    int total2 = 0;

    printf("Nome do primeiro vendedor: ");
    scanf("%s", vendedor1);

    printf("Nome do segundo vendedor: ");
    scanf("%s", vendedor2);

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("Vendas do vendedor %d produto %d: ", i + 1, j);
            scanf("%d", &vendas[i][j]);
        }
    }

    for(j = 0; j < 3; j++) {
        total1 += vendas[0][j];
        total2 += vendas[1][j];
    }

    printf("\nTotal de vendas:\n");
    printf("%s = %d\n", vendedor1, total1);
    printf("%s = %d\n", vendedor2, total2);

    for(j = 0; j < 3; j++) {

        if(j == 0)
            printf("\nNotebook: ");
        if(j == 1)
            printf("\nCelular: ");
        if(j == 2)
            printf("\nTablet: ");

        if(vendas[0][j] > vendas[1][j])
            printf("%s vendeu mais", vendedor1);
        else if(vendas[1][j] > vendas[0][j])
            printf("%s vendeu mais", vendedor2);
        else
            printf("Mesma quantidade");
    }

    return 0;
}
