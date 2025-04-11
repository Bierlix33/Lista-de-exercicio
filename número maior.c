#include <stdio.h>

int main() {
int valor, num1, num2;

printf("digite um número \n");
scanf("%d", &num1);

printf("digite outro numero \n");
scanf("%d", &num2);
if(num1 > num2){
printf("o numero maior e %d", num1);
}
else if(num2 < num1){
printf("o numero maior e %d", num2);
}

    return 0;
}
