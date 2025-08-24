#include <stdio.h>

int main() {
    int N, i, soma = 0;
    printf("Digite um número N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        soma += i * i;
    }

    printf("O somatório dos quadrados de 1 até %d é: %d\n", N, soma);

    return 0;
}
