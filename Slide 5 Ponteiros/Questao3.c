#include <stdio.h>

void compra(int *conta, int valor) {
    *conta -= valor;
}

int main() {
    int c1, c2;
    printf("Digite o saldo da conta1: ");
    scanf("%d", &c1);
    printf("Digite o saldo da conta2: ");
    scanf("%d", &c2);

    int compras[] = {100, 50, 80, 30, 20};
    int n = sizeof(compras)/sizeof(compras[0]);

    for (int i = 0; i < n; i++) {
        if (c1 >= c2) {
            compra(&c1, compras[i]);
            printf("Compra de %d debitada da conta1.\n", compras[i]);
        } else {
            compra(&c2, compras[i]);
            printf("Compra de %d debitada da conta2.\n", compras[i]);
        }
        printf("Saldo atual -> Conta1 = %d | Conta2 = %d\n", c1, c2);
    }
    return 0;
}
