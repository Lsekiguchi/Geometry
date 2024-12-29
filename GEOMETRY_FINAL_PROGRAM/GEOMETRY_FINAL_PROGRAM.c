#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\aEscolha uma figura geom�trica:\n\nTri�ngulo ret�ngulo: 1\nTri�ngulo equil�tero: 2\nRet�ngulo: 3\nPent�gono regular: 4\n");
    printf("Hex�gono regular: 5\nOct�gono regular: 6\nEne�gono regular: 7\nDec�gono regular: 8\nDodec�gono regular: 9\nCircunfer�ncia: 10\n\nDigite aqui: ");
    unsigned short figura;
    scanf("%i", &figura);
    const float r2 = 1.4142;
    const float r3 = 1.732;
    const float pi = 3.1416;
    const float sen18 = 0.309;
    const float cos18 = 0.951;
    const float sin36 = 0.5878;
    const float cos36 = 0.1564;
    printf("\n");
    if (figura == 1) {
  printf("Digite o valor dos catetos de um tri�ngulo ret�ngulo: ");
  float cateto1, cateto2, hipotenusa, perimetro, cinscrita, ccircunscrita, cexinscrita1, cexinscrita2, cexinscrita3, altura, sp;
  scanf("%f %f", &cateto1, &cateto2);
  hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
  printf("\n");
  printf("A hipotenusa desse tri�ngulo �: %f\n", hipotenusa);
  altura = cateto1*cateto2/hipotenusa;
  printf("A altura relativa a hipotenusa desse tri�ngulo �: %f\n", altura);
  ccircunscrita = hipotenusa/2;
  printf("O raio da circunfer�ncia circunscrita �: %f\n", ccircunscrita);
  perimetro = cateto1 + cateto2 + hipotenusa;
  cinscrita = perimetro/2 - hipotenusa;
  printf("O raio da circunfer�ncia inscrita �: %f\n", cinscrita);
  sp = perimetro/2;
  cexinscrita1 = sqrt(sp*(sp - cateto2)*(sp - hipotenusa)/(sp - cateto1));
  cexinscrita2 = sqrt(sp*(sp - cateto1)*(sp - hipotenusa)/(sp - cateto2));
  cexinscrita3 = sqrt(sp*(sp - cateto1)*(sp - cateto2)/(sp - hipotenusa));
  printf("O raio da circunfer�ncia ex-inscrita ao cateto de lado %f �: %f\n", cateto1, cexinscrita1);
  printf("O raio da circunfer�ncia ex-inscrita ao cateto de lado %f �: %f\n", cateto2, cexinscrita2);
  printf("O raio da circunfer�ncia ex-inscrita � hipotenusa �: %f\n\n", cexinscrita3);
    }
    if (figura == 2) {
 printf("Digite o valor do lado do tri�ngulo equil�tero: ");
 float lado3, altura, area3, cinscrita3, ccircunscrita3, cexinscrita3;
 scanf("%f", &lado3);
 altura = lado3*r3/2;
 printf("\n");
 printf("A altura do tri�ngulo �: %f\n", altura);
 cinscrita3 = altura/3;
 printf("O raio da circunfer�ncia inscrita a esse tri�ngulo �: %f\n", cinscrita3);
 area3 = lado3*lado3*r3/4;
 ccircunscrita3 = 2*cinscrita3;
 printf("O raio da circunfer�ncia circunscrita a esse tri�ngulo �: %f\n", ccircunscrita3);
 cexinscrita3 = lado3*r3/2;
 printf("O raio da circunfer�ncia ex-inscrita a esse tri�ngulo �: %f\n", cexinscrita3);
 printf("A �rea do tri�ngulo �: %f\n\n", area3);
    }
    if (figura == 3) {
 printf("Digite os valores dos lados do ret�ngulo: ");
 float lado1, lado2, diagonal4, area4, cinscrita4, ccircunscrita4;
 scanf("%f %f", &lado1, &lado2);
 printf("\n");
 area4 = lado1*lado2;
 diagonal4 = sqrt(lado1*lado1 + lado2*lado2);
 ccircunscrita4 = diagonal4/2;
 if (lado1 == lado2) {
    cinscrita4 = lado1/2;
    printf("O raio da circunfer�ncia inscrita �: %f\n", cinscrita4);
    }
    else {
        printf("N�o h� circunfer�ncia inscrita a um ret�ngulo que n�o � quadrado\n");
    }
 printf("O raio da circunfer�ncia circunscrita �: %f\n", ccircunscrita4);
 printf("A diagonal do ret�ngulo �: %f\n", diagonal4);
 printf("A �rea do ret�ngulo �: %f\n\n", area4);
    }
    if (figura == 4) {
 printf("Digite o valor do lado do pent�gono: ");
 float lado5, area5, ccircunscrita5, cinscrita5, diagonal5;
 scanf("%f", &lado5);
 printf("\n");
 ccircunscrita5 = lado5/(2*sin36);
 printf("O raio da circunfer�ncia circunscrita �: %f\n", ccircunscrita5);
 cinscrita5 = lado5*cos36/(2*sin36);
 printf("O raio da circunfer�ncia inscrita �: %f\n", cinscrita5);
 diagonal5 = lado5*(1 - 2*sin36*sin36)/sin36;
 printf("O tamanho da diagonal �: %f\n", diagonal5);
 area5 = 1.25*lado5*lado5*cos36/sin36;
 printf("A �rea do pent�gono �: %f\n\n", area5);
    }
    if (figura == 5) {
 float lado6, area6, ccircunscrita6, cinscrita6, diagonal61, diagonal62;
 printf("Digite o valor do lado do hex�gono regular: ");
 scanf("%f", &lado6);
 printf("\n");
 ccircunscrita6 = lado6;
 printf("O raio da circunfer�ncia circunscrita ao hex�gono �: %f\n", ccircunscrita6);
 cinscrita6 = lado6*r3/2;
 printf("O raio da circunfer�ncia inscrita ao hex�gono �: %f\n", cinscrita6);
 diagonal61 = lado6*r3;
 diagonal62 = 2*lado6;
 printf("O tamanho da diagonal menor �: %f\n", diagonal61);
 printf("O tamanho da diagonal maior �: %f\n", diagonal62);
 area6 = 3*lado6*lado6*r3/2;
 printf("A �rea do hex�gono �: %f\n\n", area6);
    }
    if (figura == 6) {
 float lado8, area8, ccircunscrita8, cinscrita8, diagonal81, diagonal82, diagonal83;
 printf("Digite o valor do lado do oct�gono regular: ");
 scanf("%f", &lado8);
 printf("\n");
 ccircunscrita8 = lado8*sqrt(1 + r2/2);
 printf("O raio da circunfer�ncia circunscrita ao octog�no �: %f\n", ccircunscrita8);
 cinscrita8 = ccircunscrita8*ccircunscrita8*r2/(lado8*2);
 printf("O raio da circunfer�ncia inscrita ao oct�gono �: %f\n", cinscrita8);
 diagonal81 = lado8*sqrt(2 + r2);
 diagonal82 = lado8*(r2 + 1);
 diagonal83 = 2*ccircunscrita8;
 printf("O tamanho da diagonal menor �: %f\n", diagonal81);
 printf("O tamanho da segunda diagonal �: %f\n", diagonal82);
 printf("O tamanho da maior diagonal �: %f\n", diagonal83);
 area8 = 2*ccircunscrita8*ccircunscrita8*r2;
 printf("A �rea do oct�gono �: %f\n\n", area8);
    }
    if (figura == 7) {
    printf("Digite o valor do lado do ene�gono regular: ");
    float lado9, area9, ccircunscrita9, cinscrita9, diagonal91, diagonal92, diagonal93;
    const float sin40 = 0.6428;
    const float cos40 = 0.766;
    const float tg20 = 0.364;
    scanf("%f", &lado9);
    printf("\n");
    ccircunscrita9 = lado9/sqrt(2 - 2*cos40);
    cinscrita9 = lado9/(2*tg20);
    diagonal91 = lado9*sqrt(2 + 2*cos40);
    diagonal92 = lado9*(1 + 2*cos40);
    diagonal93 = (lado9 + sqrt(4*diagonal92*diagonal92 - 3*lado9*lado9))/2;
    area9 = 4.5*ccircunscrita9*ccircunscrita9*sin40;
    printf("O raio da circunfer�ncia circunscrita ao ene�gono �: %f\n", ccircunscrita9);
    printf("O raio da circunfer�ncia inscrita ao ene�gono �: %f\n", cinscrita9);
    printf("O tamanho da menor diagonal do ene�gono �: %f\n", diagonal91);
    printf("O tamanho da segunda diagonal do ene�gono �: %f\n", diagonal92);
    printf("O tamanho da maior diagonal do ene�gono �: %f\n", diagonal93);
    printf("A �rea do ene�gono �: %f\n\n", area9);
    }
    if (figura == 8) {
        printf("Digite o valor do lado do dec�gono regular: ");
    float lado10, area10, ccircunscrita10, cinscrita10, diagonal101, diagonal102, diagonal103, diagonal104;
    scanf("%f", &lado10);
    printf("\n");
    ccircunscrita10 = lado10/(2*sen18);
    cinscrita10 = sqrt(4*ccircunscrita10*ccircunscrita10 - lado10*lado10)/2;
    diagonal101 = 2*lado10*cos18;
    diagonal102 = diagonal101*cos18 + sqrt(lado10*lado10 - diagonal101*diagonal101*sen18*sen18);
    diagonal103 = 2*ccircunscrita10*(2*cos18*cos18 - 1);
    diagonal104 = 2*ccircunscrita10;
    area10 = 5*lado10*cinscrita10;
    printf("O raio da circunfer�ncia circunscrita ao dec�gono �: %f\n", ccircunscrita10);
    printf("O raio da circunfer�ncia inscrita ao dec�gono �: %f\n", cinscrita10);
    printf("A menor diagonal do dec�gono mede: %f\n", diagonal101);
    printf("A segunda menor diagonal do dec�gono mede: %f\n", diagonal102);
    printf("A terceira menor diagonal do dec�gono mede: %f\n", diagonal103);
    printf("A maior diagonal do dec�gono mede: %f\n", diagonal104);
    printf("A �rea do dec�gono �: %f\n\n", area10);
    }
    if (figura == 9) {
    printf("Digite o valor do lado do dodec�gono regular: ");
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
    printf("\nO raio da circunfer�ncia circunscrita �: %f\n", ccircunscrita12);
    printf("O raio da circunfer�ncia inscrita �: %f\n", cinscrita12);
    printf("A menor diagonal mede: %f\n", diagonal121);
    printf("A quarta maior diagonal mede: %f\n", diagonal122);
    printf("A terceira maior diagonal mede: %f\n", diagonal123);
    printf("A segunda maior diagonal mede: %f\n", diagonal124);
    printf("A maior diagonal mede: %f\n", diagonal125);
    printf("A �rea do dodec�gono �: %f\n\n", area12);
    }
    if (figura == 10) {
    float raio, trianguloc0, trianguloi0, quadrado0, pentagono0, hexagono0, heptagono0, octogono0, eneagono0, decagono0, dodecagono0, icosagono0;
    const float r2 = 1.4142;
    const float r3 = 1.732;
    const float pi = 3.1416;
    const float coshep = 0.6235;
    const float cos40 = 0.766;
    const float cos36 = 0.809;
    const float cos18 = 0.9511;
    printf("Digite o raio da circunfer�ncia: ");
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
    printf("O lado do tri�ngulo inscrito a circunfer�ncia �: %f\n", trianguloi0);
    printf("O lado do tri�ngulo circunscrito a circunfer�ncia �: %f\n", trianguloc0);
    printf("O lado do quadrado inscrito a circunfer�ncia e: %f\n", quadrado0);
    printf("O lado do pent�gono inscrito a circunfer�ncia e: %f\n", pentagono0);
    printf("O lado do hex�gono inscrito a circunfer�ncia e: %f\n", hexagono0);
    printf("O lado do hept�gono inscrito a circunfer�ncia e: %f\n", heptagono0);
    printf("O lado do oct�gono inscrito a circunfer�ncia e: %f\n", octogono0);
    printf("O lado do ene�gono inscrito a circunfer�ncia e: %f\n", eneagono0);
    printf("O lado do dec�gono inscrito a circunfer�ncia e: %f\n", decagono0);
    printf("O lado do dodec�gono inscrito a circunfer�ncia e: %f\n", dodecagono0);
    printf("O lado do icos�gono inscrito a circunfer�ncia e: %f\n\n", icosagono0);
    }

    system("pause");
    return 0;
}
