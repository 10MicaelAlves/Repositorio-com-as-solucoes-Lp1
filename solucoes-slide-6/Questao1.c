#include <stdio.h>

int tamanho(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char origem[50] = "Ola, Mundo!";
    printf("%d\n", tamanho(origem));
    return 0;
}
