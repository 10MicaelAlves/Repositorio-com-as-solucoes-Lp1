#include <stdio.h>
#include <string.h>

int main() {
    int i, v, e, d, pontos, max = -1, min = 1000000;
    char nome[50], nomeMax[50], nomeMin[50];

    printf("Digite os dados dos 20 times (nome vitorias empates derrotas):\n");

    for (i = 0; i < 20; i++) {
        printf("Time %d: ", i + 1);
        scanf("%s %d %d %d", nome, &v, &e, &d);
        pontos = v * 3 + e;
        if (pontos > max) {
            max = pontos;
            strcpy(nomeMax, nome);
        }
        if (pontos < min) {
            min = pontos;
            strcpy(nomeMin, nome);
        }
    }

    printf("Time com mais pontos: %s (%d pontos)\n", nomeMax, max);
    printf("Time com menos pontos: %s (%d pontos)\n", nomeMin, min);

    return 0;
}
