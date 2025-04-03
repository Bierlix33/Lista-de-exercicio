#include <stdio.h>
#include <math.h>

int main() {
  double num1, num2, num3, valor;
  printf("digite um numero");
  scanf("%lf", &num1);
  printf("digite outro numero");
  scanf("%lf", &num2);
  printf("digite outro numero");
  scanf("%lf", &num3);
 valor= (num1 + num2) / num3 ;
  printf("o valor ficará: %.2lf\n", valor);
  return 0;
}
