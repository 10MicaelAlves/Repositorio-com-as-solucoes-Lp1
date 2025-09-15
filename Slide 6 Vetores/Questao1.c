#include <stdio.h>

void preenche(int *xs, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", xs + i);
    }
}

float media(int *xs, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) soma += *(xs + i);
    return (float)soma / n;
}

int main() {
    int vec[100], n;
    printf("Quantos números deseja inserir (max 100)? ");
    scanf("%d", &n);

    preenche(vec, n);
    printf("Média = %.2f\n", media(vec, n));
    return 0;
}
