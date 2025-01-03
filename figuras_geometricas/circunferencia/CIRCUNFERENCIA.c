#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, trianguloc0, trianguloi0, quadrado0, pentagono0, hexagono0, heptagono0, octogono0, eneagono0, decagono0, dodecagono0, icosagono0;
    const float r2 = 1.4142;
    const float r3 = 1.732;
    const float pi = 3.1416;
    const float coshep = 0.6235;
    const float cos40 = 0.766;
    const float cos36 = 0.809;
    const float cos18 = 0.9511;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
    trianguloi0 = raio*r3;
    trianguloc0 = raio*2*r3;
    quadrado0 = raio*r2;
    pentagono0 = raio*1.1756;
    hexagono0 = raio;
    heptagono0 = raio*sqrt(2 - 2*coshep);
    octogono0 = raio*sqrt(2 - r2);
    eneagono0 = raio*sqrt(2 - 2*cos40);
    decagono0 = raio*sqrt(2 - 2*cos36);
    dodecagono0 = raio*sqrt(2 - r3);
    icosagono0 = raio*sqrt(2 - 2*cos18);

    printf("\n");
    printf("O lado do triangulo inscrito a circunferencia e: %f\n", trianguloi0);
    printf("O lado do triangulo circunscrito a circunferencia e: %f\n", trianguloc0);
    printf("O lado do quadrado inscrito a circunferencia e: %f\n", quadrado0);
    printf("O lado do pentagono inscrito a circunferencia e: %f\n", pentagono0);
    printf("O lado do hexagono inscrito a circunferencia e: %f\n", hexagono0);
    printf("O lado do heptagono inscrito a circunferencia e: %f\n", heptagono0);
    printf("O lado do octogono inscrito a circunferencia e: %f\n", octogono0);
    printf("O lado do eneagono inscrito a circunferencia e: %f\n", eneagono0);
    printf("O lado do decagono inscrito a circunferencia e: %f\n", decagono0);
    printf("O lado do dodecagoono inscrito a circunferencia e: %f\n", dodecagono0);
    printf("O lado do icosagono inscrito a circunferencia e: %f\n\n", icosagono0);


    system("pause");
    return 0;
}
