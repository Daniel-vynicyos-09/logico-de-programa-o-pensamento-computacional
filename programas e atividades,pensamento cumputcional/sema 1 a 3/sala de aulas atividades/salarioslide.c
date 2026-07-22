#include <stdio.h>

int main(void) {
    int idade;
    float salario;
    char nome[40]; // Vetor que permite armazenar até 39 caracteres

    printf("Digite o seu nome: ");
    scanf("%s", nome); // nome é o endereço do primeiro caractere

    printf("Digite o seu salario: ");
    scanf("%f", &salario); // &salario é o endereço da variável

    printf("Digite a sua idade: ");
    scanf("%d", &idade); // &idade é o endereço da variável

    printf("\nSeu nome é %s, ganha R$ %.2f por mês e tem %d anos.\n",
           nome, salario, idade);

    return 0;
}