#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    int escolha;

    // Menu para escolher o tipo de cálculo
    printf("Escolha o tipo de cálculo:\n");
    printf("1 - Calcular a hipotenusa (dados os catetos)\n");
    printf("2 - Calcular um cateto (dados a hipotenusa e o outro cateto)\n");
    printf("Digite a opção: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        // Calcular a hipotenusa
        printf("Digite o valor do cateto a: ");
        scanf("%lf", &a);
        printf("Digite o valor do cateto b: ");
        scanf("%lf", &b);

        // Cálculo da hipotenusa
        c = sqrt(a * a + b * b);
        printf("A hipotenusa é: %.2lf\n", c);
    } else if (escolha == 2) {
        // Calcular um cateto
        printf("Digite o valor da hipotenusa: ");
        scanf("%lf", &c);
        printf("Digite o valor do cateto conhecido: ");
        scanf("%lf", &a);

        // Cálculo do cateto
        b = sqrt(c * c - a * a);
        printf("O valor do outro cateto é: %.2lf\n", b);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}
