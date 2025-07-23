#include <stdio.h>
#include <stdlib.h>
#include "list_str.h"

int main()
{
    int qtd, z;
    char palavra[11];
    Lista l;
    
    l = cria_lista();
    
    if(lista_vazia(l)==0)
      printf("A Lista está vazia \n");
    else
      printf("A lista não está vazia. \n");
    
    printf("Quantos elementos voce quer inserir na lista? (max 20)\n");
    scanf("%d", &qtd);
    
    for(int i=0; i<qtd; i++){
        printf("Digite o elemento %d da lista. \n", i+1);
        scanf("%s", palavra);
        insere_elem(l, palavra);
        int x = lista_cheia(l);
        if (x == 0)
          printf("Lista não está cheia\n");
        else
          printf("Lista cheia");
    }
    

    
    printf("Lista de palavras:\n\n");
    for (int i = 0; i<qtd; i++){
        char  *print = get_elem_pos(l, i);
        printf("%d - %s\n", i + 1 , print);
    }
    
    printf("\n\n");
    
    printf("Qual elemento da lista deseja remover? \n");
    scanf("%s", palavra);
    
    z = remove_elem(l, palavra);
    if(z==1)
        printf("SUCESSO!\n");
    else 
        printf("Remoção de item falhou\n");
        
    printf("Esvaziando lista \n");
    esvazia_lista(l);
    if(lista_vazia(l)==0)
      printf("A Lista está vazia \n");
    else
      printf("A lista não está vazia. \n");
    
    
    if (apaga_lista(l) == 1){
      printf("Lista apagada com sucesso \n");
    }
    
    
    return 0;
}
