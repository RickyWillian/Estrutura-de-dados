#include <stdio.h>
#include <stdlib.h>
#include "list_beb.h"

int main()
{
    int qtd = 0, volume;
    char nome[11];
    Lista l;
    printf("Criando lista... \n");
    l = cria_lista();
    if(l != NULL)
        printf("Lista criada!\n");
    if(lista_vazia(l)==1)
        printf("A lista está vazia\n");
    printf("Quantos itens deseja inserir na lista? (max 15)\n");
    scanf("%d", &qtd);

    for(int i=0;i<qtd;i++){
        printf("Qual o nome da bebida a ser inserida? \n");
        scanf("%s", nome);
        printf("Qual o volume da bebida em ml? \n");
        scanf("%d", &volume);
        insere_ord(l, nome, volume);
    }
    if(lista_cheia(l)==1)
        printf("A lista está cheia\n");
    else
        printf("Ainda é possivel inserir mais elementos na lista\n");
    for (int j=0;j<qtd;j++){
        get_elem_pos(l,j,nome,&volume);
        printf("%dº bebida - Nome: %s, volume: %d mls. \n", j, nome, volume);
    }
    printf("\n\n");
    printf("Digite o nome de uma bebida que deseja excluir da lista:\n");
    scanf("%s", nome);
    remove_ord(l, nome);
    qtd--;
    printf("nova lista: \n\n");
    for (int j=0;j<qtd;j++){
        get_elem_pos(l,j,nome,&volume);
        printf("%dº bebida - Nome: %s, volume: %d mls. \n", j, nome, volume);
    }

    esvazia_lista(l);
    apaga_lista(l);
    return 0;
}
