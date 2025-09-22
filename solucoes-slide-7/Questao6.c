#include <stdio.h>

struct Atleta {
    char nome[50];
    int idade;
    float altura;
    float peso;
};

void exibir(struct Atleta a) {
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Altura: %.2f\n", a.altura);
    printf("Peso: %.2f\n\n", a.peso);
}

int main() {
    struct Atleta a1 = {"Joao", 25, 1.80, 75.5};
    struct Atleta a2 = {"Carlos", 30, 1.85, 82.0};
    struct Atleta a3 = {"Pedro", 22, 1.77, 70.3};

    exibir(a1);
    exibir(a2);
    exibir(a3);
    return 0;
}
