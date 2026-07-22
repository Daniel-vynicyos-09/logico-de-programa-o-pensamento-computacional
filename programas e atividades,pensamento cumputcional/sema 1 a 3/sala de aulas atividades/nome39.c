#include <stdio.h>

int main() {
    char nome[40];
    float salario;
    int idade;

    printf("Digite o nome: ");
    fgets(nome, 40, stdin);

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("\n--- Dados da Pessoa ---\n");
    printf("Nome: %s", nome);
    printf("Salario: R$ %.2f\n", salario);
    printf("Idade: %d anos\n", idade);

    return 0;
}