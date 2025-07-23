// Definicao do novo tipo de dados (PONTEIRO para estrutura complexo)
typedef struct complexo * Complexo;

//Prototipo das funções
Complexo create();
void set_value(Complexo, float, float);
void get_value (Complexo, float *, float *);
void del (Complexo *);
Complexo sum(Complexo, Complexo);
Complexo mult (Complexo, Complexo);
Complexo sub (Complexo, Complexo);
void print (Complexo);
