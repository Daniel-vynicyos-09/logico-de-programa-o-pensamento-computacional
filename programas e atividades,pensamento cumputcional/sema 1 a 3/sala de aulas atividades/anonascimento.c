#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idade;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;

    printf("\nA idade da pessoa e: %d anos.\n", idade);

    return 0;
}