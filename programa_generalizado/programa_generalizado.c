#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    inicio:
    printf("Digite o n�mero de lados do pol�gono regular: ");
    unsigned int num, diagnum, aux; //num -> n� de lados; diagnum -> n� de diagonais
    float lado, ang, ccircunscrita, cinscrita, arco, area; //lado -> tamanho dos lados; ang -> �ngulo em cada v�rtice
    const float pi = 3.14159265;
    scanf("%i", &num);
    if (num < 3) {
        printf("Um pol�gono possui, no m�nimo, 3 lados.\n\n");
        goto inicio;
    }
    printf("Digite o tamanho dos lados do pol�gono regular: ");
    scanf("%f", &lado);
    ang = pi*(num - 2)/num;
    arco = 2*pi/num;
    ccircunscrita = lado/(2*sin(arco/2));
    printf("\nO raio da circunfer�ncia circunscrita ao pol�gono regular �: %f\n", ccircunscrita);
    cinscrita = ccircunscrita*cos(arco/2);
    printf("O raio da circunfer�ncia inscrita ao pol�gono regular �: %f\n", cinscrita);
    diagnum = (num - 2)/2;
    float diagonais[diagnum];
    if (num == 3) {
        printf("N�o h� diagonais\n\n");
    } else {
    diagonais[0] = lado*sqrt(2 - 2*cos(ang));
    aux = 1;
    while (aux <= diagnum - 1) {
            diagonais[aux] = diagonais[aux - 1]*cos(arco/2) + sqrt(lado*lado - diagonais[aux - 1]*diagonais[aux - 1]*sin(arco/2)*sin(arco/2));
            aux++;
    }
    aux = 1;
    printf("As diagonais do pol�gono s�o: %f", diagonais[0]);
    while (aux <= diagnum - 1) {
        printf(", %f", diagonais[aux]);
        aux++;
    }
    printf("\n");
    }
    area = num*lado*cinscrita/2;
    printf("A �rea do pol�gono �: %f\n\n", area);
    system("pause");
    return 0;
}
