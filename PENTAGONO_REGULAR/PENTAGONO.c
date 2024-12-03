#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite o valor do lado do pentagono: ");
    const float sin36 = 0.5878;
    const float cos36 = 0.1564;
    float lado, area, ccircunscrita, cinscrita, diagonal;
    scanf("%f", &lado);
    printf("\n");
    ccircunscrita = lado/(2*sin36);
    printf("O raio da circunferencia circunscrita e: %f\n", ccircunscrita);
    cinscrita = lado*cos36/(2*sin36);
    printf("O raio da circunferencia inscrita e: %f\n", cinscrita);
    diagonal = lado*(1 - 2*sin36*sin36)/sin36;
    printf("O tamanho da diagonal e: %f\n", diagonal);
    area = 1.25*lado*lado*cos36/sin36;
    printf("A area do pentagono e: %f\n\n", area);
    system("pause");
    return 0;
}
