#include <stdio.h>
#include <stdlib.h>
#include "esfera.h"
#include "ponto.h"

int main()
{
    Ponto pCentro = create_point();
    Ponto p2 = create_point();
    float x, y, z;
     if(!pCentro)
    {
        printf("erro ao criar o ponto central \n");
        return 1;
    }
     if(!p2)
    {
        printf("erro ao criar o ponto externo \n");
        return 1;
    }
    printf("Digite o valor do ponto que será o centro da esfera: \n");
    scanf("%f %f %f", &x , &y, &z);
    set_point(pCentro, x, y, z);
    printf("Digite o ponto que delimita o raio da esfera: \n");
    scanf("%f %f %f", &x , &y, &z);
    set_point(p2, x, y, z);

    Esfera s1 = create_esfera();
    if (!s1){
        printf("Erro ao criar esfera \n");
        del_point(&pCentro);
        del_point(&p2);
        return 1;
    }

    set_esfera(s1,pCentro,p2);

    printf("O raio da esfera eh: %.2f \n", raio(s1));
    printf("A area da esfera eh: %.2f \n", area(s1));
    printf("O volume da esfera eh: %.2f \n", volume(s1));

    del_point(&pCentro);
    del_point(&p2);
    del_esfera(&s1);

    return 0;
}
