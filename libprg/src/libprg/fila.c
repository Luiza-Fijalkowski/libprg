//
// Created by aluno on 26/03/2026.
//


#include <stdlib.h>

typedef struct fila {
    int* elementos;
    int inicio;
    int fim;
    int tamanho;
    int capacidade;
}fila_t;

fila_t* criar_fila(int capacidade) {
    fila_t* fila = malloc(sizeof(fila_t));
    fila->elementos = malloc(sizeof(int) * capacidade);
    fila->inicio = 0;
    fila->fim = 0;
    fila->tamanho = 0;
    fila->capacidade = capacidade;

    return fila;
}

void enfileirar(fila_t* fila, int valor) {

    if(fila->fim >= fila->tamanho) exit(EXIT_FAILURE);

    fila->elementos[fila->fim] = valor;
    fila->fim = (fila->fim + 1) % fila->capacidade;
    fila->tamanho++;
}
void desemfileirar(fila_t* fila, int valor) {
    if (fila->inicio <= 0) exit(EXIT_FAILURE);

    fila->elementos[fila->fim] = valor;
    fila->fim = (fila->fim - 1) % fila->capacidade;
    fila->tamanho--;
}

int inicio(fila_t* fila, int inicio) {
    fila->inicio = inicio;
    return fila->inicio;
}

int fim(fila_t* fila, int fim) {

    fila->elementos[fim] = fila->elementos[fila->fim];
    return fila->elementos[fila->fim];

}

int vazia(fila_t* fila, int capacidade) {

    if(capacidade <= 0) exit(EXIT_FAILURE);
}

int cheia(fila_t* fila, int capacidade) {

    if (capacidade >= 0) exit(EXIT_FAILURE);
}

int destruir_fila(fila_t* fila) {

    free(fila->elementos);
    free(fila);
    return 0;
}