#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "esfera.h"
#include "ponto.h"

//Define pi para ser usado em contas
#define PI 3.14159265358979323846f

struct esfera {
    Ponto centro, p2;
    float raio;
};

Esfera create_esfera (){
    Esfera s = (Esfera) malloc (sizeof(struct esfera));
    if (!s){
        printf("Falha na criacao da esfera \n");
        return NULL;
    }
    return s;
}

void set_esfera (Esfera s, Ponto centro, Ponto p2){
    if((!s)||(!centro)||(!p2)){
        printf ("erro de acesso ao ponteiro em set_esfera\n");
        return NULL;
    }
    s->centro = centro;
    s->p2 = p2;
    s->raio = dist(centro, p2);
}

void get_esfera(Esfera s, Ponto centro_out, float *raio_out){
    if((!s)||(!centro_out)||(!raio_out)){
        printf ("erro de acesso ao ponteiro em get_esfera \n");
        return NULL;
    }
     float x, y, z;
    get_point(s->centro, &x, &y, &z);
    set_point(centro_out, x, y, z);
    *raio_out = s->raio;
}

void del_esfera(Esfera *s){
    free(*s);
    *s=NULL;
}


float raio (Esfera s){
    float r;
    if (!s) {
        printf("Erro de acesso ao ponteiro em raio\n");
        return 0.0;
    }
    r = s->raio;
    return r;
}

float area (Esfera s){
    float a;
     if (!s) {
        printf("Erro de acesso ao ponteiro em area\n");
        return 0.0;
    }
    a = 4.0 * PI * powf(s->raio, 2);
    return a;
}

float volume (Esfera s){
    float v;
    if (!s){
        printf("Erro de acesso ao ponteiro em volume\n");
        return 0.0;
    }
    v = (4.0 / 3.0) * PI * powf(s->raio, 3);
    return v;
}
