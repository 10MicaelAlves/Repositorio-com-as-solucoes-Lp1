#include <stdio.h>

struct Posicao {
    int x, y;
};

struct Personagem {
    int id;
    struct Posicao pos;
    int pontos;
};

struct Posicao lePosicao() {
    struct Posicao p;
    scanf("%d %d", &p.x, &p.y);
    return p;
}

struct Personagem lePersonagem(int id) {
    struct Personagem p;
    p.id = id;
    p.pos = lePosicao();
    p.pontos = 0;
    return p;
}

void desenhaMapa(struct Personagem v[], int n) {
    for (int y = 0; y < 10; y++) {
        printf("%d ", y);
        for (int x = 0; x < 10; x++) {
            int ocupado = -1;
            for (int i = 0; i < n; i++) {
                if (v[i].pos.x == x && v[i].pos.y == y) {
                    ocupado = v[i].id;
                    break;
                }
            }
            if (ocupado != -1)
                printf("%d ", ocupado);
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main() {
    struct Personagem jogadores[10];
    for (int i = 0; i < 10; i++) {
        jogadores[i] = lePersonagem(i);
    }
    desenhaMapa(jogadores, 10);
    return 0;
}
