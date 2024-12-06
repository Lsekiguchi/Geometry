#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, trianguloc0, trianguloi0, quadrado0, pentagono0, hexagono0, heptagono0, octogono0, eneagono0, decagono0;
    const float r2 = 1.4142;
    const float r3 = 1.732;
    const float pi = 3.1416;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
    trianguloi0 = raio*r3;
    trianguloc0 = raio*2*r3;
    quadrado0 = raio*r2;
    pentagono0 = raio*1.1756;
    hexagono0 = raio;

    printf("\n");
    printf("O lado do triangulo inscrito a circunferencia e: %f\n", trianguloi0);
    printf("O lado do triangulo circunscrito a circunferencia e: %f\n", trianguloc0);
    printf("O lado do quadrado inscrito a circunferencia e: %f\n", quadrado0);
    printf("O lado do pentagono inscrito a circunferencia e: %f\n", pentagono0);
    printf("O lado do hexagono inscrito a circunferencia e: %f\n", hexagono0);
    printf("O lado do heptagono inscrito a circunferencia e: \n");
    printf("O lado do octogono inscrito a circunferencia e: \n");
    printf("O lado do eneagono inscrito a circunferencia e: \n");
    printf("O lado do decagono inscrito a circunferencia e: \n\n");


    system("pause");
    return 0;
}
