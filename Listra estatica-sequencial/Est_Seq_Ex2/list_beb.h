typedef struct no * Lista;


Lista cria_lista();
int lista_vazia(Lista);
int lista_cheia(Lista);
int insere_ord(Lista, char[11], int);
int remove_ord(Lista, char[11]);
int get_elem_pos(Lista, int, char*, int*);
int esvazia_lista(Lista);
int apaga_lista(Lista);
