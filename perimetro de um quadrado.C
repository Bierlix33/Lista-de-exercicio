#include <stdio.h>
#include <math.h>
int main() {
    
 double lado, perimetro;
 
printf("digite a lado do quadrado: ");
scanf("%lf",&lado);

perimetro = (4 * lado);

printf("o perimetro do quadrado é: %.2lf\n", perimetro);

return 0;
}
