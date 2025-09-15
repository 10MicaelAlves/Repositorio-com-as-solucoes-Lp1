#include <stdio.h>

void troca(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    troca(&x, &y);

    printf("Depois da troca: x = %d, y = %d\n", x, y);
    return 0;
}
