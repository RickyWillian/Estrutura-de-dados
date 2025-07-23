// Definicao do novo tipo de dados (PONTEIRO para estrutura ponto)
typedef struct ponto * Ponto;

// Prototipo das funcoes
Ponto create_point();
void set_point(Ponto, float, float, float);
void get_point (Ponto, float *, float *, float *);
void del_point (Ponto *);
float dist(Ponto, Ponto);
void print_point (Ponto);
