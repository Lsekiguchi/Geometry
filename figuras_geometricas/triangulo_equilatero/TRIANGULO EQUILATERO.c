#include <stdio.h>
#include <stdlib.h>

int main() {
 printf("Digite o valor do lado do triangulo equilatero: ");
 float lado3, altura, area3, cinscrita3, ccircunscrita3, cexinscrita3;
 const float r3 = 1.732;
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
 system("pause");
 return 0;
}
