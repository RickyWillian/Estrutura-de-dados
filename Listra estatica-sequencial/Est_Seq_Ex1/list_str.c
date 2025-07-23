#include <stdio.h>
#include <string.h>
#include "list_str.h"
#define max 20 //tamanho maximo

struct lista{
    char list [max][11];
    int fim;
};
int existe = 0;

Lista cria_lista(){
    Lista l = (Lista) malloc (sizeof (struct lista));
    if ((!l)||(existe != 0)){
        printf("Falha na criação da lista \n");
        return NULL;
    }
    l->fim = 0;
    existe = 1;
    return l;
}

int lista_vazia(Lista l){
    if (l == NULL){
        printf("Erro: lista invalida");
        return 0;
    }
    if (l->fim > 0){
        return 1;
    }
    if (l->fim == 0){
        return 0;
    }
}
int lista_cheia(Lista l){
     if (l == NULL){
        printf("Erro: lista invalida");
        return 0;
    }
    if (l->fim == max)
        return 1;
    if (l->fim <max)
        return 0;
}

int insere_elem(Lista l, char string[11]){
     if ((l == NULL) || (l->fim>=max)){
        printf("Erro: lista invalida ou cheia");
        return 0;
     }
     strcpy(l->list[l->fim], string);
     l->fim++;
     return 1;
}



int remove_elem(Lista l, char alvo[11]){
    int aux = 0;
    if ((l == NULL)||(l->fim ==0)){
        printf("Erro: lista invalida ou cheia");
        return 0;
    }
    for (int i=0; i<max; i++){
            if(strcmp(l->list[i], alvo)==0){
                for (int j = i; j < l->fim - 1; j++) {
                    strcpy(l->list[j], l->list[j + 1]);
                }
                l->fim--;
                return 1;
            }
    }
    return 0;
}

char* get_elem_pos(Lista l, int pos){
    if ((l == NULL) || (l->fim==0)){
        printf("Erro: lista invalida ou vazia");
        return NULL;
    }
    if(pos>max){
        printf("posição invalida");
        return NULL;
    }
    return l->list[pos];
}

int esvazia_lista(Lista l){
    if (l == NULL){
        printf("Erro: lista invalida");
        return 0;
    }
    l->fim=0;
    return 1;
}

int apaga_lista(Lista l){
    free(l);
    l = NULL;
    existe = 0;
    return 1;
}
