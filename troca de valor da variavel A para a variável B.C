#include <stdio.h>

int main() {
    int A, B;

    // Recebe os valores de A e B do usuário
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Exibe os valores antes da troca
    printf("Antes da troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    // Troca os valores entre A e B
    int temp = A;
    A = B;
    B = temp;

    // Exibe os valores após a troca
    printf("Após a troca:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
