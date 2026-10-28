#include <stdio.h>

int main() {
    int valor, saldo = 1000;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Erro: digite um valor maior que zero!\n");
    }
    else if (valor > saldo) {
        printf("Erro: saldo insuficiente!\n");
    }
    else if (valor % 5 != 0) {
        printf("Erro: valor deve ser multiplo de 5!\n");
    }
    else {
        n100 = valor / 100;
        valor %= 100;

        n50 = valor / 50;
        valor %= 50;

        n20 = valor / 20;
        valor %= 20;

        n10 = valor / 10;
        valor %= 10;

        n5 = valor / 5;
        valor %= 5;

        printf("\nNotas entregues:\n");
        printf("%d nota(s) de 100\n", n100);
        printf("%d nota(s) de 50\n", n50);
        printf("%d nota(s) de 20\n", n20);
        printf("%d nota(s) de 10\n", n10);
        printf("%d nota(s) de 5\n", n5);
    }

    return 0;
}
