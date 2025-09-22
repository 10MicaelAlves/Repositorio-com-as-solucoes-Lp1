#include <stdio.h>

struct Ponto {
    int x, y, z;
};

int main() {
    struct Ponto v1 = {1, 0, 5};
    struct Ponto v2 = {3, 3, 3};
    struct Ponto v3 = {0, 10, 0};

    printf("%d %d %d\n", v1.y, v2.y, v3.y);

    v1.z += 10;
    v2.z += 10;
    v3.z += 10;

    printf("v2 = (%d,%d,%d)\n", v2.x, v2.y, v2.z);
    return 0;
}
