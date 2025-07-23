typedef struct lista * Lista;



Lista cria_lista();
int lista_vazia(Lista);
int lista_cheia(Lista);
int insere_elem(Lista, char[]);
int remove_elem(Lista, char[]);
char* get_elem_pos(Lista, int);
int esvazia_lista(Lista);
int apaga_lista(Lista);
