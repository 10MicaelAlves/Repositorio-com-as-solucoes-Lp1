#include <stdio.h>
#include <math.h>

struct Ponto {
    int x, y;
};

struct Ponto preenchePonto() {
    struct Ponto p;
    scanf("%d %d", &p.x, &p.y);
    return p;
}

void preencheVetor(struct Ponto v[], int n) {
    for (int i = 0; i < n; i++) {
        v[i] = preenchePonto();
    }
}

double distancia(struct Ponto p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

struct Ponto maisDistante(struct Ponto v[], int n) {
    struct Ponto m = v[0];
    for (int i = 1; i < n; i++) {
        if (distancia(v[i]) > distancia(m)) {
            m = v[i];
        }
    }
    return m;
}

int main() {
    struct Ponto v[10];
    preencheVetor(v, 10);
    struct Ponto d = maisDistante(v, 10);
    printf("Mais distante = (%d,%d)\n", d.x, d.y);
    return 0;
}
