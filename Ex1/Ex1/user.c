#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"

int main()
{
    Complexo C1, C2, CSum, CSub, CMult;
    float c1, c2;


    printf("Digite a parte real do 1o numero complexo: \n");
    scanf("%f", &c1);
    printf("Digite a parte imaginaria do 1o numero complexo: \n");
    scanf("%f", &c2);

    C1 = create();
    if (!C1)
    {
        printf ("Falha ao criar o numero complexo \n");
        return -1;
    }
    set_value(C1, c1, c2);

    printf("Digite a parte real do 2o numero complexo: \n");
    scanf("%f", &c1);
    printf("Digite a parte imaginaria do 2o numero complexo: \n");
    scanf("%f", &c2);

    C2 = create();
    if(!C2)
    {
        printf ("Falha ao criar o numero complexo \n");
        return -1;
    }
    set_value(C2, c1, c2);

    CSum = sum(C1,C2);
    printf("A soma dos numeros complexos é: ");
    print(CSum);
    printf("\n");

    CSub = sub(C1, C2);
    printf ("A subtracao dos numeros complexos é: ");
    print(CSub);
    printf ("\n");

    CMult = mult(C1, C2);
    printf ("A multiplicacao dos numeros complexos é: ");
    print(CMult);
    printf ("\n");

    del(&C1);
    del(&C2);
    del(&CSum);
    del(&CSub);
    del(&CMult);
    return 0;
}
