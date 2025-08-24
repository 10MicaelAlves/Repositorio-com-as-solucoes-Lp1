#include <stdio.h>

int main() {
    int n1, n2, i;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("Números entre %d e %d:\n", n1, n2);
    for (i = n1 + 1; i < n2; i++) {
        printf("%d\n", i);
    }

    return 0;
}
