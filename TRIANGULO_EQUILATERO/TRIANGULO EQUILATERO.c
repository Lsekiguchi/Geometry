#include <stdio.h>
#include <stdlib.h>

int main() {
 printf("Digite o valor do lado do triangulo equilatero: ");
 float lado, altura, area, cinscrita, ccircunscrita, cexinscrita;
 const float r3 = 1.732;
 scanf("%f", &lado);
 altura = lado*r3/2;
 printf("A altura do triangulo e: %f\n", altura);
 cinscrita = altura/3;
 printf("O raio da circunferencia inscrita a esse triangulo e: %f\n", cinscrita);
}
