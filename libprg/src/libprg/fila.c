
#include <stdbool.h>
#include <stdlib.h>
#include "libprg/libprg.h"

typedef struct fila {
    int* elementos ;
    int tamanho;
    int inicio;
    int fim;
    int capacidade;
    int* fila;
}fila_t;





fila_t* criar_fila(int capacidade) {
    fila_t* f = malloc(sizeof(fila_t));

    f->elementos = malloc(capacidade * sizeof(int));

    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
    f->capacidade = capacidade;

    return f;
}

void enfileirar(fila_t* f, int valor) {
    if (cheia(fila)) {
        exit(status:EXIT_FAILURE);
    }
    f->elementos[f->fim] = valor;
    f->fim++;
    f->tamanho++;
}
// desenfileirar
// inicio
// fim
// tamanho
// vazia
//destruir_fila

bool cheia(fila_t fila) {

    if (fila.tamanho >= fila.capacidade) {
        return true;;
    }else{return false;}
}




