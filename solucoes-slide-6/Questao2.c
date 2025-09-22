#include <stdio.h>

int tamanho(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void concatena(char* d, char* o1, char* o2) {
    int i, j;
    for (i = 0; o1[i] != '\0'; i++) {
        d[i] = o1[i];
    }
    for (j = 0; o2[j] != '\0'; j++) {
        d[i + j] = o2[j];
    }
    d[i + j] = '\0';
}

int main() {
    char origem1[50] = "Ola, ";
    char origem2[50] = "Mundo!";
    char destino[100];
    concatena(destino, origem1, origem2);
    printf("%s\n", destino);
    return 0;
}
