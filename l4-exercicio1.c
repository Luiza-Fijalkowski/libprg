//
// Created by luiza on 15/09/2025.
//
#ifndef LIBPRG_H
#define LIBPRG_H

// Estrutura do nó
typedef struct No {
    int dado;
    struct No *prox;
} No;

// Estrutura da fila
typedef struct {
    No *inicio;
    No *fim;
    int tamanho;
} Fila;

// Protótipos das funções
void inicializarFila(Fila *f);
int filaVazia(Fila *f);
void enfileirar(Fila *f, int valor);
int desenfileirar(Fila *f);
int frente(Fila *f);
int tamanhoFila(Fila *f);
void imprimirFila(Fila *f);

#endif
