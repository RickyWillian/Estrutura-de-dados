#include <stdio.h>
#include <stdlib.h>
#include "complexo.h"


//declaração da estutura do número complexo
struct complexo
{
    float real, imag;
};

//declaração das operações com números complexos
Complexo create()
{
    Complexo C;
    C = (Complexo) malloc(sizeof(struct complexo));
    return (C);
}

void set_value(Complexo C, float c1, float c2)
{
    C->real = c1;
    C->imag = c2;
}

void get_value (Complexo C, float *c1, float *c2)
{
    *c1 = C->real;
    *c2 = C->imag;
}

void del (Complexo *C)
{
    free(*C);
    *C = NULL;
}

Complexo sum(Complexo C1, Complexo C2)
{
    Complexo C3 = create();

    set_value(C3,(C1->real + C2->real), (C1->imag + C2->imag));

    return (C3);
}

Complexo mult (Complexo C1, Complexo C2)
{
    Complexo C3 = create();
    float a, b, c, d;
    a = C1->real * C2->real;
    b = C1->real * C2->imag;
    c = C1->imag * C2->real;
    d = C1->imag * C2->imag;
    set_value(C3,(a-d),(b+c));
    return (C3);
}

Complexo sub (Complexo C1, Complexo C2)
{
    Complexo C3 = create();
    set_value(C3,(C1->real - C2->real), (C1->imag - C2->imag));

    return (C3);
}

void print (Complexo C1)
{
    if(C1->imag >= 0)
    printf("%.2f + %.2f i", C1->real, C1->imag);
    else
    printf("%.2f %.2f i", C1->real, C1->imag);
}

