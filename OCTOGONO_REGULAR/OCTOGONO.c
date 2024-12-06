#include <stdio.h>
#include <stdlib.h>

int main() {
    float lado8, area8, ccircunscrita8, cinscrita8, diagonal81, diagonal82, diagonal83;
    const float r2 = 1.4142;
    printf("Digite o valor do lado do octogono regular: ");
    scanf("%f", &lado8);
    printf("\n");
    ccircunscrita8 = lado8*sqrt(1 + r2/2);
    printf("O raio da circunferencia circunscrita ao octogono e: %f\n", ccircunscrita8);
    cinscrita8 = ccircunscrita8*ccircunscrita8*r2/(lado8*2);
    printf("O raio da circunferencia inscrita ao octogono e: %f\n", cinscrita8);
    diagonal81 = lado8*sqrt(2 + r2);
    diagonal82 = lado8*(r2 + 1);
    diagonal83 = 2*ccircunscrita8;
    printf("O tamanho da diagonal menor e: %f\n", diagonal81);
    printf("O tamanho da segunda diagonal e: %f\n", diagonal82);
    printf("O tamanho da maior diagonal e: %f\n", diagonal83);
    area8 = 2*ccircunscrita8*ccircunscrita8*r2;
    printf("A area do octogono e: %f\n\n", area8);
    system("pause");
    return 0;
}
