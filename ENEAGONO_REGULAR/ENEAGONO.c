#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite o valor do lado do eneagono regular: ");
    float lado9, area9, ccircunscrita9, cinscrita9, diagonal91, diagonal92, diagonal93;
    const float cos40 = 0.766;
    const float tg20 = 0.364;
    scanf("%f", &lado9);
    printf("\n");
    ccircunscrita9 = lado9/sqrt(2 - 2*cos40);
    cinscrita9 = lado9/(2*tg20);
    diagonal91 = lado9*sqrt(2 + 2*cos40);

    printf("O raio da circunferencia circunscrita ao eneagono e: %f\n", ccircunscrita9);
    printf("O raio da circunferencia inscrita ao eneagono e: %f\n", cinscrita9);
    printf("A diagonal menor do eneagono e: %f\n", diagonal91);

    printf("\n");

    system("pause");
    return 0;
}
