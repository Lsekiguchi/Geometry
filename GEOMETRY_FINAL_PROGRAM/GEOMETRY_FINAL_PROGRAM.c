#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\aEscolha uma figura geometrica:\nTriangulo retangulo: 1\nTriangulo equilatero: 2\nRetangulo: 3\nPentagono regular: 4\nHexagono regular: 5\nOctogono regular: 6\nCircunferencia: 7\n\nDigite aqui: ");
    unsigned short figura;
    scanf("%i", &figura);
    const float r2 = 1.4142;
    const float r3 = 1.732;
    const float pi = 3.1416;
    const float sin36 = 0.5878;
    const float cos36 = 0.1564;
    printf("\n");
    if (figura == 1) {
  printf("Digite o valor dos catetos de um triangulo retangulo: ");
  float cateto1, cateto2, hipotenusa, perimetro, cinscrita, ccircunscrita, cexinscrita1, cexinscrita2, cexinscrita3, altura, sp;
  scanf("%f %f", &cateto1, &cateto2);
  hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
  printf("\n");
  printf("A hipotenusa desse triangulo e: %f\n", hipotenusa);
  altura = cateto1*cateto2/hipotenusa;
  printf("A altura relativa a hipotenusa desse triangulo e: %f\n", altura);
  ccircunscrita = hipotenusa/2;
  printf("O raio da circunferencia circunscrita e: %f\n", ccircunscrita);
  perimetro = cateto1 + cateto2 + hipotenusa;
  cinscrita = perimetro/2 - hipotenusa;
  printf("O raio da circunferencia inscrita e: %f\n", cinscrita);
  sp = perimetro/2;
  cexinscrita1 = sqrt(sp*(sp - cateto2)*(sp - hipotenusa)/(sp - cateto1));
  cexinscrita2 = sqrt(sp*(sp - cateto1)*(sp - hipotenusa)/(sp - cateto2));
  cexinscrita3 = sqrt(sp*(sp - cateto1)*(sp - cateto2)/(sp - hipotenusa));
  printf("O raio da circunferencia ex-inscrita ao cateto de lado %f e: %f\n", cateto1, cexinscrita1);
  printf("O raio da circunferencia ex-inscrita ao cateto de lado %f e: %f\n", cateto2, cexinscrita2);
  printf("O raio da circunferencia ex-inscrita a hipotenusa e: %f\n\n", cexinscrita3);
    }
    if (figura == 2) {
 printf("Digite o valor do lado do triangulo equilatero: ");
 float lado3, altura, area3, cinscrita3, ccircunscrita3, cexinscrita3;
 scanf("%f", &lado3);
 altura = lado3*r3/2;
 printf("\n");
 printf("A altura do triangulo e: %f\n", altura);
 cinscrita3 = altura/3;
 printf("O raio da circunferencia inscrita a esse triangulo e: %f\n", cinscrita3);
 area3 = lado3*lado3*r3/4;
 ccircunscrita3 = 2*cinscrita3;
 printf("O raio da circunferencia circunscrita a esse triangulo e: %f\n", ccircunscrita3);
 cexinscrita3 = lado3*r3/2;
 printf("O raio da circunferencia ex-inscrita a esse triangulo e: %f\n", cexinscrita3);
 printf("A area do triangulo e: %f\n\n", area3);
    }
    if (figura == 3) {
 printf("Digite os valores dos lados do retangulo: ");
 float lado1, lado2, diagonal4, area4, cinscrita4, ccircunscrita4;
 scanf("%f %f", &lado1, &lado2);
 printf("\n");
 area4 = lado1*lado2;
 diagonal4 = sqrt(lado1*lado1 + lado2*lado2);
 ccircunscrita4 = diagonal4/2;
 if (lado1 == lado2) {
    cinscrita4 = lado1/2;
    printf("O raio da circunferencia inscrita e %f\n", cinscrita4);
    }
    else {
        printf("Nao ha circunferencia inscrita a um retangulo que nao e quadrado\n");
    }
 printf("O raio da circunferencia circunscrita e %f\n", ccircunscrita4);
 printf("A diagonal do retangulo e %f\n", diagonal4);
 printf("A area do retangulo e %f\n\n", area4);
    }
    if (figura == 4) {
 printf("Digite o valor do lado do pentagono: ");
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
    }
    if (figura == 5) {
 float lado6, area6, ccircunscrita6, cinscrita6, diagonal61, diagonal62;
 printf("Digite o valor do lado do hexagono regular: ");
 scanf("%f", &lado6);
 printf("\n");
 ccircunscrita6 = lado6;
 printf("O raio da circunferencia circunscrita ao hexagono e: %f\n", ccircunscrita6);
 cinscrita6 = lado6*r3/2;
 printf("O raio da circunferencia inscrita ao hexagono e: %f\n", cinscrita6);
 diagonal61 = lado6*r3;
 diagonal62 = 2*lado6;
 printf("O tamanho da diagonal menor e: %f\n", diagonal61);
 printf("O tamanho da diagonal maior e: %f\n", diagonal62);
 area6 = 3*lado6*lado6*r3/2;
 printf("A area do hexagono e: %f\n\n", area6);
    }
    if (figura == 6) {
 float lado8, area8, ccircunscrita8, cinscrita8, diagonal81, diagonal82, diagonal83;
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
    }
    if (figura == 7) {
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
    }

    system("pause");
    return 0;
}
