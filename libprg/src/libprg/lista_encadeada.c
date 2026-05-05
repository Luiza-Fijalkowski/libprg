//
// Created by aluno on 28/04/2026.
//

#include <stdbool.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *proximo;
}no_t;

no_t* criar_lista_encadeada(int dado) {
    no_t* no= malloc(sizeof(no_t));
    no->dado = (int) NULL;
    no->proximo = NULL;

    return no;
}
void inserir_ecadeada(no_t** inicio, int dado) {

    no_t* novo = criar_lista_encadeada(dado);
    novo->proximo = *inicio;
    *inicio = novo;
}
 bool revover_encadeada(no_t** inicio,int dado) {
    no_t* anterior = *inicio;
    no_t* atual = *inicio;

    while(atual != NULL) {
        if(atual->dado == dado) {
            if (anterior == NULL) *inicio = atual->proximo;
            else anterior = atual->proximo;
        }
    }
}
no_t* buscar_encadeada(no_t** inicio, int dado) {
    no_t* atual = *inicio;

    while (atual != NULL){
        if (atual->dado == dado) return atual;
        atual = atual->proximo;
    }
}
void destruir_encadeada(no_t** inicio) {
        no_t *atual = *inicio;
        no_t *prox;

        while (atual != NULL) {
            prox = atual->proximo;
            free(atual);
            atual = prox;
        }

        *inicio = NULL;
    }

