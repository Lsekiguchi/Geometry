#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado, area, ccircunscrita, cinscrita, diagonal1, diagonal2, diagonal3;
    const float r2 = 1.4142;
    printf("Digite o valor do lado do octogono regular: ");
    scanf("%f", &lado);
    printf("\n");
    ccircunscrita = lado*sqrt(1 + r2/2);
    printf("O raio da circunferencia circunscrita ao octogono e: %f\n", ccircunscrita);
    cinscrita = ccircunscrita*ccircunscrita*r2/(lado*2);
    printf("O raio da circunferencia inscrita ao octogono e: %f\n", cinscrita);
    diagonal1 = lado*sqrt(2 + r2);
    diagonal2 = lado*(r2 + 1);
    diagonal3 = 2*ccircunscrita;
    printf("O tamanho da diagonal menor e: %f\n", diagonal1);
    printf("O tamanho da segunda diagonal e: %f\n", diagonal2);
    printf("O tamanho da maior diagonal e: %f\n", diagonal3);
    area = 2*ccircunscrita*ccircunscrita*r2;
    printf("A area do octogono e: %f\n\n", area);
    system("pause");
    return 0;
}
