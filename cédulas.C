#include <stdio.h>

int main() {
    int valor, restante;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    restante = valor;

    notas100 = restante / 100;
    restante %= 100;

    notas50 = restante / 50;
    restante %= 50;

    notas20 = restante / 20;
    restante %= 20;

    notas10 = restante / 10;
    restante %= 10;

    notas5 = restante / 5;
    restante %= 5;

    notas2 = restante / 2;
    restante %= 2;

    notas1 = restante;

    printf("\n%d pode ser decomposto em:\n", valor);
    printf("%d nota(s) de R$ 100\n", notas100);
    printf("%d nota(s) de R$ 50\n", notas50);
    printf("%d nota(s) de R$ 20\n", notas20);
    printf("%d nota(s) de R$ 10\n", notas10);
    printf("%d nota(s) de R$ 5\n", notas5);
    printf("%d nota(s) de R$ 2\n", notas2);
    printf("%d nota(s) de R$ 1\n", notas1);

    return 0;
