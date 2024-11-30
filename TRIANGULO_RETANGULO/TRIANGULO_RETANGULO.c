#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("\aDigite o valor dos catetos de um triangulo retangulo: ");
  float cateto1, cateto2, hipotenusa, perimetro, cinscrita, ccircunscrita, cexinscrita1, cexinscrita2, cexinscrita3, altura, sp;
  scanf("%f %f", &cateto1, &cateto2);
  hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
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
  printf("O raio da circunferencia ex-inscrita a hipotenusa e: %f\n", cexinscrita3);
return 0;
}
