#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado6, area6, ccircunscrita6, cinscrita6, diagonal61, diagonal62;
    const float r3 = 1.732;
    printf("Digite o valor do lado do hexagono regular: ");
    scanf("%f", &lado6);
    printf("\n");
    ccircunscrita6 = lado6;
    printf("O raio da circunferencia circunscrita ao hexagono e: %f\n", ccircunscrita6);
    cinscrita6 = lado6*r3/2;
    printf("O raio da circunferencia inscrita ao hexagono e: %f\n", cinscrita6);
    diagonal61 = lado6*r3;
    diagonal62 = 2*lado6;
    printf("O tamanho da diagonal menor e: %f\n", diagonal61);
    printf("O tamanho da diagonal maior e: %f\n", diagonal62);
    area6 = 3*lado6*lado6*r3/2;
    printf("A area do hexagono e: %f\n\n", area6);
    system("pause");
    return 0;
}
