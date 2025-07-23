#include "list_beb.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define max 15
struct bebidas{
    char nome[11];
    int volume;
};

struct no{
    struct bebidas dados[max];
    int fim;
};

int existe = 0;
Lista cria_lista(){
    Lista l = (Lista) malloc (sizeof(struct no));
    if((!l)||(existe != 0)){
        printf("Falha na criação da lista \n");
        return NULL;
    }
    l->fim = 0;
    existe = 1;
    return l;
}

int lista_vazia(Lista l){
    if (!l){
        printf("Erro: lista invalida\n");
        return 0;
    }
    return l->fim == 0;
}
int lista_cheia(Lista l){
     if (!l){
        printf("Erro: lista invalida\n");
        return 0;
    }
    return l->fim == max;
}
int insere_ord(Lista l, char nome [11], int volume){
    if (!l){
        printf("Erro: lista invalida\n");
        return 0;
    }
    if (lista_cheia(l)){
        printf("Erro: lista cheia\n");
        return 0;
    }
    int i = 0;
    while (i< l->fim){
        int cmp = strcmp(l->dados[i].nome, nome);
        if(cmp <0)
            i++;
        else if (cmp == 0){
            if(l->dados[i].volume < volume)
               i++;
            else
                break;
            }
        else
            break;
    }
    for(int j=l->fim;j>i; j--){
        l->dados[j] = l->dados[j-1];
    }
    strcpy(l->dados[i].nome, nome);
    l->dados[i].volume = volume;
    l->fim++;
    return 1;
}

int remove_ord(Lista l, char nome[11]){
    int i = 0;
    while (i < l->fim && strcmp(l->dados[i].nome, nome) != 0) {
        i++;
    }
    if (i == l->fim) {
        printf("Bebida não encontrada\n");
        return 0;
    }
    for (int j = i; j < l->fim - 1; j++) {
        l->dados[j] = l->dados[j + 1];
    }

    l->fim--;
    return 1;
}

int get_elem_pos(Lista l, int pos, char* nome, int* volume){
    if (!l){
        printf("Erro: lista invalida\n");
        return 0;
    }
    if ((pos<0)||(pos> l->fim)){
        printf("Erro: Posição invalida\n");
        return 0;
    }
    strcpy(nome, l->dados[pos].nome);
    *volume = l->dados[pos].volume;
    return 1;
}

int esvazia_lista(Lista l){
    if (!l){
        printf("Erro: lista invalida\n");
        return 0;
    }
    l->fim = 0;
    return 1;
}
int apaga_lista(Lista l){
    free(l);
    l = NULL;
    existe = 0;
    return 1;
}
















