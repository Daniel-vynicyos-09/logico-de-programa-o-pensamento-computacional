#include <stdio.h>

int calculadora(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                printf("operação impossível\n");
                return 0;
            }
            return a / b;
        default:
            printf("operação impossível\n");
            return 0;
    }
}

int main() {
    int x = 10, y = 5;
    char operacao = '+';
    int res = calculadora(x, y, operacao);
    printf("Resultado: %d\n", res);
    return 0;
}
