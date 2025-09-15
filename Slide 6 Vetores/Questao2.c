#include <stdio.h>

int main() {
    int vet[5], I;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("Vetor original: ");
    for (int i = 0; i < 5; i++) printf("%d ", vet[i]);
    printf("\n");

    printf("Digite o índice para remover (0 a 4): ");
    scanf("%d", &I);

    for (int i = I; i < 4; i++) vet[i] = vet[i+1];
    vet[4] = 0;

    printf("Vetor após remoção: ");
    for (int i = 0; i < 5; i++) printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
