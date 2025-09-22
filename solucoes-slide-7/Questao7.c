#include <stdio.h>

struct Carro {
    char modelo[50];
    int ano;
    float preco;
};

void preenche(struct Carro* c) {
    scanf("%s %d %f", c->modelo, &c->ano, &c->preco);
}

int main() {
    struct Carro c;
    preenche(&c);
    printf("Modelo: %s, Ano: %d, Preco: %.2f\n", c.modelo, c.ano, c.preco);
    return 0;
}
