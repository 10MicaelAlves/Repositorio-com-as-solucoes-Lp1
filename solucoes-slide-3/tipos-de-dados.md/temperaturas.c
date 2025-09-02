#include <stdio.h>

int main() {
    signed char temperaturas[50];
    int i, soma = 0;
    float media;
    int acima_media = 0;

    for (i = 0; i < 50; i++) {
        printf("Digite a temperatura %d: ", i + 1);
        scanf("%d", (int*)&temperaturas[i]);
        soma += temperaturas[i];
    }

    media = soma / 50.0;

    for (i = 0; i < 50; i++) {
        if (temperaturas[i] > media) {
            acima_media++;
        }
    }

    printf("\nMédia das temperaturas: %.2f\n", media);
    printf("Quantidade acima da média: %d\n", acima_media);

    return 0;
}

