#include <stdio.h>

int main() {
    float custoEspetaculo, precoConvite;
    int quantidadeConvites;

    printf("Digite o custo do espetaculo: R$ ");
    scanf("%f", &custoEspetaculo);

    printf("Digite o preco do convite: R$ ");
    scanf("%f", &precoConvite);

    quantidadeConvites = custoEspetaculo / precoConvite;

    printf("\nQuantidade de convites a serem vendidos: %d\n", quantidadeConvites);

    return 0;
}