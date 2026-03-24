//
// Created by aluno on 24/03/2026.
//
#include "libprg.h"
#include <stdlib.h>

typedef struct pilha {
    int* elementos;
    int topo;
    int capacidade;
}pilha_t;// _t é uma convenção do C

pilha_t* criar_pilha(int capacidade) {

    pilha_t* pilha = malloc(sizeof(pilha_t));
    pilha->elementos = malloc(sizeof(int) * capacidade);
    pilha->topo = -1;
    pilha->capacidade = capacidade;

    return pilha;
}

empilhar(pilha_t* pilha, int valor) {

    if (pilha->topo < pilha->capacidade) {
        pilha->topo++;
        pilha->elementos = realloc (pilha->elementos, pilha->capacidade * sizeof(int));
    }

    return 0;
}
// PRÓXIMA AULA:
// desempilhar
// tamanho
// vazia
// destruir_pilha