#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite os valores dos lados do retangulo: ");
    float lado1, lado2, diagonal, area, cinscrita, ccircunscrita;
    scanf("%f %f", &lado1, &lado2);
    printf("\n");
    area = lado1*lado2;
    diagonal = sqrt(lado1*lado1 + lado2*lado2);
    ccircunscrita = diagonal/2;
    if (lado1 == lado2) {
        cinscrita = lado1/2;
        printf("O raio da circunferencia inscrita e %f\n", cinscrita);
    }
    else {
        printf("Nao ha circunferencia inscrita a um retangulo que nao e quadrado\n");
    }
    printf("O raio da circunferencia circunscrita e %f\n", ccircunscrita);
    printf("A diagonal do retangulo e %f\n", diagonal);
    printf("A area do retangulo e %f\n\n", area);
    system("pause");
    return 0;
}
