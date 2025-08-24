#include <stdio.h>

int main() {
    float velocidade_mph, velocidade_kph;
    printf("Digite a velocidade atual:\n");
    scanf("%f", &velocidade_mph);
    velocidade_kph = velocidade_mph * 1.6;

    if (velocidade_kph < 80) {
        printf("ACELERE\n");
    } else if (velocidade_kph > 100) {
        printf("DESACELERE\n");
    } else {
        printf("MANTENHA\n");
    }

    return 0;
}
