#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite o valor do lado do pentagono: ");
    const float sin36 = 0.5878;
    const float cos36 = 0.1564;
    float lado5, area5, ccircunscrita5, cinscrita5, diagonal5;
    scanf("%f", &lado5);
    printf("\n");
    ccircunscrita5 = lado5/(2*sin36);
    printf("O raio da circunferencia circunscrita e: %f\n", ccircunscrita5);
    cinscrita5 = lado5*cos36/(2*sin36);
    printf("O raio da circunferencia inscrita e: %f\n", cinscrita5);
    diagonal5 = lado5*(1 - 2*sin36*sin36)/sin36;
    printf("O tamanho da diagonal e: %f\n", diagonal5);
    area5 = 1.25*lado5*lado5*cos36/sin36;
    printf("A area do pentagono e: %f\n\n", area5);
    system("pause");
    return 0;
}
