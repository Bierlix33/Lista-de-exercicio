#include <stdio.h>
#include <math.h>
int main() {
double raio, area;
  
printf("digite o raio do circulo: ");
scanf("%lf", &raio);

area= M_PI * pow(raio, 2);

printf("A area do circulo é: %.2lf\n", area);

return 0;
}
