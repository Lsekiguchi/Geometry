#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite os valores dos lados do retangulo: ");
    float lado1, lado2, diagonal4, area4, cinscrita4, ccircunscrita4;
    scanf("%f %f", &lado1, &lado2);
    printf("\n");
    area4 = lado1*lado2;
    diagonal4 = sqrt(lado1*lado1 + lado2*lado2);
    ccircunscrita4 = diagonal4/2;
    if (lado1 == lado2) {
        cinscrita4 = lado1/2;
        printf("O raio da circunferencia inscrita e %f\n", cinscrita4);
    }
    else {
        printf("Nao ha circunferencia inscrita a um retangulo que nao e quadrado\n");
    }
    printf("O raio da circunferencia circunscrita e %f\n", ccircunscrita4);
    printf("A diagonal do retangulo e %f\n", diagonal4);
    printf("A area do retangulo e %f\n\n", area4);
    system("pause");
    return 0;
}
