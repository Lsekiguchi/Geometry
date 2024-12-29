#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    printf("Digite o valor do lado do decagono regular: ");
    float lado10, area10, ccircunscrita10, cinscrita10, diagonal101, diagonal102, diagonal103, diagonal104;
    const float sen18 = 0.309;
    const float cos18 = 0.951;
    scanf("%f", &lado10);
    printf("\n");
    ccircunscrita10 = lado10/(2*sen18);
    cinscrita10 = sqrt(4*ccircunscrita10*ccircunscrita10 - lado10*lado10)/2;
    diagonal101 = 2*lado10*cos18;
    diagonal102 = diagonal101*cos18 + sqrt(lado10*lado10 - diagonal101*diagonal101*sen18*sen18);
    diagonal103 = 2*ccircunscrita10*(2*cos18*cos18 - 1);
    diagonal104 = 2*ccircunscrita10;
    area10 = 5*lado10*cinscrita10;

    printf("O raio da circunferencia circunscrita ao decagono e: %f\n", ccircunscrita10);
    printf("O raio da circunferencia inscrita ao decagono e: %f\n", cinscrita10);
    printf("A menor diagonal do decagono mede: %f\n", diagonal101);
    printf("A segunda menor diagonal do decagono mede: %f\n", diagonal102);
    printf("A terceira menor diagonal do decagono mede: %f\n", diagonal103);
    printf("A maior diagonal do decagono mede: %f\n", diagonal104);
    printf("A area do decagono e: %f\n\n", area10);

    printf("\n");
    system("pause");
    return 0;
}
