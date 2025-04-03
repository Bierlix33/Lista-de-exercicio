#include <stdio.h>
int main(){
    float n1, n2, n3, media;
    printf("nota1");
    scanf("%f",&n1);
    printf("nota2:");
    scanf("%f", &n2);
    printf("nota3:");
    scanf("%f",&n3);
    media=(n1 + n2 + n3)/3;
    printf("a media é %.2f", media);
    return 0;
}
