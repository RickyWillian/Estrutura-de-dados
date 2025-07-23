#include <stdio.h>
#include "ponto.h"

int main()
{
    Ponto P1, P2;
    float x, y, z, distance;

    printf("Digite o valor x do 1o ponto: \n");
    scanf("%f", &x);
    printf("Digite o valor y do 1o ponto: \n");
    scanf("%f", &y);
    printf("Digite o valor z do 1o ponto: \n");
    scanf("%f", &z);

    P1 = create_point();
    if(!P1) printf("Erro ao gerar ponto");
    set_point(P1, x, y, z);

    printf("Digite o valor x do 2o ponto: \n");
    scanf("%f", &x);
    printf("Digite o valor y do 2o ponto: \n");
    scanf("%f", &y);
    printf("Digite o valor z do 2o ponto: \n");
    scanf("%f", &z);

    P2 = create_point();
    if(!P2) printf("Erro ao gerar ponto");
    set_point(P2, x, y, z);

    distance = dist(P1, P2);
    printf("A distancia entre os dois pontos eh: %.2f", distance);

    del_point(&P1);
    del_point(&P2);


    return 0;
}
