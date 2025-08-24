#include <stdio.h>

int main() {
    int n, soma = 0;
    printf("Digite números para somar (0 encerra):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &n);
        if (n == 0) break;
        soma += n;
    }

    printf("Soma total = %d\n", soma);

    return 0;
}
