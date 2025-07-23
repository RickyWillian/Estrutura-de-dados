#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include"ponto.h"
struct ponto
{
    float x, y, z;
};

Ponto create_point()
{
    Ponto P;
    P = (Ponto) malloc (sizeof(struct ponto));
    return P;
}
void set_point(Ponto P, float x, float y, float z)
{
    P->x = x;
    P->y = y;
    P->z = z;
}
void get_point (Ponto P, float *x, float *y, float *z)
{
    *x = P->x;
    *y = P->y;
    *z = P->z;
}
void del_point (Ponto *P)
{
    free(*P);
    *P=NULL;
}
float dist(Ponto P1, Ponto P2)
{
    float distance, a, b, c;
    a = (P1->x - P2->x);
    a = pow(a,2);
    b = (P1->y - P2->y);
    b = pow(b,2);
    c = (P1->z - P2->z);
    c = pow(c,2);
    distance = sqrt(a+b+c);
    return distance;

}
void print_point (Ponto P)
{
    printf("x = %.2f, y = %.2f, z = %.2f", P->x, P->y, P->z);
}
