#include <stdio.h>

int main() {

    int v[5];
    int i;
    int soma = 0;

    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    printf("Os numeros digitados foram:\n");

    for(i = 0; i < 5; i++) {
        printf("%d", v[i]);

        if(i < 4)
            printf(" + ");
    }

    printf(" = %d\n", soma);

    return 0;
}
