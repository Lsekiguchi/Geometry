#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado, area, ccircunscrita, cinscrita, diagonal1, diagonal2;
    const float r3 = 1.732;
    printf("Digite o valor do lado do hexagono regular: ");
    scanf("%f", &lado);
    printf("\n");
    ccircunscrita = lado;
    printf("O raio da circunferencia circunscrita ao hexagono e: %f\n", ccircunscrita);
    cinscrita = lado*r3/2;
    printf("O raio da circunferencia inscrita ao hexagono e: %f\n", cinscrita);
    diagonal1 = lado*r3;
    diagonal2 = 2*lado;
    printf("O tamanho da diagonal menor e: %f\n", diagonal1);
    printf("O tamanho da diagonal maior e: %f\n", diagonal2);
    area = 3*lado*lado*r3/2;
    printf("A area do hexagono e: %f\n\n", area);
    system("pause");
    return 0;
}
