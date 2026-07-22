#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);

    return 0;
}