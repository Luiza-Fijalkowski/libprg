//
// Created by aluno on 28/04/2026.
//

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
// revover
// buscar
// desctruir
