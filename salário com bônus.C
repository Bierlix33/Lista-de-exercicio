#include <stdio.h>

int main() {
    char nome[50];
    double salarioFixo, totalVendas, totalReceber;

    printf("Digite o nome do vendedor: ");
    scanf("%49s", nome);

    printf("Digite o salário fixo do vendedor: ");
    scanf("%lf", &salarioFixo); // Corrigido o uso de &

    printf("Digite o total de vendas no mês: ");
    scanf("%lf", &totalVendas); // Corrigido o uso de &

    totalReceber = salarioFixo + (totalVendas * 0.15);

    printf("\nVendedor: %s\n", nome);
    printf("Total a receber no final do mês: R$ %.2lf\n", totalReceber);

    return 0;
}
