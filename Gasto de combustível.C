#include <stdio.h>

int main() {
    double tempo, velocidade, distancia, litros;

    printf("Digite o tempo da viagem em horas: ");
    scanf("%lf", &tempo);

    printf("Digite a velocidade média em km/h: ");
    scanf("%lf", &velocidade);

    distancia = tempo * velocidade;
    
    litros = distancia / 12;

    printf("Serão necessários %.3lf litros de combustível.\n", litros);

    return 0;
}
