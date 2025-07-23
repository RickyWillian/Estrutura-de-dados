#include "ponto.h"
//Definição de dados
typedef struct esfera * Esfera;


//Definição dos prototipos
Esfera create_esfera ();
void set_esfera (Esfera, Ponto, Ponto);
void get_esfera(Esfera, Ponto, float *);
void del_esfera(Esfera *);
float raio (Esfera);
float area (Esfera);
float volume (Esfera);
