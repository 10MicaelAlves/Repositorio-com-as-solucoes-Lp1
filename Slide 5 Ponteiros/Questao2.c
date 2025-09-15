#include <stdio.h>

void compra(int *conta, int valor) {
    *conta -= valor;
}

int main() {
    int conta1, conta2;

    printf("Digite o saldo da conta1: ");
    if (scanf("%d", &conta1) != 1) return 0;
    printf("Digite o saldo da conta2: ");
    if (scanf("%d", &conta2) != 1) return 0;

    if (conta1 >= conta2) {
        compra(&conta1, 500);
        printf("Compra de 500 debitada da conta1.\n");
    } else {
        compra(&conta2, 500);
        printf("Compra de 500 debitada da conta2.\n");
    }

    printf("Conta1 = %d\nConta2 = %d\n", conta1, conta2);
    return 0;
}
