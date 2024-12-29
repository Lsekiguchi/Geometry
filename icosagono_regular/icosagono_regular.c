#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    const float sen9 = 0.1564;
    const float cos9 = 0.9877;

    const float sen18 = 0.309;
    const float cos18 = 0.951;
    const float sen36 = 0.5878;



    float lado20, area20, ccircunscrita20, cinscrita20, diagonal201, diagonal202, diagonal203, diagonal204, diagonal205, diagonal206, diagonal207, diagonal208, diagonal209;
    printf("Digite o valor do lado do icoságono regular: ");
    scanf("%f", &lado20);
    printf("\n");
    ccircunscrita20 = lado20/(2*sen9);
    cinscrita20 = ccircunscrita20*cos9;
    diagonal201 = 2*lado20*cos9;
    diagonal202 = ccircunscrita20*sqrt(2 - 2*sen36);
    diagonal203 = ccircunscrita20*sqrt(2 - 2*sen18);
    diagonal204 = ccircunscrita20*sqrt(2);
    diagonal205 = ccircunscrita20*sqrt(2 + 2*sen18);
    diagonal206 = ccircunscrita20*sqrt(2 + 2*sen36);
    diagonal207 = 2*ccircunscrita20*cos18;
    diagonal208 = 2*ccircunscrita20*cos9;
    diagonal209 = 2*ccircunscrita20;
    area20 = 10*lado20*cinscrita20;

    printf("O raio da circunferência circunscrita ao icoságono é: %f\n", ccircunscrita20);
    printf("O raio da circunferência inscrita ao icoságono é: %f\n", cinscrita20);
    printf("A menor diagonal do icoságono mede: %f\n", diagonal201);
    printf("A segunda menor diagonal do icoságono mede: %f\n", diagonal202);
    printf("A terceira menor diagonal do icoságono mede: %f\n", diagonal203);
    printf("A quarta menor diagonal do icoságono mede: %f\n", diagonal204);
    printf("A quinta menor diagonal do icoságono mede: %f\n", diagonal205);
    printf("A sexta menor diagonal do icoságono mede: %f\n", diagonal206);
    printf("A setima menor diagonal do icoságono mede: %f\n", diagonal207);
    printf("A oitava menor diagonal do icoságono mede: %f\n", diagonal208);
    printf("A maior diagonal do icoságono mede: %f\n", diagonal209);
    printf("A area do icosagono e: %f\n\n", area20);




    printf("\n");
    system("pause");
    return 0;
}
