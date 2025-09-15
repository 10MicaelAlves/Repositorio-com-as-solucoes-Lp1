#include <stdio.h>
#define L 3
#define C 3

void preenche(int arr[L][C], int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

float media(int arr[L][C], int l, int c) {
    int soma = 0;
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            soma += arr[i][j];
    return (float)soma / (l * c);
}

int main() {
    int arr[L][C];
    preenche(arr, L, C);
    printf("Média dos valores = %.2f\n", media(arr, L, C));
    return 0;
}
