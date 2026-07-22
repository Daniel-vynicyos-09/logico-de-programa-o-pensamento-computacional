#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int base;
    int altura;
    double area;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite a altura: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("A area e %f\n", area);

    return EXIT_SUCCESS;
}