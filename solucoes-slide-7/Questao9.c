#include <stdio.h>

struct Posicao {
    int x, y;
};

struct Personagem {
    int id;
    struct Posicao pos;
    int pontos;
};

int main() {
    struct Personagem jogadores[10];
    for (int i = 0; i < 10; i++) {
        jogadores[i].id = i;
        jogadores[i].pos.x = 0;
        jogadores[i].pos.y = 0;
        jogadores[i].pontos = 0;
    }
    return 0;
}
#include <stdio.h>

struct Posicao {
    int x, y;
};

struct Personagem {
    int id;
    struct Posicao pos;
    int pontos;
};

int main() {
    struct Personagem jogadores[10];
    for (int i = 0; i < 10; i++) {
        jogadores[i].id = i;
        jogadores[i].pos.x = 0;
        jogadores[i].pos.y = 0;
        jogadores[i].pontos = 0;
    }
    return 0;
}
