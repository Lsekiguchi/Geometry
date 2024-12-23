#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Digite o valor do lado do dodecagono regular: ");
    float lado12, area12, ccircunscrita12, cinscrita12, diagonal121, diagonal122, diagonal123, diagonal124, diagonal125;
    scanf("%f", &lado12);
    ccircunscrita12 = lado12*sqrt(2)/(sqrt(3) - 1);
    cinscrita12 = sqrt(4*ccircunscrita12*ccircunscrita12 - lado12*lado12)/2;
    diagonal121 = lado12*(sqrt(6) + sqrt(2))/2;
    diagonal122 = lado12*(sqrt(3) + 1);
    diagonal123 = ccircunscrita12*sqrt(3);
    diagonal124 = sqrt(4*ccircunscrita12*ccircunscrita12 - lado12*lado12);
    diagonal125 = 2*ccircunscrita12;
    area12 = 3*ccircunscrita12*ccircunscrita12;
    printf("\nO raio da circunferencia circunscrita e: %f\n", ccircunscrita12);
    printf("O raio da circunferencia inscrita e: %f\n", cinscrita12);
    printf("A menor diagonal mede: %f\n", diagonal121);
    printf("A quarta maior diagonal mede: %f\n", diagonal122);
    printf("A terceira maior diagonal mede: %f\n", diagonal123);
    printf("A segunda maior diagonal mede: %f\n", diagonal124);
    printf("A maior diagonal mede: %f\n", diagonal125);
    printf("A area do dodecagono e: %f\n\n", area12);

    system("pause");
    return 0;
}
