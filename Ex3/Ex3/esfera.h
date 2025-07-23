#include "ponto.h"
//Defini��o de dados
typedef struct esfera * Esfera;


//Defini��o dos prototipos
Esfera create_esfera ();
void set_esfera (Esfera, Ponto, Ponto);
void get_esfera(Esfera, Ponto, float *);
void del_esfera(Esfera *);
float raio (Esfera);
float area (Esfera);
float volume (Esfera);
