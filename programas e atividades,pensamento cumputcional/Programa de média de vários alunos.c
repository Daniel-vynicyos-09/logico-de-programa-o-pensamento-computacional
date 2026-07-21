#include <stdio.h>

int main() {
    int quantidade, i;
    float nota, soma = 0, media;

    printf("Quantos alunos? ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        soma = soma + nota;
    }

    media = soma / quantidade;

    printf("Media da turma: %.2f\n", media);

    return 0;
}

A lógica:

aluno 1 → nota
aluno 2 → nota
aluno 3 → nota
...
somar todas as notas
dividir pela quantidade de alunos