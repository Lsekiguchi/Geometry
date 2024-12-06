#include <stdio.h>
#include <stdlib.h>

int main() {
    float raio, trianguloc, trianguloi, quadrado, pentagono, hexagono, heptagono, octogono, eneagono, decagono;
    const float r2 = 1.4142;
    const float r3 = 1.732;
    const float pi = 3.1416;
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
    trianguloi = raio*r3;
    trianguloc = raio*2*r3;
    quadrado = raio*r2;
    pentagono = raio*1.1756;
    hexagono = raio;

    printf("\n");
    printf("O lado do triangulo inscrito a circunferencia e: %f\n", trianguloi);
    printf("O lado do triangulo circunscrito a circunferencia e: %f\n", trianguloc);
    printf("O lado do quadrado inscrito a circunferencia e: %f\n", quadrado);
    printf("O lado do pentagono inscrito a circunferencia e: %f\n", pentagono);
    printf("O lado do hexagono inscrito a circunferencia e: %f\n\n", hexagono);


    system("pause");
    return 0;
}
