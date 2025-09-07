#include <stdio.h>

int eh_primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void todos_os_primos(int max) {
    for (int i = 2; i <= max; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int escolha, num, limite;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1 - Testar se um número é primo\n");
        printf("2 - Listar todos os primos até um limite\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("Digite o número: ");
            scanf("%d", &num);
            if (eh_primo(num))
                printf("%d é primo\n", num);
            else
                printf("%d não é primo\n", num);
        } 
        else if (escolha == 2) {
            printf("Digite o limite máximo: ");
            scanf("%d", &limite);
            printf("Primos até %d:\n", limite);
            todos_os_primos(limite);
        } 
        else if (escolha == 3) {
            printf("Saindo...\n");
            break;
        } 
        else {
            printf("Opção inválida!\n");
        }
    }

    return 0;
}
