#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois inteiros (a e b): ");
    scanf("%d %d", &a, &b);

    printf("Antes: a = %d, b = %d\n", a, b);

    int *p;
    if (a > b) p = &a;
    else p = &b;

    *p -= 50;

    printf("Depois: a = %d, b = %d\n", a, b);
    return 0;
}
